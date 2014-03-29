#include <QApplication>
#include <QtQml>
#include <QtQuick>
#include <QScreen>
#include <QDebug>

#ifdef Q_OS_ANDROID
#include <QtAndroidExtras/QAndroidJniObject>
#endif

#include "bootstrap/properties.h"

QApplication *app;
QQmlApplicationEngine *engine;

void setupDpUnit()
{
    //implement density-independent pixel
    qreal dp;
    qreal dotsPerInch = app->screens()[0]->physicalDotsPerInch();
    qDebug() << "physicalDotsPerInch = " << dotsPerInch;
    dp = qRound(dotsPerInch) / 125.0;
#ifdef Q_OS_ANDROID
    qDebug() << "Android OS detected";
    QAndroidJniObject activity = QAndroidJniObject::callStaticObjectMethod("org/qtproject/qt5/android/QtNative", "activity", "()Landroid/app/Activity;");
    QAndroidJniObject resource = activity.callObjectMethod("getResources","()Landroid/content/res/Resources;");
    QAndroidJniObject metrics = resource.callObjectMethod("getDisplayMetrics","()Landroid/util/DisplayMetrics;");
    dp = metrics.getField<float>("density");
#endif
#ifdef Q_OS_IOS
    qDebug() <<	"iOS detected";
    dp = 3;
#endif
    if(dp < 1) { dp = 1; }
    qDebug() << "1dp = " << dp;
    engine->rootContext()->setContextProperty(QLatin1String("dp"), QVariant::fromValue(dp));
}

void setupFontAwesome()
{
    int fontId = QFontDatabase::addApplicationFont(":/font/fontawesome-webfont.ttf");
    if(fontId == -1) { qWarning() << "Error: failed to load FontAwesome font"; }
}

void registerTypes()
{
//    const char *uri = "QMLBootstrap";
//    const int major = 1, minor = 0;

    setupFaIcons();
    setupProperties();
    customize();
    engine->rootContext()->setContextProperty(QLatin1String("faIcons"), m_faIcons);
    engine->rootContext()->setContextProperty(QLatin1String("bs"), m_properties);

    QFile fragFile1(":/qml/Components/RoundedImage.frag");
    if(fragFile1.open(QIODevice::ReadOnly)) {
        QTextStream in(&fragFile1);
        engine->rootContext()->setContextProperty(QLatin1String("roundedImageFragShader"), in.readAll());
        fragFile1.close();
    }
    QFile fragFile2(":/qml/Components/ImageScope.frag");
    if(fragFile2.open(QIODevice::ReadOnly)) {
        QTextStream in(&fragFile2);
        engine->rootContext()->setContextProperty(QLatin1String("imageScopeFragShader"), in.readAll());
        fragFile2.close();
    }
}

int main(int argc, char *argv[])
{
//    QApplication app(argc, argv);
    app = new QApplication(argc,argv);
    app->setOrganizationName("YourOrganizationName");
    app->setApplicationName("YourAppName");

//    QQmlApplicationEngine engine;
    engine = new QQmlApplicationEngine();

    setupDpUnit();
    setupFontAwesome();
    registerTypes();

    qDebug() << "OfflineStoragePath: " << engine->offlineStoragePath();

    // qmlファイルをロード
    engine->load(QUrl("qrc:/qml/main.qml"));

    QObject *topLevel = engine->rootObjects().value(0);
    QQuickWindow *window = qobject_cast<QQuickWindow *>(topLevel);
    if ( !window ) {
        qWarning("Error: Your root item has to be a Window.");
        return -1;
    }
    window->show();
    return app->exec();
}

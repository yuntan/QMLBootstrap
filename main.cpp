#include <QApplication>
#include <QtQml>
#include <QtQuick>
#include <QScreen>
#include <QDebug>

#ifdef Q_OS_ANDROID
#include <QtAndroidExtras/QAndroidJniObject>
#endif

#include "src/bootstrap/bootstrapinfo.h"

static const struct {
    const char *type;
} components [] = {
    { "FontAwesomeIcon" }
};

QApplication *app;
QQmlApplicationEngine *engine;

void setupDpUnit()
{
    //implement density-independent pixel
    int dp = 1;
    qreal dotsPerInch = app->screens()[0]->physicalDotsPerInch();
    qDebug() << "physicalDotsPerInch = " << dotsPerInch;
    dp = qRound(dotsPerInch) / 125;
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
    qDebug() << "1dp = " << dp;
    engine->rootContext()->setContextProperty(QLatin1String("dp"), QVariant::fromValue(dp));
}

void setupFontAwesome()
{
    int fontId = QFontDatabase::addApplicationFont(":/font/fontawesome-webfont.ttf");
    if(fontId == -1) { qWarning() << "Error: failed to load FontAwesome font"; }
}

static QObject *bsInfoProvider(QQmlEngine *engine, QJSEngine *scriptEngine)
{
    Q_UNUSED(engine)
    Q_UNUSED(scriptEngine)
    return new BootstrapInfo();
}

void registerTypes()
{
    const char *uri = "QMLBootstrap";
    const int major = 1, minor = 0;
    qmlRegisterSingletonType<BootstrapInfo>(uri, major, minor, "BS", bsInfoProvider);
    for(int i = 0; i < int(sizeof(components) / sizeof(components[0])); i++) {
        qmlRegisterType(QUrl(QString("qrc:/qml/Components/%1.qml").arg(components[i].type)), uri, major, minor, components[i].type);
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

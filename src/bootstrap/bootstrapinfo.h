#ifndef BOOTSTRAPINFO_H
#define BOOTSTRAPINFO_H

#include <QObject>
#include <QtQml/QQmlPropertyMap>

class BootstrapInfo : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QObject *faIcons MEMBER m_faIcons CONSTANT)
    Q_PROPERTY(QObject *colors MEMBER m_colors CONSTANT)
    Q_PROPERTY(QObject *scaffolding MEMBER m_scaffolding CONSTANT)
    Q_PROPERTY(QObject *fontSize MEMBER m_fontSize CONSTANT)
    Q_PROPERTY(QObject *lineHeight MEMBER m_lineHeight CONSTANT)
    Q_PROPERTY(QObject *padding MEMBER m_padding CONSTANT)
    Q_PROPERTY(QObject *borderRadius MEMBER m_borderRadius CONSTANT)
    Q_PROPERTY(QObject *globalColors MEMBER m_globalColors CONSTANT)
    Q_PROPERTY(QObject *buttonColors MEMBER m_buttonColors CONSTANT)

public:
    explicit BootstrapInfo(QObject *parent = 0);

private:
    void setupFaIcons();
    void setupColors();
    void setupScaffolding();
    void setupFontSize();
    void setupComponentValues();
    void setupButtonValues();

    QQmlPropertyMap *m_faIcons;
    QQmlPropertyMap *m_colors;
    QQmlPropertyMap *m_scaffolding;
    QQmlPropertyMap *m_fontSize;
    QQmlPropertyMap *m_lineHeight;
    QQmlPropertyMap *m_padding;
    QQmlPropertyMap *m_borderRadius;
    QQmlPropertyMap *m_globalColors;
    QQmlPropertyMap *m_buttonColors;
};

#endif // BOOTSTRAPINFO_H

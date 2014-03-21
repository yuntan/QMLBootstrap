#ifndef BOOTSTRAPINFO_H
#define BOOTSTRAPINFO_H

#include <QObject>
#include <QtQml/QQmlPropertyMap>

class BootstrapInfo : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QObject *faIcons MEMBER m_faIcons CONSTANT)
    Q_PROPERTY(QObject *colors MEMBER m_colors CONSTANT)

public:
    explicit BootstrapInfo(QObject *parent = 0);

private:
    void setFaIcons();
    void setColors();

    QQmlPropertyMap *m_faIcons;
    QQmlPropertyMap *m_colors;
};

#endif // BOOTSTRAPINFO_H

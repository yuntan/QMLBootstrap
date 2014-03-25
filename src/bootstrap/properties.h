#ifndef PROPERTIES_H
#define PROPERTIES_H

class QQmlPropertyMap;
class QColor;

extern QQmlPropertyMap *m_faIcons;
extern QQmlPropertyMap *m_properties;

#define ADD_ICON(key, unicode) \
    m_faIcons->insert(QLatin1String(#key), QVariant(#unicode));

#define SET_PROPERTY(key, value) \
    m_properties->insert(QLatin1String(#key), QVariant(value));

#define SET_PROPERTY_BY_ID(key, id) \
    m_properties->insert(QLatin1String(#key), m_properties->value(#id));

#define GET_VALUE(key) \
    m_properties->value(#key)

#define GET_COLOR(key) \
    QColor(m_properties->value(#key).toString())

// populate m_faIcons
void setupFaIcons();
// populate m_properties
void setupProperties();
// user customization
void customize();

// less lighten, darken
// amount: percentage(0-100)
QColor lighten(QColor color, uint amount);
QColor darken(QColor color, uint amount);

#endif // PROPERTIES_H

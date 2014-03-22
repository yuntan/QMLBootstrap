#ifndef PROPERTIES_H
#define PROPERTIES_H

class QQmlPropertyMap;

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


void setupFaIcons();
void setupProperties();
void customize();

#endif // PROPERTIES_H

#include "contribuidores.h"

Contribuidores::Contribuidores()
{

}

Contribuidores::Contribuidores(const QString &nombre, const QUrl &url)
    : m_nombre(nombre), m_url(url)
{

}

Contribuidores::Contribuidores(const QString &nombre)
    : m_nombre(nombre)
{

}

const QString &Contribuidores::getNombre() const
{
    return m_nombre;
}

const QUrl &Contribuidores::getUrl() const
{
    return m_url;
}

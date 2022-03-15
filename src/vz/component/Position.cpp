#include "vzpch.h"
#include "Position.h"

namespace vz
{

    CPosition::CPosition()
        : CBase(Component::Position), m_elevation(0)
    {

    }

    void CPosition::Read(std::stringstream &ss)
    {

    }

    void CPosition::MoveBy(const sf::Vector2f &by)
    {
        SavePosition();
        m_position      += by;
    }

    void CPosition::MoveBy(float x, float y)
    {
        SavePosition();
        m_position.x += x;
        m_position.y += y;
    }

    void CPosition::MoveTo(const sf::Vector2f &end)
    {
        SavePosition();
        m_position = end;
    }

    void CPosition::MoveTo(float x, float y)
    {
        SavePosition();
        m_position.x = x;
        m_position.y = y;
    }

    void CPosition::SetElevation(unsigned int val)
    {
        m_elevation = val;
    }

    const sf::Vector2f& CPosition::GetPosition() const
    {
        return m_position;
    }

    const sf::Vector2f& CPosition::GetOldPosition() const
    {
        return m_oldPosition;
    }

    unsigned CPosition::GetElevation() const
    {
        return m_elevation;
    }

    void CPosition::SavePosition()
    {
        m_oldPosition.x = m_position.x;
        m_oldPosition.y = m_position.y;
    }
}
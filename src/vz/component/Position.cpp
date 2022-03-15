#include "vzpch.h"
#include "Position.h"

namespace vz
{

    CPosition::CPosition(const Component &comp) : CBase(comp)
    {

    }

    void CPosition::Read(std::stringstream &ss)
    {

    }

    void CPosition::MoveBy(const sf::Vector2f &by)
    {

    }

    void CPosition::MoveBy(float x, float y)
    {

    }

    void CPosition::MoveTo(const sf::Vector2f &end)
    {

    }

    void CPosition::MoveTo(float x, float y)
    {

    }

    void CPosition::SetPosition(const sf::Vector2f &pos)
    {

    }

    void CPosition::SetPosition(float x, float y)
    {

    }

    void CPosition::SetElevation(unsigned int val)
    {

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
}
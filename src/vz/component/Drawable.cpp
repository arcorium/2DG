#include "vzpch.h"
#include "Drawable.h"

namespace vz
{

    void CDrawable::Read(std::stringstream &ss)
    {

    }

    CDrawable::CDrawable(const Component &comp) : CBase(comp)
    {

    }

    /////////////////////////////////////////////////////////////////////////////////////////////////////////
    /////////////////////////////////////////////////SPRITE SHEET////////////////////////////////////////////
    /////////////////////////////////////////////////////////////////////////////////////////////////////////
    CSpriteSheet::CSpriteSheet()
            : CDrawable(Component::SpriteSheet), m_sprite(nullptr)
    {

    }

    CSpriteSheet::~CSpriteSheet()
    {
        SAFE_DELETE(m_sprite);
    }

    void CSpriteSheet::Read(std::stringstream &ss)
    {

    }

    void CSpriteSheet::UpdatePosition(const sf::Vector2f &pos)
    {

    }

    sf::Vector2u CSpriteSheet::GetSize() const
    {
        return m_sprite->GetSize();
    }

    void CSpriteSheet::Draw(sf::RenderWindow *renderer) const
    {

    }

    SpriteSheet* CSpriteSheet::GetSpriteSheet() const
    {
        return m_sprite;
    }

    void CSpriteSheet::Create(TextureManager* manager, const std::string &name)
    {

    }
}
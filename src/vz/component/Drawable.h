#ifndef INC_2DG_DRAWABLE_H
#define INC_2DG_DRAWABLE_H

#include <SFML/Graphics/RenderWindow.hpp>
#include "Component.h"
#include "vz/SpriteSheet.h"
#include "vz/Manager.h"

namespace vz
{
    class CDrawable : public CBase
    {
    public:

        CDrawable() = default;
        CDrawable(const Component& comp);
        ~CDrawable() override = default;

        void Read(std::stringstream &ss) override;

        virtual void UpdatePosition(const sf::Vector2f& pos) = 0;
        [[nodiscard]] virtual sf::Vector2u GetSize() const = 0;
        virtual void Draw(sf::RenderWindow* renderer) const = 0;
    };

    class CSpriteSheet : public CDrawable
    {
    public:
        CSpriteSheet();
        ~CSpriteSheet() override;

        void Read(std::stringstream &ss) override;
        void UpdatePosition(const sf::Vector2f &pos) override;
        void Draw(sf::RenderWindow *renderer) const override;

        [[nodiscard]] SpriteSheet* GetSpriteSheet() const;
        [[nodiscard]] sf::Vector2u GetSize() const override;

        void Create(TextureManager* manager, const std::string& name = "");

    private:
        SpriteSheet* m_sprite;  // Should be deleted
        std::string m_name;
    };
}


#endif //INC_2DG_DRAWABLE_H

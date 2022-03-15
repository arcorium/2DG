#ifndef INC_2DG_POSITION_H
#define INC_2DG_POSITION_H

#include "Component.h"

namespace vz
{
    class CPosition : public CBase
    {
    public:
        CPosition();
        ~CPosition() override = default;

        void Read(std::stringstream &ss) override;
        void MoveBy(const sf::Vector2f& by);
        void MoveBy(float x, float y);
        void MoveTo(const sf::Vector2f& end);
        void MoveTo(float x, float y);

        // Setter
        void SetElevation(unsigned val);

        // Getter
        [[nodiscard]] const sf::Vector2f& GetPosition() const;
        [[nodiscard]] const sf::Vector2f& GetOldPosition() const;
        [[nodiscard]] unsigned GetElevation() const;

    private:
        void SavePosition();

    private:
        sf::Vector2f m_position;
        sf::Vector2f m_oldPosition;
        unsigned m_elevation;
    };
}


#endif //INC_2DG_POSITION_H

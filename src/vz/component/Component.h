#ifndef INC_2DG_COMPONENT_H
#define INC_2DG_COMPONENT_H

#include <SFML/System/Vector2.hpp>

namespace vz
{

    enum class Component : uint8_t
    {
        NONE = 0,

    };

    class CBase
    {
    public:
        CBase() : m_type(Component::NONE) {}
        CBase(const Component& comp) : m_type(comp) {}
        virtual ~CBase() = default;

        friend std::stringstream& operator<<(std::stringstream& ss, CBase& comp)
        {
            comp.Read(ss);

            return ss;
        }

        [[nodiscard]] Component GetType() const { return m_type; }

        virtual void Read(std::stringstream& ss) = 0;

    protected:
        Component m_type;
    };
}

#endif //INC_2DG_COMPONENT_H

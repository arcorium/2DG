#ifndef INC_2DG_CORE_H
#define INC_2DG_CORE_H
#include "vzpch.h"

// Concept
namespace vz
{
    template<typename T, std::derived_from<T> U>
    T CastTo(const T& val)
    {
        return static_cast<T>(val);
    }
}

#endif //INC_2DG_CORE_H

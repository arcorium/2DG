#ifndef INC_2DG_CORE_H
#define INC_2DG_CORE_H
#include "vzpch.h"

#define SAFE_DELETE(ptr)    if (ptr) delete ptr; ptr = nullptr
#define SAFE_DELETE_CUSTOM(ptr, pred) pred(ptr); ptr = nullptr

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

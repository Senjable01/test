#include "StaticLibraryTest.h"
#include <cmath>

namespace UsefulTools
{
    float SquaredLength(const float x, const float y)
    {
        return std::powf(x, 2.0f) + std::powf(y, 2.0f);
    }
    float SquaredLength(const float x, const float y, const float z)
    {
        return std::powf(x, 2.0f) + std::powf(y, 2.0f) + std::powf(z, 2.0f);
    }

    DirectX::XMFLOAT2 Normalize(const DirectX::XMFLOAT2& f2)
    {
        float length = std::hypotf(f2.x, f2.y);
        return DirectX::XMFLOAT2{ f2.x / length, f2.y / length };
    }
    void Normalize(DirectX::XMFLOAT2* const f2)
    {
        float length = std::hypotf(f2->x, f2->y);
        f2->x /= length;
        f2->y /= length;
    }

}
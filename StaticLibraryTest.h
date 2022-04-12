#pragma once

#include <DirectXMath.h>

namespace UsefulTools
{
    float SquaredLength(const float x, const float y);
    float SquaredLength(const float x, const float y, const float z);

    DirectX::XMFLOAT2 Normalize(const DirectX::XMFLOAT2& f2);
    void Normalize(DirectX::XMFLOAT2* const f2);

}
#include "cone.h"

//computes for the area of the cone: pi(r)(s)
float getAreaCone(float fLengthSide, float fRadiusBase)
{
    return M_PI*fRadiusBase*fLengthSide;
}

//computes for the area of the base pi(r^2)
float getAreaBase(float fRadiusBase)
{
    return M_PI*(fRadiusBase*fRadiusBase);
}

//computes for the surface area: base area + cone area
float getSurfaceArea(float fLengthSide, float fRadiusBase)
{
    return getAreaBase(fRadiusBase) + getAreaCone(fLengthSide, fRadiusBase);
}
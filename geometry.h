#include <cmath>

float VolSphere(float r)
{
    return ((4.0 / 3.0) * ((3.1415) * (r * r * r)));
}
float AreaSphere(float r)
{
    return (((3.1415) * (r * r)));
}
float VolCone(float h, float r)
{
    return ((3.1415) * (r * r) * (h / 3));
}
float AreaCone(float r, float h)
{
    return ((3.1415) * (r) * (r + (sqrt((r * r + h * h)))));
}
float VolCylinder(float h, float r)
{
    return ((3.1415) * (r * r) * (h / 3));
}
float AreaCylinder(float h, float r)
{
    return ((2) * (3.1415) * (r) * (h) + (2) * (3.1415) * (r * r));
}
float VolDonut(float R, float r)
{
    return (((3.1415) * (r * r)) * ((2) * (3.1415) * (R)));
}
#include "Ellipse.h"
namespace Curves {
    Ellipse::Ellipse(double rx, double ry) : radiusX{ rx }, radiusY{ ry } {};
    Vector3D Ellipse::GetPoint(double t)
    {
        Vector3D point;
        point.x = radiusX * cos(t);
        point.y = radiusY * sin(t);
        point.z = 0.0;
        return point;
    }
    Vector3D Ellipse::GetDerivative(double t)
    {
        Vector3D Derivative;
        Derivative.x = -radiusX * sin(t);
        Derivative.y = radiusY * cos(t);
        Derivative.z = 0.0;
        return Derivative;
    }
}
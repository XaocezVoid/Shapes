#define _USE_MATH_DEFINES
#include "Spiral.h"

namespace Curves {
    Spiral::Spiral(double r, double p) : radius{ r }, pitch{ p } {}

    Vector3D Spiral::GetPoint(double t) {
        Vector3D point;
        point.x = radius * cos(t);
        point.y = radius * sin(t);
        point.z = (pitch * t) / (2 * M_PI);
        return point;
    }

    Vector3D Spiral::GetDerivative(double t) {
        Vector3D derivative;
        derivative.x = -radius * sin(t);
        derivative.y = radius * cos(t);
        derivative.z = pitch / (2 * M_PI);
        return derivative;
    }
    double Spiral::GetRadius()
    {
        return radius;
    }
    double Spiral::GetPitch()
    {
        return pitch;
    }
}
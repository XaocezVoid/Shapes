#pragma once
#include "Curve.h"
namespace Curves {
    class SHAPES_API Ellipse :
        public Curve
    {
    protected:
        double radiusX;
        double radiusY;
    public:
        Ellipse(double rx, double ry);
        Vector3D GetPoint(double t) override;
        Vector3D GetDerivative(double t) override;
        double GetRadiusX();
        double GetRadiusY();
    };
}
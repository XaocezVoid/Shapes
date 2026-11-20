#pragma once
#include "Curve.h"
namespace Curves {
    class SHAPES_API Circle :
        public Curve
    {
    protected:
        double radius;

    public:
        Circle(double r);
        Vector3D GetPoint(double t) override;
        Vector3D GetDerivative(double t) override;
        double GetRadius();
    };
}



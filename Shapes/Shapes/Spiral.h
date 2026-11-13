#pragma once
#include "Curve.h"

namespace Curves {
    class Spiral : public Curve {
    private:
        double radius;
        double pitch;
    public:
        Spiral(double r, double p);
        Vector3D GetPoint(double t) override;
        Vector3D GetDerivative(double t) override;
        double GetRadius();
        double GetPitch();
    };
}
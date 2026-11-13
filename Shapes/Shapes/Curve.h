#pragma once
#include "Vector3D.h"
#include <cmath>
#include <vector>

namespace Curves {
	class Circle;
	class Curve
	{
	public:
		virtual Vector3D GetPoint(double t) = 0;
		virtual Vector3D GetDerivative(double t) = 0;
	};

	std::vector<Circle*> GetCircle(const std::vector<Curve*>& curves);
	double GetCirclesSumRad(const std::vector<Circle*>& circles);
}

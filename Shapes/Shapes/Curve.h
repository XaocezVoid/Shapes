#pragma once
#include "Vector3D.h"
#include <cmath>
namespace Curves {
	class Curve
	{
	protected:
		Vector3D point;
		Vector3D Derivative;
	public:
		virtual Vector3D GetPoint(double t) = 0;
		virtual Vector3D GetDerivative(double t) = 0;
	};
}


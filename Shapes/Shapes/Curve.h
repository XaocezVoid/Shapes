#pragma once
#include "Vector3D.h"
namespace Curves {
	class Curve
	{
	protected:
		Vector3D point;
		Vector3D Derivative;
	public:
		virtual Vector3D GetPoint() = 0;
		virtual Vector3D GetDerivative() = 0;
	};
}


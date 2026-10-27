#include "Circle.h"

// t - это угол, позиция зависит только от t(полярные координаты)
namespace Curves {
	Circle::Circle(double r) : radius{ r } {};

	Vector3D Circle::GetPoint(double t)
	{
		Vector3D point;
		point.x = radius * cos(t);
		point.y = radius * sin(t);
		point.z = 0.0;
		
		return point;
	}

	Vector3D Circle::GetDerivative(double t)
	{
		Vector3D Derivative;
		Derivative.x = -radius * cos(t);
		Derivative.y = radius * sin(t);
		Derivative.z = 0.0;
		return Derivative;
	}

}

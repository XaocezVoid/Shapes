#include "Curve.h"
#include "Circle.h"
#include<typeinfo>
#include<iostream>
#include <algorithm>

using Curves::Circle;
namespace Curves {
	std::vector<Circle*> GetCircle(const std::vector<Curve*>& curves)
	{
		std::vector<Circle*> circles;

		for (Curve* curve : curves)
		{

			if (typeid(*curve).name() == typeid(Circle).name())
			{
				Circle* circle{ static_cast<Circle*>(curve) };
				circles.push_back(circle);
			}

		}

		return circles;
	}
	double GetCirclesSumRad(const std::vector<Circle*>& circles)
	{
		double sumRad = 0;
		for (auto circle : circles)
		{
			sumRad += circle->GetRadius();
		}
		return sumRad;
	}
	void PrintPointsAndDerivatives(const std::vector<Curve*>& curves, double t)
	{
		std::cout  << t << "\n";
		for (Curve* curve : curves)
		{
			Vector3D point = curve->GetPoint(t);
			Vector3D deriv = curve->GetDerivative(t);

			std::cout << typeid(*curve).name() << "\n";
			std::cout << "(" << point.x << ", " << point.y << ", " << point.z << ")\n";
			std::cout << "(" << deriv.x << ", " << deriv.y << ", " << deriv.z << ")\n";
		}
	}
	void SortCirclesByRadius(std::vector<Circle*>& circles)
	{
		std::sort(circles.begin(), circles.end(), [](Circle* a, Circle* b) {
			return a->GetRadius() < b->GetRadius();
			});
	}
}


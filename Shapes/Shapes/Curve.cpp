#include "Curve.h"
#include "Circle.h"
#include"Spiral.h"
#include"Ellipse.h"
#include<typeinfo>
#include<iostream>
#include <algorithm>
#include <random>

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
	std::vector<Curve*> CreateVectorCurves(std::vector<Curve*>& curves, int countElement)
	{
		curves.clear();
		std::random_device rd;
		std::mt19937 gen(rd());
		std::uniform_real_distribution<double> distr(1.0, 100.6);
		std::uniform_int_distribution<int> distr2(1, 3);
		curves.reserve(countElement);
		for (int i = 0; i < countElement; i++)
		{
			int a = distr2(gen);
			switch (a)
			{
			case 1:
			{
				Circle* circle = new Circle(distr(gen));
				curves.push_back(circle);
				break;
			}
			case 2:
			{
				Ellipse* ellipse = new Ellipse(distr(gen), distr(gen));
				curves.push_back(ellipse);
				break;
			}
			case 3:
			{
				Spiral* spiral = new Spiral(distr(gen), distr(gen));
				curves.push_back(spiral);
				break;
			}
			default:
				continue;
			}
		}
		return curves;
	}
}


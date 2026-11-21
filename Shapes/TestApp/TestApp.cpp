#include<iostream>
#include"Circle.h"
#include"Ellipse.h"
#include"Spiral.h"
#include<vector>
#include <random>
#include <typeinfo> 

using Curves::Curve;
using Curves::Circle;
using Curves::Ellipse;
using Curves::Spiral;
int main()
{
	setlocale(LC_ALL, "RUS.UTF-8");



	std::vector<Curve*> curves;
	Curves::CreateVectorCurves(curves, 20);


	const double PI = 3.1415926;
	double t = PI / 4.0;
	Curves::PrintPointsAndDerivatives(curves, t);


	std::vector<Circle*> circles = Curves::GetCircle(curves);

	Curves::SortCirclesByRadius(circles);

	for (Circle* c : circles) {
		std::cout << c->GetRadius() << "\n";
	}


	std::cout << Curves::GetCirclesSumRad(circles) << "\n";
	return 0;
}
#include "Curve.h"
#include "Circle.h"
#include<typeinfo>

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
}


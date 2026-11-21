#pragma once
#include "Vector3D.h"
#include <cmath>
#include <vector>

#ifdef SHAPES_EXPORTS
#define SHAPES_API __declspec(dllexport)
#else
#define SHAPES_API __declspec(dllimport)
#endif

namespace Curves {
	class Circle;


	class SHAPES_API Curve
	{
	public:
		virtual Vector3D GetPoint(double t) = 0;
		virtual Vector3D GetDerivative(double t) = 0;
		virtual ~Curve() = default;
	};

	SHAPES_API std::vector<Circle*> GetCircle(const std::vector<Curve*>& curves);
	SHAPES_API double GetCirclesSumRad(const std::vector<Circle*>& circles);

	SHAPES_API void PrintPointsAndDerivatives(const std::vector<Curve*>& curves, double t);
	SHAPES_API void SortCirclesByRadius(std::vector<Circle*>& circles);
	SHAPES_API std::vector<Curve*> __cdecl CreateVectorCurves(std::vector<Curve*>& curves, int countElement);
}

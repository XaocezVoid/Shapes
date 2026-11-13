#include<iostream>
#include"Circle.h"
#include"Ellipse.h"
#include"Spiral.h"
#include<vector>
#include <random>

using Curves::Curve;
using Curves::Circle;
using Curves::Ellipse;
using Curves::Spiral;
int main()
{
	setlocale(LC_ALL, "RUS.UTF-8");
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_real_distribution<double> distr(1.0, 100.6);

	/*
	2. Заполните контейнер (например, вектор или список) объектами этих типов, созданными случайным образом с помощью параметра random.
	*/
	std::vector<Curve*> curves;
	Circle circle = Circle(distr(gen));
	Ellipse ellipse = Ellipse(distr(gen), distr(gen));
	Spiral spiral = Spiral(distr(gen), distr(gen));
	Circle circle1 = Circle(distr(gen));
	Circle circle2 = Circle(distr(gen));
	Spiral spiral1 = Spiral(distr(gen), distr(gen));
	Spiral spiral2 = Spiral(distr(gen), distr(gen));
	Ellipse ellipse1 = Ellipse(distr(gen), distr(gen));
	Ellipse ellipse2 = Ellipse(distr(gen), distr(gen));

	curves.push_back(&circle);
	curves.push_back(&ellipse);
	curves.push_back(&spiral);
	curves.push_back(&ellipse2);
	curves.push_back(&spiral2);
	curves.push_back(&ellipse1);
	curves.push_back(&circle1);
	curves.push_back(&spiral1);
	curves.push_back(&circle2);




	/*
	4. Заполните второй контейнер только кругами из первого контейнера.  Убедитесь, что второй контейнер использует (то есть не клонирует) круги из первого, например, через указатели.
	*/

	std::vector<Circle*> circles = Curves::GetCircle(curves);

	/*
	6. Вычислите общую сумму радиусов всех кривых во втором контейнере.
	*/

	std::cout << Curves::GetCirclesSumRad(circles) << "\n";

	return 0;
}
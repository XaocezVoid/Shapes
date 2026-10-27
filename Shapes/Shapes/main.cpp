#include<iostream>
#include"Circle.h"
using Curves::Circle;
int main()
{
	setlocale(LC_ALL, "RUS.UTF-8");
	Circle a{ 5  };
	Circle b{ 10 };
	Circle c{ 15 };

	Vector3D aP = a.GetPoint(0.7854);
	Vector3D bP = b.GetPoint(0.7854);
	Vector3D cP = c.GetPoint(0.7854);

	std::cout << aP.x << " " << aP.y << " " << aP.z << "\n";
	std::cout << bP.x << " " << bP.y << " " << bP.z << "\n";
	std::cout << cP.x << " " << cP.y << " " << cP.z << "\n";
	return 0;
}
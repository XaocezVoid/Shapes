#include<iostream>
#include"Circle.h"
#include"Ellipse.h"
using Curves::Circle;
using Curves::Ellipse;
int main()
{
	setlocale(LC_ALL, "RUS.UTF-8");
	Circle a{ 5  };
	Circle b{ 10 };
	Circle c{ 15 };

	Ellipse e1{ 5.0, 10.0 };
	

	Vector3D aP = a.GetPoint(0.7854);
	Vector3D bP = b.GetPoint(0.7854);
	Vector3D cP = c.GetPoint(0.7854);

	Vector3D eP = e1.GetPoint(0.7854);
	Vector3D eD = e1.GetDerivative(0.7854);

	std::cout << aP.x << " " << aP.y << " " << aP.z << "\n";
	std::cout << bP.x << " " << bP.y << " " << bP.z << "\n";
	std::cout << cP.x << " " << cP.y << " " << cP.z << "\n";


	std::cout << eP.x << " " << eP.y << " " << eP.z << std::endl;
	std::cout << eD.x << " " << eD.y << " " << eD.z << std::endl;
	return 0;
}
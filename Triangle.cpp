#include "Triangle.h"

double Triangle::CalcPerimeter(double a, double b, double c)
{
	return tPerimeter = a + b + c;
}

double Triangle::CalcArea(double a, double b, double c)
{
	tempPerimeter = tPerimeter / 2.0;
	bSqrt = tempPerimeter*(tempPerimeter-a)*(tempPerimeter-b)*(tempPerimeter-c);
	return tArea = sqrt(bSqrt);
}

void Triangle::Print()
{
	std::cout << "Perimeter of the triangle is " << std::fixed
			  << std::setprecision(2) << Triangle::tPerimeter
			  <<
	std::endl << "The area of the triangle is " << std::fixed
	  	  	  << std::setprecision(2) << Triangle::tArea;
}

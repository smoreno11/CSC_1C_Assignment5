#include "Square.h"

double Square::CalcPerimeter(double a, double b, double c)
{
	return sPerimeter = 4 * a;
}

double Square::CalcArea(double d, double e, double f)
{
	return sArea = pow(d, 2);
}

void Square::Print()
{
	std::cout << "Perimeter of the square is " << std::fixed
			  << std::setprecision(2) << Square::sPerimeter
			  <<
	std::endl << "The area of the square is "  << std::fixed
	          << std::setprecision(2)<< Square::sArea;
}

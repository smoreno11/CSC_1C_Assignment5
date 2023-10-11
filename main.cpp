/******************************************************************************
 * AUTHOR       : Saul Moreno
 * STUDENT ID   : 269491
 * ASSIGNMENT#5 : Abstract Class
 * SECTION      : MW 7:30pm
 * DUE DATE     : 3/8/22
 ******************************************************************************/

#include "header.h"
#include "Shape.h"
#include "Square.h"
#include "Triangle.h"

namespace variables
{
	int index;

}

int main(int argc, char *argv[])
{
	Triangle tri; // instance of Triangle object
	Square   sqr; // instance of Square object;

	tri.CalcPerimeter(10.0,24.0,26.0);
	tri.CalcArea(10.0,24.0,26.0);
	tri.Print();

	std::cout << std::endl;

	sqr.CalcPerimeter(8.88, 0 ,0);
	sqr.CalcArea(8.88, 0 ,0);
	sqr.Print();

	std::cout << std::endl;
	std::cout << std::endl;


	for (variables::index = 1; variables::index < argc; variables::index++ )
	{
		std::cout << argv[variables::index] << " " << std::endl;
	}//endfor(variables::index = 1; variables::index < argc;
	 //variables::index++ )

	std::cout << std::endl;
	std::cout << argv[1][2];
	std::cout << std::endl;
	std::cout << argv[2][2];

	return 0;
}

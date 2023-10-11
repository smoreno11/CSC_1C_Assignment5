/******************************************************************************
 * AUTHOR       : Saul Moreno
 * STUDENT ID   : 269491
 * ASSIGNMENT#5 : Abstract Class
 * SECTION      : MW 7:30pm
 * DUE DATE     : 3/8/22
 ******************************************************************************/

#ifndef SQUARE_H_
#define SQUARE_H_

#include "Shape.h"
#include "Math.h"   // math functions like sqrt & pow

class Square: public Shape
{
	public:

	double CalcPerimeter(double a, double b, double c);
	double CalcArea(double d, double e, double f);
	void Print();

	private:
	double sPerimeter; // CALC & OUT - Holds the value of the perimeter
	double sArea;	   // CALC & OUT - Holds the value of the area
};

#endif /* SQUARE_H_ */

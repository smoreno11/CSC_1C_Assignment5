/******************************************************************************
 * AUTHOR       : Saul Moreno
 * STUDENT ID   : 269491
 * ASSIGNMENT#5 : Abstract Class
 * SECTION      : MW 7:30pm
 * DUE DATE     : 3/8/22
 ******************************************************************************/

#ifndef TRIANGLE_H_
#define TRIANGLE_H_

#include "Shape.h"
#include "Math.h"  // sqrt & pow functions

class Triangle: public Shape
{
	public:

	double CalcPerimeter(double a, double b, double c);
	double CalcArea(double a, double b, double c);
	void Print();

	private:
	double tPerimeter; // CALC & OUT - Holds the value of the perimeter
	double tArea;      // CALC & OUT - Holds the value of the area
	double bSqrt;      // CALC - The value before it is square rooted
	double tempPerimeter;


};

#endif /* TRIANGLE_H_ */

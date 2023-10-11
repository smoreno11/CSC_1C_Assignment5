/******************************************************************************
 * AUTHOR       : Saul Moreno
 * STUDENT ID   : 269491
 * ASSIGNMENT#5 : Abstract Class
 * SECTION      : MW 7:30pm
 * DUE DATE     : 3/8/22
 ******************************************************************************/

#ifndef SHAPE_H_
#define SHAPE_H_
#include "header.h"

class Shape
{
	public:

	//These are two pure virtual functions
	virtual double CalcPerimeter(double a, double b, double c) = 0;
	virtual double CalcArea(double a, double b, double c) = 0;

};

#endif /* SHAPE_H_ */

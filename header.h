/******************************************************************************
 * AUTHOR       : Saul Moreno
 * STUDENT ID   : 269491
 * ASSIGNMENT#5 : Abstract Class
 * CLASS        : CS1C
 * SECTION      : MW 5:00pm
 * DUE DATE     : 3/2/20
 ******************************************************************************/

#ifndef HEADER_H_
#define HEADER_H_

#include <iostream>  // input and output
#include <iomanip>   // setprecision and setw
#include <string>    // allows to use strings
#include <limits>    //
#include <ios>       //
#include <fstream>   // file in & out
#include <time.h>    // system time
#include <stdlib.h>  // srand and rand

void PrintHeader(std::string asName, int asNum, char asType);
void PrintPerimeter();
void PrintArea();

#endif /* HEADER_H_ */

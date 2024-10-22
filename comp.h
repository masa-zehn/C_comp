#ifndef COMP_H
#define COMP_H

#include <stdio.h>
#include <math.h>

typedef struct{
	double re,im;
}Complex;

void printc(Complex z);
Complex initc(double a,double b);
Complex mulc(Complex a, Complex b);
Complex pulc(Complex a, Complex b);
Complex divc(Complex a, Complex b);
Complex subc(Complex a, Complex b);
double absc(Complex a);
double argsc(Complex a);
Complex sqrtc(Complex a);

Complex conjc(Complex a);



#endif

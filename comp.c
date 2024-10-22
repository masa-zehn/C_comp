#include <stdio.h>
#include <math.h>

#include "comp.h"

void printc(Complex z){
	printf("%f+j%f",z.re,z.im);
}

Complex initc(double a,double b){
	Complex z;
	z.re = a;
	z.im = b;
	return z;
}

Complex mulc(Complex a, Complex b){
	Complex c;
	c.re = a.re*b.re - a.im*b.im;
	c.im = a.re*b.im + b.re*a.im;
	return c;
}

Complex pulc(Complex a, Complex b){
	Complex c;
	c.re = a.re + b.re;
	c.im = a.im + b.im;
	return c;
}

Complex divc(Complex a, Complex b){
	// a/b
	Complex c;
	c = mulc(a,conjc(b));
	c.re /= pow(absc(b),2);
	c.im /= pow(absc(b),2);
	return c;
}

Complex subc(Complex a, Complex b){
	Complex c;
	c.re = a.re - b.re;
	c.im = a.im - b.im;
	return c;
}

double absc(Complex a){
	double A = sqrt(pow(a.re,2) + pow(a.im,2));
	return A;
}

double argsc(Complex a){
	double A = absc(a);
	a.re /= A;
	a.im /= A;
	double s,t;
	s = acos(a.re);
	t = asin(a.im);
	if(abs(s-t) < pow(1.0,-5)){
		return s;
	}
	else{
		return -1;
	}
}
Complex sqrtc(Complex a){
	double s = argsc(a);
	double A = absc(a);
	Complex b;
	b.re = sqrt(A)*cos(s/2);
	b.im = sqrt(A)*sin(s/2);
	return b;
}

Complex conjc(Complex a){
	Complex b;
	b.re = a.re;
	b.im = -a.im;
	return b;
}

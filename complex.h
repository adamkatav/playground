#ifndef COMPLEX_H
#define COMPLEX_H

typedef struct complex* Complex;

Complex ComplexCreate(double real, double imaginary);
void ComplexDelete(Complex z);
void ComplexSet(Complex dest, Complex src);
double Re(Complex z);
double Im(Complex z);
Complex ComplexAdd(Complex z1, Complex z2);
Complex ComplexMul(Complex z1, Complex z2);
double ComplexAbs(Complex z);
void ToString(Complex z, char* str /*Assumed to be at least 21 long and null terminated*/);
#endif
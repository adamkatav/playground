#include "complex.h"
#include <math.h>
#include <string.h>
#include <stdio.h>

struct complex{
    double real;
    double imaginary;
};

Complex ComplexCreate(double real, double imaginary){
    Complex a = malloc(sizeof(struct complex));
    a->real = real;
    a->imaginary = imaginary;
    return a;
}
void ComplexDelete(Complex z){
    free(z);
}

double Re(Complex z){
    return z->real;
}

double Im(Complex z){
    return z->imaginary;
}

Complex ComplexAdd(Complex z1, Complex z2){
    return CreateComplex(Re(z1) + Re(z2),Im(z1) + Im(z2));
}

Complex ComplexMul(Complex z1, Complex z2){ // (a + ib) * (c + id) = ac +iad + ibc + -(db) = (ac - db) + i(ad + bc)
    return CreateComplex(Re(z1)*Re(z2) - Im(z1)*Im(z2),Re(z1)*Im(z2) + Im(z1)*Re(z2));
}

double ComplexAbs(Complex z){
    return sqrt( pow(Re(z),2) + pow(Im(z),2) );
}

void ToString(Complex z, char* str /*Assumed to be at least 21 long and null terminated*/){
    sprintf(str,"%d + i%d",Re(z), Im(z));
}


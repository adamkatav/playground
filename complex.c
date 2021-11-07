#include "complex.h"
#include <math.h>
#include <string.h>
#include <stdio.h>


int Re(Complex* z){
    return z->real;
}

int Im(Complex* z){
    return z->imaginary;
}

Complex ComplexAdd(Complex* z1, Complex* z2){
    Complex a = {Re(z1) + Re(z2), Im(z1) + Im(z2)};
    return a;
}

Complex ComplexMul(Complex* z1, Complex* z2){ // (a + ib) * (c + id) = ac +iad + ibc + -(db) = (ac - db) + i(ad + bc)
    Complex a = {Re(z1)*Re(z2) - Im(z1)*Im(z2), Re(z1)*Im(z2) + Im(z1)*Re(z2)};
    return a;
}

int ComplexAbs(Complex* z){
    return sqrt( pow(Re(z),2) + pow(Im(z),2) );
}

void ToString(Complex* z, char* str /*Assumed to be at least 21 long and null terminated*/){
    sprintf(str,"%d + i%d",Re(z), Im(z));
}


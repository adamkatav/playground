#ifndef COMPLEX_H
#define COMPLEX_H
typedef struct Complex{
    int real;
    int imaginary;
} Complex;
Complex CreateComplex(int real, int imaginary);
int Re(Complex* z);
int Im(Complex* z);
Complex ComplexAdd(Complex* z1, Complex* z2);
Complex ComplexMul(Complex* z1, Complex* z2);
int ComplexAbs(Complex* z);
void ToString(Complex* z, char* str /*Assumed to be at least 21 long and null terminated*/);
#endif
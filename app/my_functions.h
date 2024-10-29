#ifndef MY_FUNCTIONS_H
#define MY_FUNCTIONS_H

struct root{
    float real;
    float imaginary;
};

struct roots{
    struct root x1;
    struct root x2;
    int valid;
};

int GCD(int a, int b);

char* he(int n);

int pow_int(int a, int e);

struct roots equation_roots(float a, float b, float c);

extern int val;

#endif // MY_FUNCTIONS_H

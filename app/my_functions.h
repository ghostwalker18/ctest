#ifndef MY_FUNCTIONS_H
#define MY_FUNCTIONS_H

int myfunc(int b);

int fibonachi(int num);

void printStdoutMessages();

struct roots{
    struct root x1;
    struct root x2
};

struct root{
    float a;
    float b;
};

int GCD(int a, int b);

char* he(int n);

int pow_int(int a, int e);

struct roots equation_roots(float a, float b, float c);

extern int val;

#endif // MY_FUNCTIONS_H
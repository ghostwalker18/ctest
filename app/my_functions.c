
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "my_functions.h"

struct roots equation_roots(float a, float b, float c){
    float D = b * b - 4 * a * c;
    struct root ans1;
    struct root ans2;
    struct roots res;

    if( D >= 0) {

        ans1.real = (-1 * b - sqrt(D)) / (2 * a);
        ans1.imaginary = 0;

        ans2.real = (-1 * b + sqrt(D)) / (2 * a);
        ans2.imaginary = 0;
    } else {
        ans1.real = (-1 * b / a / 2);
        ans1.imaginary = -1 * sqrt(-1 * D) / (2 * a);

        ans2.real = (-1 * b / a / 2);
        ans2.imaginary = 1 * sqrt(-1 * D) / (2 * a); 
    };
    
    res.x1 = ans1;
    res.x2 = ans2;
    return res;
}

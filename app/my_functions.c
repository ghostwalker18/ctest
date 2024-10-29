
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "my_functions.h"

struct roots equation_roots(float a, float b, float c){
    float D = b * b - 4.f * a * c;
    struct root ans1;
    struct root ans2;
    struct roots res;
    res.valid = 1;
    
    if(a == 0){
      res.valid = 0;
      return res;
    }
    
    if( D >= 0) {
        ans1.real = (-1.0f * b - sqrt(D)) / (2.0f * a);
        ans1.imaginary = 0.f;

        ans2.real = (-1.0f * b + sqrt(D)) / (2.0f * a);
        ans2.imaginary = 0.f;
    } else {
        ans1.real = (-1.0f * b / a / 2.0f);
        ans1.imaginary = -1.0f * sqrt(-1.0f * D) / (2.0f * a);

        ans2.real = (-1.0f * b / a / 2.0f);
        ans2.imaginary = 1.0f * sqrt(-1.0f * D) / (2.0f * a); 
    }
    
    res.x1 = ans1;
    res.x2 = ans2;
    return res;
}

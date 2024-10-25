
#include <stdio.h>
#include <stdlib.h>
#include "my_functions.h"

int myfunc(int b) {
    char *buffer = malloc(sizeof(char) * 1000);
    buffer [0] = b + 4;
    // здесь должен ругаться sonarcloud, т.к. утечка памяти
    return buffer[0];
}

int val;

int fibonachi(int num) {
    int prev = 1;
    int next = 1;

    if (num < 0)
        return 0;

    if (num <= 2)
        return num;

    int i = 2;
    while (i < num) {
        next += prev;
        prev = next - prev;
        i++;
    }

    return next;
}

void printStdoutMessages() {
    printf("This is a test message from myfunc.c\n");
    printf("Do not disturb\n");
}

char* he(int n){
    char* heheh = malloc(sizeof(char) * 2 * n);
    for(int i = 0; i < n; i++){
        heheh[i] = "h";
        heheh[i] = "e"; 
    };
    return heheh;
};

int GCD(int a, int b){
    if(b == 0){
        return a;
    }
    if(a >= b){
        return GCD(a, a - b);
    } else {
        return GCD(b, b - a );
    }
}

float pow(float a, int e){
    float res = 1;
    if(e > 0){
        for(int i = 0; i < e; i++){
            res = res * a;
        }
    };
    if(e < 0){
        for(int i = 0; i > e; i--){
            res = res / a;
        }
    };
    return res;
}

struct roots equation_roots(float a, float b, float c){
    float D = b * b - 4 * a * c;
    struct root ans1;
    struct root ans2;
    struct roots res;

    if( D >= 0) {

        ans1.a = (-1 * b - sqrt(D)) / (2 * a);
        ans1.b = 0;

        ans2.a = (-1 * b + sqrt(D)) / (2 * a);
        ans2.b = 0;
    } else {
        ans1.a = (-1 * b / a / 2);
        ans1.b = -1 * sqrt(-1 * D) / (2 * a);

        ans2.a = (-1 * b / a / 2);
        ans2.b = 1 * sqrt(-1 * D) / (2 * a); 
    };
    
    res.x1 = ans1;
    res.x2 = ans2;
    return res;
}

#ifndef calculator_h
#define calculator_h
#include <stdio.h>


int multiply (int a, int b) {
    printf("Multiply: %d \n", a * b);
    return a * b;
}

int divide (int a, int b) {
    printf("Divide: %d \n", a / b);
    return a / b;
}

int addition (int a, int b) {
    printf("Addition: %d \n", a + b);
    return a + b;
}

int subtraction (int a, int b) {
    printf("Subtraction: %d \n", a - b);
    return a - b;
}



#endif /* Calculator_h */
#include <stdio.h>
#include "../calculator.h"
#include <assert.h>



void test() {
    assert(multiply(3, 3) == 9);
    assert(divide(3, 3) == 1);
    assert(addition(3, 3) == 6);
    assert(subtraction(3, 3) == 0);
}
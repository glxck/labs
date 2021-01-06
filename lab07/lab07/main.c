//
//  main.c
//  lab07
//
//  Created by Glock on 05.01.2021.
//

#include <stdio.h>
#include <stdarg.h>

int comparePairs(int size, ...)
{
    va_list args;
    int answer = 0;
    int num1 = 0;
    int num2 = 0;
    if (size % 2 != 0)
        size--;
    va_start(args, size);
    for (int i = 0; i < size; i+=2)
    {
        num1 = va_arg(args, int);
        num2 = va_arg(args, int);
        
        if (num1 < num2)
            answer++;
    }
    va_end(args);
    printf("%d\n", answer);
    return 0;
}

int main()
{
    comparePairs(4, 21, 35, 24, 48);
    return 0;
}

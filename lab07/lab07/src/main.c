//
//  main.c
//  lab07
//
//  Created by Glock on 05.01.2021.
//


/// <summary>
/// Функция для выполнения заданой задачи
/// </summary>
/// <param name="answer"> Конечный результат </param>
/// <param name="num1"> Первое число в сравнении </param>
/// <param name="num2"> Второе число в сравнении </param>
/// <param name="va_start"> Запуск функции с вариативным количеством аргументов</param>
/// <param name="for"> Цикл для сравнения чисел </param>
/// <param name="va_end"> Конец функции с вариативным количеством аргументов </param>


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

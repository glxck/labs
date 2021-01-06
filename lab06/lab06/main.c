//
//  main.c
//  lab06
//
//  Created by Glock on 05.01.2021.
//

#include <stdio.h>


int  main()
{
    int N = 100;
    int arr[N];
    int index = 0;
    for (int i = 2; N > 0; ++i)
    {
        short isPrime = 1;
        for (int j = 2; j < i; ++j)
        {
            if (i % j == 0)
            {
                isPrime = 0;
                break ;
            }
        }
        if (isPrime)
        {
            --N;
            arr[index] = i;
            printf("%d\n", arr[index]);
            ++index;
        }
    }
    return  0;
}

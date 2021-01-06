//
//  main.c
//  lab12
//
//  Created by Glock on 05.01.2021.
//

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int  main()
{
    unsigned int N;
    //SCANF
    //scanf("%d", &N);
    
    /*
     GETS
    //char text [100];
    //gets(text);
    //N = atoi(text);
    */
    char text [100];
    read(0, text, 99);
    N = atoi(text);
    if (N <= 0)
        return 0;
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
            //PRINTF
            //printf("%d\n", arr[index]);
            /*
            PUTS
            sprintf(text, "%d", arr[index]);
            puts(text);
            */
            int n = sprintf(text, "%d\n", arr[index]);
            write(1, text, n);
            ++index;
        }
    }
    return  0;
}

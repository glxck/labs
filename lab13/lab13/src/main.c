//
//  main.c
//  lab13
//
//  Created by Glock on 07.01.2021.
//
/**

 * \author Lysenko D.
 * \version 2.0
 * \return Числа из текста


*/


#include <stdio.h>
#include <stdlib.h>
#define N 80
int main()
{
    char str[N], *first, *last;
    int i, flag = 0;
    puts("Enter line:");
    fgets(str, N, stdin);
    for( i = 0; str[i]; i++){
        if(!flag){
            if((str[i] >= '0' && str[i] <= '9') || str[i] == '-'){
                first = &str[i];
                flag = 1;
            }
        }
        else{
            if(str[i] < '0' || str[i] > '9'){
                last = &str[i];
                flag = 0;
                if(last - first > 1){
                    if(*first == '0'){
                        while((first < last - 1) && *first == '0')
                            first++;
                    }
                    if(*first == '-' && *(first + 1) == '0'){
                        putchar('-');
                        first++;
                        while((first < last - 1) && *first == '0')
                            first++;
                    }
                    while(first < last)
                        putchar(*first++);
                    putchar('\n');
                }
                else{
                    if(*first != '-'){
                        putchar(*first);
                        putchar('\n');
                    }
                }
                if(str[i] == '-'){
                    first = &str[i];
                    flag = 1;
                }
            }
        }
    }
    return 0;
}

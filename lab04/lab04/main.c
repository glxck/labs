//
//  main.c
//  lab04
//
//  Created by Glock on 19.12.2020.
//

#include <stdio.h>


int digPos (num)
{
    int array[3];
    for (int i = 3; i >= 0; i--) {
        array[i] = num % 10;
        num /= 10;
    }

    int min = array[1];
    
    for(int i = 1; i < 3; ++i)
    {
        if(array[i] < min)
        {
            min = array[i];
        }
    }
    printf("Минимальное число на позиции: %d", min);
    
    return 0;
}


int century (year)
{
    int century = year / 100;
    if(century%100 != 0) {
        century++;
    }
    printf("%d год это %d век \n", year, century);
    return 0;
}


int main()
{
    digPos(632);
    century(2010);
}



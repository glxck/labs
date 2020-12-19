//
//  main.c
//  lab03
//
//  Created by Glock on 17.12.2020.
//

#include <stdio.h>

int sum (int num)
{
    int res = 0;
    while (num > 0)  {
        res += num%10;
        num /= 10;
    }
    
    return printf("Sum = %d \n", res);
}

int exchange (int hrn) {
    const int euro = 10;
    const int usd = 8;
    const int rub = 3;
    return printf("Гривны -> Евро %d\nГривны -> Доллары %d\nГривны -> Рубли %d \n", euro * hrn, usd * hrn, rub * hrn);
}


int main() {
    sum(1234);
    exchange(20);
    return 0;
}

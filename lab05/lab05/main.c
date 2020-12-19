//
//  main.c
//  lab05
//
//  Created by Glock on 19.12.2020.
//

#include <stdio.h>



int happyTicket (ticket)
{
    int firstThree = 0;
    int lastThree = 0;
    
    while (ticket / 1000) {
        firstThree += ticket % 10;
        ticket /= 10;
    }
    
    int newticket = ticket;
    
    do {
        lastThree += newticket % 10;
        newticket /= 10;
    } while (newticket % 1000);
    
    if (firstThree == lastThree){
        printf("Счастливый билет");
    }
    else{
        printf("Не счастливый");
    }
    
    return 0;
}


int main()
{
    happyTicket(333323);
}

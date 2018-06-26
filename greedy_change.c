/* C program that tells you how many coins (USD) you have when you input the number cents */

#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h> // isupper or islower needs this package

int main(void){

    // prompt for a postive number
    int n;
    //int cents;
    int count = 0;
    do{
        printf("cents: ");
        n = get_float();
    }
    while (n < 0);

    // now heart of the Algo
    while(n >= 25){ // while the cents are 25 or above cents, then
        count++;    // count once
        n = n - 25; // subtract 25 cents from n
    }
    while(n >= 10){ // while the cents are 10 or above, then
        count++;    // then count once
        n = n - 10; // subtract 10 from the n
    }
    while(n >= 5){
        count++;
        n = n - 5;
    }
    while(n >= 1){
        count++;
        n = n - 1;
    }

    printf("number of coins: %d\n", count);
}

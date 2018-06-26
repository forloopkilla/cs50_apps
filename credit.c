/*
Implement a program that determines whether a provided credit
card number is valid according to Luhn’s algorithm.
*/

#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main (void){

    long long i, xadd, x2; // he
    int addsum, x2prod, sum;

    // get user's CC number ;)
    do
    {
        printf("Your credit card number, please:\n");
        i = get_long_long();
    }
    while ( i < 0 );

    // sum every other digit starting w/ the the last
    for ( xadd = i, addsum = 0; xadd > 0; xadd /= 100 )
        addsum += xadd % 10;
    //printf("%lli\n",xadd /= 100);
    // double every other digit starting w/ 2nd to last
    // then sum the individual digits of these products
    for ( x2 = i / 10, x2prod = 0; x2 > 0; x2 /= 100 )
    {
        if ( 2 * (x2 % 10) > 9 )
        {
            x2prod += (2 * (x2 % 10)) / 10;
            x2prod += (2 * (x2 % 10)) % 10;
        }
        else
            x2prod += 2 * (x2 % 10);
    }

    sum = addsum + x2prod;


    if ( sum % 10 == 0 )
    {
        if ( (i >= 340000000000000 && i < 350000000000000) || (i >= 370000000000000 && i < 380000000000000) )
            printf("AMERICAN EXPRESS\n");
        else if ( i >= 5100000000000000 && i < 5600000000000000 )
            printf("MASTERCARD\n");
        else if ( (i >= 4000000000000 && i < 5000000000000) || (i >= 4000000000000000 && i < 5000000000000000) )
            printf("VISA\n");
        else
            printf("INVALID\n");
    }
    else
        printf("INVALID\n");

    return 0;
}



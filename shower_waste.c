/* C program that tells you how much water you waste when you input the time in minutes you shower */

#include <cs50.h> // load in cs50 packages
#include <stdio.h> // load in stdio packages

int main(void){
    int x;                      // Initialize x
    do{     // open Intitialize do-loop.
      x = get_int("Minutes: "); // the action you want it to do: "Get_int"

    }
    while (x < 0); // tests whether the input qualifies the condition

    printf("Bottles: %i\n", (x*192)/16); // print the final action.

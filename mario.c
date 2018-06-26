#include <cs50.h> // load in cs50 packages
#include <stdio.h> // load in stdio packages


/* Pseudo Code:
C program that builds pyramids like the ones in the Mario game
*/

int main(void){
    int x; // This int x is outside of all the brackets, now it can be applied to all the x's in the program universally.
    do{ /* keep doing the prompt if the x is > 23 and x < 0*/
        x = get_int("Height: ");
    }
    while (x > 23 && x <= 0);

    // Print out that many bricks with the pyramid effect
    for (int i = 0; i <= x; i++){ // this first loop is for the construction of the rows
        printf("%*s", x-i, ""); //space for left pyramid

        for (int j = 0; j < i; j++){ // this nested loop is for columns j...
            printf("#"); //print hashes for left pyramid
            }

        printf("  "); // 2 space Gap

        for (int j = 0; j < i; j++){ // this nested loop is for columns j...
            printf("#"); //print hashes for right pyramid
            }

        printf("\n");
    }

}

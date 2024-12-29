//load required libraries
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    //create a number that is either 0 or 1
    srand(time(NULL));
    int coin = rand() % 2;

    printf("You flipped a coin!\n");
    printf("The result is: %s\n", coin == 0 ? "heads" : "tails");
}
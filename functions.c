#include <stdio.h>
#include <stdlib.h>

// define a funtion that prints a string
void printMyFavoriteAnimal(void)
{
    printf("My favorite animal is a Tiger\n");
}

int main(void)
{
    int absValue = abs(-5);
    printf("%d\n", absValue);

    //call the function
    printMyFavoriteAnimal();
}
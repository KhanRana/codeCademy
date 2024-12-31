#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// define a funtion that prints a string
void printMyFavoriteAnimal(void)
{
    printf("My favorite animal is a Tiger\n");
}

//random number generator
int getRandom1000() {
  int random1000 = rand() % 1000 + 1;
  return random1000;
}


int main(void)
{
    int absValue = abs(-5);
    printf("%d\n", absValue);

    //call the function
    printMyFavoriteAnimal();

    //generate random number
    srand(time(NULL));
    int random1000 = getRandom1000();
    printf("%d\n", random1000);
}
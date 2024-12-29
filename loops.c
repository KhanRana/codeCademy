#include <stdio.h>

int main()
{

    int guess;
    int tries = 0;

    printf("I'm thinking of a number in the range 1-10.\n");
    printf("Try to guess it: ");
    scanf("%d", &guess);

    // Write a while loop here:
    while (guess != 8 && tries < 50)
    {
        printf("Wrong guess, try again: ");
        scanf("%d", &guess);
        tries++;
    }

    if (guess == 8)
    {
        printf("You got it!\n");
    }

    // do-while

    int i = 11;

    do
    {
        printf("%d\n", i);
        i++;
    } while (i < 10);

    // break out of a loop

    int number1 = 1;
    int numbers_entered1 = 0;

    int number2 = 1;
    int numbers_entered2 = 0;

    while (numbers_entered1 < 10)
    {

        printf("Loop 1 - Please enter a number: ");
        scanf("%d", &number1);

        // Figure out how to break out here!
        if (number1 <= 0)
        {
            break;
        }
        numbers_entered1++;
    }
    printf("Good job! You’ve broken out!\n");

    while (number2 > 0 && numbers_entered2 < 10)
    {
        printf("Loop 1 - Please enter a number: ");
        scanf("%d", &number2);
        numbers_entered2++;
    }
    printf("Good job! You’ve broken out!\n");
}
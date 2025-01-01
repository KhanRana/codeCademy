#include <stdio.h>

int main(void)
{
    struct Person
    {
        char firstName[25];
        // Write your code below
        char lastName[40];
        int age;
    };

    // Write your code below
    struct Person person1 = {"Ada", "Lovelace", 28};

    struct Person person2 = {"Marie", "Curie", 44};

    // pointers to access and manipulate structures
    struct Person *person1Pointer = &person1;
    struct Person *person2Pointer = &person2;

    (*person1Pointer).age += 1;
    person2Pointer->age += 10;
    printf("Hello my name is %s and I am %d years old.\n", person1.firstName, person1.age);
    printf("Hello my name is %s and I am %d years old.\n", person2.firstName, person2.age);
}
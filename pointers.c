#include <stdio.h>
#include <string.h>

int main()
{

    double g = 9.81;
    double pi = 3.14;

    // Checkpoint 1 code goes here.
    //pointer to a double variable i.e. 
    double *dblPtr = &g;

    // Checkpoint 2 code goes here.
    printf("%p\n", dblPtr);

    // Checkpoint 3 code goes here.

    dblPtr = &pi;

    // pointers and arrays
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    char s[] = "Farmer Jack realized that big yellow quilts were expensive!!";

    // Code for Checkpoint 1 goes here.
    // length of array
    int len = sizeof(arr) / sizeof(int); // length of the array
    int *ptr = &arr[len - 1];            // last value

    printf("%d\n", len);  // prints the length of the array
    printf("%d\n", *ptr); // prints the value at index len-1

    // Code for Checkpoint 2 goes here.
    for (int i = 0; i < len; i++)
    {
        printf("%d\n", *ptr);
        ptr--;
    }
    // Code for Checkpoint 3 goes here.
    char *ptr2 = &s[0];
    // Code for Checkpoint 4 goes here.
    for (int i = 0; i < strlen(s); i++)
    {
        *ptr2 = '#';
        ptr2++;
    }

    printf("%s\n", s);

    //get the value of type int
    //%zu is the type specifier for size_t
    printf("%zu\n", sizeof(int));
    
}
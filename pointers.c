#include <stdio.h>
#include <string.h>

int main()
{

    double g = 9.81;
    double pi = 3.14;

    // Checkpoint 1 code goes here.
    double *dblPtr = &g;

    // Checkpoint 2 code goes here.
    printf("%p", dblPtr);

    // Checkpoint 3 code goes here.

    dblPtr = &pi;

    // pointers and arrays
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    char s[] = "Farmer Jack realized that big yellow quilts were expensive!!";

    // Code for Checkpoint 1 goes here.
    // length of array
    int len = sizeof(arr) / sizeof(int);
    printf("%d\n", len);
    
    // Code for Checkpoint 2 goes here.

    // Code for Checkpoint 3 goes here.

    // Code for Checkpoint 4 goes here.

    printf("%s\n", s);
}
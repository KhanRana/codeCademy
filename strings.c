#include <stdio.h>

int main(void)
{
    // Checkpoint 1 code goes here
    char comp[] = {'C', 'o', 'm', 'p', 'u', 't', 'e', 'r', '\0'};

    // Checkpoint 2 code goes here

    char compCode[] = "Computer Code";

    // Checkpoint 3 code goes here

    printf("%s\n", comp);
    printf("%s\n", compCode);

    // character access and modification
    char p[] = "procezzor";
    // Checkpoint 1 code goes here
    printf("%c\n", p[2]);
    // Checkpoint 2 code goes here
    p[5] = 's';
    p[6] = 's';
    printf("%s", p);
}
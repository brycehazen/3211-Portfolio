#include <stdio.h>

void main()
{
    int x, y, z;

    printf("Enter 1st number: ");
    scanf("%d", &x);    // %d  == Take the next argument and print it as an int
    printf("Enter 2nd number: ");
    scanf("%d", &y); //scanf("%d", &y) == read the coming integer into 'y'

    z= x + y;

    printf("This is equal to = %d", z);
    
}

    //int uses %d
    //float uses %f
    //char uses %c
    //character strings use %s


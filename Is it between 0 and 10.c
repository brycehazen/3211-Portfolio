#include <stdio.h>

void main()
{
    int n;
    printf("Pick a number.");
    scanf("%d", &n); //%d is scanning for anumber and what n is

    
    if(n >= 0 && n <= 10)  //checking if the range of n is valid
        printf("nice");   // && is AND operator
    
   if(n < 0 || n > 10)  
        printf("wadu hek"); //  || is the OR operator

    
}
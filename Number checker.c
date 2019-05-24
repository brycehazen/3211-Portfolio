#include <stdio.h>

void main()

{
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n); //checks the number you entered 
                     //to do the following checks
 
    if(n > 0) //if statement checking if n is greater than 0
        printf("positive and "); 
    if(n < 0) 
        printf("negative and ");
    if(n%2 == 0)  // if the number entered is exactly divisible by 2
        printf("even");
    else  // if the number is not divisible by 2 then it's odd
        printf("odd");

}
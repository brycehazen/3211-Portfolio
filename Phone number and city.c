#include <stdio.h>

void main()
{
    int r;

    printf("Enter an Area Code to Find region of Florida: ");
    scanf("%d", &r);

    if(r == 407)
    printf(" Central Florida");
        else if(r == 305)
        printf("SoFL");
            else if(r == 321)
            printf("Central FLorida"); 
   
    else 
    printf("Area code not yet in the system. DO NOT STAND BY"); 

}

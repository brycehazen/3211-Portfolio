#include <stdio.h>

void main()
{
    char ch;

    printf("Please enter a character: ");
    scanf("%c", &ch);


    if(ch >= 'A' && ch <= 'Z')
        printf("capital");
    else
        printf("Error!");
}
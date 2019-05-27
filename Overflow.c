#include <stdio.h>

void main()
{
    int x; // signed [-2,147,483,648 to 2,147,483,647]

    x = 2147483647;
    printf("Test 1: %d", x);

    x = x + 1;
    printf("Test 2: %d", x);

}


#include <stdio.h>
#include <math.h> //able to use more math like sqrt

void main()
{
    double sqrt(double);
    int a = 16, b;

    b = sqrt(a);
    printf("Eq. 1: The square of %d is %d", a, b);

    b = (int)sqrt((double)a);
    printf("Eq. 2: The square of %d is %d", a, b);

}

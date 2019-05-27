#include <stdio.h>

void main()
{
    int a = 4, b = 5;
    float n;

    n = (a + b)/2;
    printf("%f", n); // 4.0

    // Using a "cast"
    n = (float)(a + b)/2; //putting float inside () is called casting
    printf("%f", n); // Prints 4.5

    n = (a + b)/2.0;
    printf("%f", n); // 4.5

    n = (a + b)/2.0f;
    printf("%f", n); // 4.5

    n = (float)(a + b)/(float)2;
    printf("%f", n); // 4.5

    n = (float)((a + b)/2);
    printf("%f", n); // 4.0

}

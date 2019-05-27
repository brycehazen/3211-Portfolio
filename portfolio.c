// Dylan Perkowski
// The Classic Hello World and some other stuff
#include <stdio.h>  // standard input/output (keyboard/monitor)

int main(void)
{
    printf("Hello World!\n");
    return 0;
}

/*
Date: 05/14/2019
Demo
UCF EGN 3211
*/

//-----------------------------------------------------------------------------
// Formats for different prints
#include <stdio.h>

int main(void)
{
	printf("123\\456\\\\78\n");
    // Prints 123\456\\78
	printf("123\"456\"78\n");
    // Prints 123"456"78
	printf("The score is 80%%\n");
    // Prints The score is 80%
	printf("To print a \" type \\\"\n");
    // Prints To print a " type \"
	return 0;
}

//-----------------------------------------------------------------------------
// Adding 2 integers
#include <stdio.h>

int main(void)
{
    int x, y, result;

    printf("Enter first intger: _\n");
    scanf("%d", &x);
    printf("Enter second integer: _\n");
    scanf("%d", &y);

    result = x + y;

    printf("The result is %d\n", result);
    return 0;
}

//-----------------------------------------------------------------------------
// Get a result without actually having a "result" integer
#include <stdio.h>

int main(void)
{
    int x, y;

    printf("Enter two integers: \n");
    scanf("%d%d", &x, &y);
    printf("The result of the numbers is: %d\n", x+y);
    return 0;
}

//-----------------------------------------------------------------------------
// Writing code on more than one line as if it was one line (to safe space from going past this line)
#include <stdio.h>

int main(void)
{
    printf("EGN 3211: Engineering \
    Analysis and Computation\n");
    return 0;
}

//-----------------------------------------------------------------------------
// Read an integer and check how many criteria it meets
// Positive, multiple of 2 and multiple of 3
#include <stdio.h>

int main(void)
{
    int n;

    printf("Enter an integer: \n");
    scanf("%d", &n);

    if(n > 0)
        printf("Integer is positive\n");
    if(n%2 == 0)
        printf("Integer is even\n");
    if(n%3 == 0)
        printf("Integer is odd\n");

    return 0;
}

//-----------------------------------------------------------------------------
// Read a phone area code and print the city that it belongs to
#include <stdio.h>

int main(void)
{
    int code;

    printf("Enter an area code: \n");
    scanf("%d", &code);

    if(code == 407)
        printf("Orlando\n");
    else if(code == 305)
        printf("Miami\n");
    else if(code == 904)
        printf("Jacksonville\n");
    if(code |= 407 || 305 || 904)
        printf("CITY UNKNOWN\n");

    return 0;
}

//-----------------------------------------------------------------------------
// Check if n is b/t 0 & 10 inclusive
#include <stdio.h>

int main(void)
{
    int n;

    printf("Please enter a number.\n");
    scanf("%d", &n);

    // Check if valid
    if(n >= 0 && n <= 10)
        printf("Hey! You entered a valid number!\n");
    // Check if invalid
    if(n < 0 || n > 10)
        printf("Wo there buddy, that number isn't valid!\n");

    return 0;
}

//-----------------------------------------------------------------------------
// Check if the user password is correct (3 valid passwords)
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, x = 1234, y = 3211, z = 6969;

    printf("Please enter your 4 digit password: \n");
    scanf("%d", &n);

    if(n == x || n == y || n == z)
    {
        printf("Correct Password\n");
            printf("Exiting...\n");
            exit(0); // shuts down the program
    }
    else
    {
        printf("Incorrect Password\n");
    }
    return 0;
}

//-----------------------------------------------------------------------------
// Check if temperature is hot
// DOES NOT COMPILE -- DO NOT KNOW WHAT UNIT WAS SUPPOSED TO BE
#include <stdio.h>

int main(void)
{
    int unit, temp;

    // printf(...);
    scanf("%d%d", &unit, &temp);

    if((unit == 0 && temp >= 80) || (unit == 1 && temp >= 80))
        // printf(.....);
}

//-----------------------------------------------------------------------------
// Nested If-Else Statements Formatting
// DOES NOT COMPILE -- ONLY A FORMATTING EXAMPLE
#include <stdio.h>

int main(void)
{
    if(codition 1)
    {
        code 1;
        if(condition 2)
        {
            code 2;
        }
        else{code 3}
    }
    else if(condition 4)
    {
        code 4;
        if(condition 5)
        {
            code 5;
        }
        else{code 6}
    }
}
// Only codes 1, 4, 5 are true
// --> codes 1, 3
// Only codes 2, 4, 5 are true
// --> codes 4, 5
// Only codes 2, 5 are true
// --> none

//-----------------------------------------------------------------------------
// Switch-Case Statement
// Is used to compare a variable to multiple constants
#include <stdio.h>

int main(void)
{
    int rating;

    printf("Please enter the rating of this restaurant\n");
    scanf("%d", &rating);

    switch (rating)
    {
        case 1: printf("Bad Restaurant\n"); break;
        case 2:
        case 3: printf("Average Restaurant\n"); break;
        case 4:
        case 5: printf("Great Restaurant\n"); break;
        default: printf("Invalid Choice\n");
    }
    return 0;
}

//-----------------------------------------------------------------------------
// DeMorgan's Theorum
// !(condition 1 && condition 2) => !condition 1 || !condition 2
// !(condition 1 || condition 2) => !condition 1 && !condition 2
#include <stdio.h>

int main(void)
{
    int grade;

    printf("Please enter your grade: \n");
    scanf("%d", &grade);

    // Check if a grade is valid
    if(grade >= 0 && grade <= 100)
        printf("Grade is valid\n");
    // Check if a grade is invalid
    // same as saying: if(grade < 0 || grade > 100)
    if(!(grade >= 0 && grade <= 100))
        printf("Grade is invalid\n");

    return 0;
}

//-----------------------------------------------------------------------------
// Integer Overflow
#include <stdio.h>

int main(void)
{
    int x; // signed [-2,147,483,648 to 2,147,483,647]

    x = 2147483647;
    printf("Test 1: %d\n", x);

    x = x + 1;
    printf("Test 2: %d\n", x);

    return 0;
}

//-----------------------------------------------------------------------------
// ASCII Character
#include <stdio.h>

int main(void)
{
    char ch;

    printf("Please enter any character: ");
    scanf("%c", &ch);
    printf("\n");

    printf("The character is %c\n", ch);
    printf("The ASCII is %u\n", ch);

    return 0;
}

//-----------------------------------------------------------------------------
// Check if ch is uppercase
// A = 65, Z = 90
#include <stdio.h>

int main(void)
{
    int ch;

    printf("Please enter a character: ");
    scanf("%c", &ch);

    if(ch >= 65 && ch <= 90)
        printf("The character's ASCII says it's a capital.\n");
    if(ch >= 'A' && ch <= 'Z')
        printf("We double checked and it is a capital.\n");
    else
        printf("Error! Please enter a capital letter.\n");

    return 0;
}

//-----------------------------------------------------------------------------
// Convert lowercase to uppercase
#include <stdio.h>

int main(void)
{
    char ch;

    printf("Please enter a character: ");
    scanf("%c", &ch);

    if(ch >= 'a' && ch <= 'z')
   {
       ch = ch - 32;
       printf("Uppercase %c", ch);
   }
   else
       printf("Error! Please enter a lowercase character.\n");

    return 0;
}

//-----------------------------------------------------------------------------
// Backspace -- moves cursor to the left w/o deleting anything
#include <stdio.h>

int main(void)
{
    printf("12345");  // 12345
    printf("\b\b\b"); // move left 3 times
    printf("x");      // 12x45

    return 0;
}

//-----------------------------------------------------------------------------
// Boolean Variable
// Should print 0 1 1
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    bool a;

    a = 0; printf("%d", a); // 0
    a = 1; printf("%d", a); // 1
    a = 4; printf("%d", a); // 1

    return 0;
}

//-----------------------------------------------------------------------------
// Playing with floats
#include <stdio.h>

int main(void)
{
    float x, y, z;
    x = 2.3458;
    y = 2.999999999999999999;
    z = 2.91254875612532698;

    printf("%f\n", x); // 2.345800
    printf("%.3f\n", x); // 2.346
    printf("%.20f\n", y); // 3.0000000000...
    printf("%f\n", z); // used different % variable in class

    return 0;
}

//-----------------------------------------------------------------------------
// More playing with floats
#include <stdio.h>

int main(void)
{
    float x = 5.334615;

    printf("%f\n", x);
    printf("%.2f\n", x);
    printf("%.3f\n", x);
    printf("%e\n", x);

    return 0;
}

//-----------------------------------------------------------------------------
// Playing with doubles
#include <stdio.h>

int main(void)
{
    double x = 2.3456;

    printf("%lf", x);

    return 0;
}

//-----------------------------------------------------------------------------
// Averaging an integer and a float
// Also introduction of "casting"
#include <stdio.h>

int main(void)
{
    int a = 4, b = 5;
    float n;

    n = (a + b)/2;
    printf("%f\n", n); // Prints 4.0

    // Using a "cast"
    n = (float)(a + b)/2;
    printf("%f\n", n); // Prints 4.5

    n = (a + b)/2.0;
    printf("%f\n", n); // Prints 4.5

    n = (a + b)/2.0f;
    printf("%f\n", n); // Prints 4.5

    n = (float)(a + b)/(float)2;
    printf("%f\n", n); // Prints 4.5

    n = (float)((a + b)/2);
    printf("%f\n", n); // Prints 4.0

    return 0;
}

//-----------------------------------------------------------------------------
// Square Roots
#include <stdio.h>
#include <math.h>

int main(void)
{
    double sqrt(double);
    int a = 16, b;

    b = sqrt(a);
    printf("Equation 1: The square root of %d is %d\n", a, b);

    b = (int)sqrt((double)a);
    printf("Equation 2: The square root of %d is %d\n", a, b);

    return 0;
}

//-----------------------------------------------------------------------------
// Predicting the population
#include <stdio.h>

int main(void)
{
    unsigned long long int n;
    n = 7000000000;

    n = n * 1.015;
    printf("Population: %llu people after 1 year\n", n);

    return 0;
}

//-----------------------------------------------------------------------------

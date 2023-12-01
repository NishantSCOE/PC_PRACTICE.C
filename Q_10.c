// Write a program to check whether a number is
//  even or odd.
#include <stdio.h>
int main()
{
    int number;
    printf("Enter a number to know odd or even: ");
    scanf("%d", &number);

    if (number % 2 == 0)
    {
        printf("The number is even.\n");
    }
    else
    {
        printf("The number is odd.\n");
    }
    return 0;
}
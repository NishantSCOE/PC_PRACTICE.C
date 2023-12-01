// 9.Write a program to check whether a number is
//  positive, negative, or zero
#include <stdio.h>
int main()
{
    int number;
    printf("Enter a number to know it is positive, negative or zero: ");
    scanf("%d", &number);

    if (number > 0)
    {
        printf("Number is positive.\n");
    }
    else if (number < 0)
    {
        printf("Number is negative.\n");
    }
    else
    {
        printf("Number is zero.\n");
    }
    return 0;
}
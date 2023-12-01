// write a programme to accept any integer number and
//  decide whether it is completely divisible by 13.
#include <stdio.h>
int main()
{
    int number;
    printf("Enter a number to know it is divisible by 13 or not: ");
    scanf("%d", &number);

    if (number % 13 == 0)
    {
        printf("The %d is divisible by 13.", number);
    }
    else
    {
        printf("%d is not divisible by 13.",number);
    }
    return 0;
}
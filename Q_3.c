// Write a program to find the largest and smallest number among three numbers
// entered by the user.
#include <stdio.h>
int main()
{
    int num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 >= num2 && num1 >= num3)
    {
        printf("%d is greater than %d and %d.\n", num1, num2, num3);
    }
    else if (num2 >= num1 && num2 >= num3)
    {
        printf("%d is greater than %d and %d.\n", num2, num1, num3);
    }
    else
    {
        printf("%d is greater than %d and %d.\n", num3, num1, num2);
    }
    return 0;
}
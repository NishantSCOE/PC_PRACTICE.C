// Write a program to read two numbers from the user and print the sum, difference,
// product, and quotient of the two numbers.
#include <stdio.h>
int main()
{
    float n1, n2;
    printf("Enter a two numbers: ");
    scanf("%f %f", &n1, &n2);

    float sum = n1 + n2;
    printf("Sum: %.2f\n", sum);
    float difference = n1 - n2;
    printf("Difference: %.2f\n", difference);
    float product = n1 * n2;
    printf("Product: %.2f\n", product);

    if (n2 != 0)
    {
        float quotient = n1 / n2;
        printf("Quotient: %.2f\n");
    }
    else
    {
        printf("Error! cannot divide by zero.");
        return 1;
    }
    return 0;
}
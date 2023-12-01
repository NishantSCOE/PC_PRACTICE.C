// Write a program to print the size of different data types in C (int, float, double,
// char, etc.).
#include <stdio.h>
int main()
{
    int a;
    float b;
    double c;
    char d;
    printf("Enter a int, float, double, char to know size: ");
    scanf("%d %f %lf %c", &a, &b, &c, &d);

    printf("The size of %d is %d\n", a, sizeof(a));
    printf("The size of %.2f is %d\n", b, sizeof(b));
    printf("The size of %.3lf is %d\n", c, sizeof(c));
    printf("The size of %c is %d\n", d, sizeof(d));

    return 0;
}
// Write a program to calculate the area and perimeter
//  of a rectangle using arithmetic operators.
//  area of rectangle = length*width
//  perimeter of rectangle = 2*(lenght + width)
#include <stdio.h>
int main()
{
    float length, width;
    printf("Enter length and width of a rectangle: ");
    scanf("%f %f", &length, &width);

    float area = length * width;
    float perimeter = 2 * (length + width);

    printf("Area of rectangle is %.2f\n", area);
    printf("Perimeter of rectangle is %.2f", perimeter);

    return 0;
}

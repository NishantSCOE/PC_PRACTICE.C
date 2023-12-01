// Write a function to calculate the area of a triangle.
#include <stdio.h>
int main()
{
    float base, height;
    printf("Enter base and height of a triangle: ");
    scanf("%f %f", &base, &height);
    
    float area = (base * height)/2;

    printf("The area of a triangle is %.2f", area);

    return 0;
}
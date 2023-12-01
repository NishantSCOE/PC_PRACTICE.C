// Write a program to calculate the volume and
// surface area of a cube using arithmetic operators.
//  volume of cube = side*side*side
//  surface area of cube = 6*side*side
#include <stdio.h>
int main()
{
    float side;
    printf("Enter the side of cube: ");
    scanf("%f", &side);

    float volume = side * side * side;
    float surfaceArea = 6 * side * side;

    printf("Volume of cube is %.2f\n", volume);
    printf("Surface area of cube is %.2f\n", surfaceArea);

    return 0;
}
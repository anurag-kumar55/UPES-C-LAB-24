//Write a program to calculate the area of circle,rectangle and triangle using seperate functions.



#include <stdio.h>
float areaCircle(float r)
{
    return 3.14 * r * r;      
}
float areaRectangle(float l, float b)
{
    return l * b;             
}
float areaTriangle(float base, float height)
{
    return 0.5 * base * height; 
}
int main()
{
    float r, l, b, base, height;
    float ac, ar, at;

    printf("Enter radius of circle: ");
    scanf("%f", &r);
    ac = areaCircle(r);
    printf("Area of Circle = %.2f\n", ac);

    printf("Enter length and breadth of rectangle: ");
    scanf("%f %f", &l, &b);
    ar = areaRectangle(l, b);
    printf("Area of Rectangle = %.2f\n", ar);

    printf("Enter base and height of triangle: ");
    scanf("%f %f", &base, &height);
    at = areaTriangle(base, height);
    printf("Area of Triangle = %.2f\n", at);

    return 0;
}
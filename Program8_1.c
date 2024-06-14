
// Write a program which accept radius of circle from user and calculate its area. Consider value of PI as 3.14. (Area = PI* Radius * Radius)

// Input: 5.3
// Output: 88.2026

// Input: 10.4
// Output: 339.6224
 

#include<stdio.h>
double CircleArea(float fRadius)
{
    
    const float pi = 3.14;
    double Area = 0;

    Area = pi * fRadius * fRadius;

    return Area;

}


int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter a radius: \n");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle is:%f \n", dRet);

    return 0 ;

}
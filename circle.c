#include<stdio.h>
int main()

{
    float area , radius , perimeter;
    printf("enter the radius of a circle");
    scanf("%f",&radius);
    area=3.14*radius*radius;
    perimeter=2*3.14*radius;
    printf("area of a circle =%f\n",area);
    printf("perimeter of a circle =%f",perimeter);
}



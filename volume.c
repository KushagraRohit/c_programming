//calculate the volume of sphere
#include<stdio.h>
int main()
{
    float vol,rad;
    printf("enter the radius of a sphere\t"); //Volume=(4×π×radius×radius ×radius)/3
    scanf("%f",&rad);
    vol=(4*3.14*rad*rad*rad)/3;
    printf("volume of a sphere =%f",vol);
}

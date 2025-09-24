

#include<stdio.h>
int main()
{
    int a;

    printf("enter  year");
    scanf("%d",&a);


    if(a%4==0){

       if(a%100==0){

            if(a%400==0){
                printf(" %d is a Leap year");
            }
            else{
               printf(" %d is Not a leap year");
            }
        }
        else{
            printf(" %d is a leap year");
        }

    }
    else{
    printf(" %d is Not a leap year");
    }



}

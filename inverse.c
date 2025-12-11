#include <stdio.h>

int main(){
    int n,r,t,u;
    r=0;

    printf ("Enter the No.");
    scanf ("%d",&n);
    u=n;
while (n!=0){
    t=n%10;
    r=r*10+t;
    n=n/10;

}

if (u==r){
    printf ("Yes, both value are same");
}

    else {

        printf ("No, both value are not same");
    }
    printf("%d",r);


}

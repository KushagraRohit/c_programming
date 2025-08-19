#include <stdio.h>
int main ()
{
    int n,r;
    printf ("Enter a Number");
    scanf ("%d", &n);
    r=n%10;

    if (r==5)
    {
        printf ("yes");
    }
    else
    {

        printf ("no");
    }


}

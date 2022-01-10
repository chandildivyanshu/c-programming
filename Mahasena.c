#include <stdio.h>

int main ()
{
    int n,z,y,lucky,unlucky;
    scanf("%d",&n);
    int x[n];
    y=0;
    z=n-1;
    while(y<=z)
    {
        scanf("%d",&x[y]);
        y++;
    }
    y=0;
    lucky=0;
    unlucky=0;
    while(y<=z)
    {
        if(x[y]%2==0)
        {
            lucky++;
        }
        else
        {
            unlucky++;
        }
        y++;
    }
    if(lucky>unlucky)
    {
        printf("READY FOR BATTLE");
    }
    else
    {
        printf("NOT READY");
    }
    return 0;
}
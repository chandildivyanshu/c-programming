#include <stdio.h>

int main()
{
    int t,y,sum,n,z;
    scanf("%d",&t);
    y=1;
    while(y<=t)
    {
        sum=0;
        scanf("%d",&n);
        while(n>0)
        {
            z=n%10;
            sum=sum+z;
            n=n/10;
        }
        printf("%d\n",sum);
        y++;
    }
    return 0;
    
}



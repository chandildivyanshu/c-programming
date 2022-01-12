#include <stdio.h>

int main()
{
    int t,y,a,b,c;
    scanf("%d",&t);
    y=1;
    while(y<=t)
    {
        scanf("%d %d %d",&a,&b,&c);
        
        if(a+b+c==180)
        {
            printf("YES\n");
        }
        if(a+b+c!=180)
        {
            printf("NO\n");
        }
        y++;
    }
    return 0;
}
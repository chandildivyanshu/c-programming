#include <stdio.h>

int main()
{
    int t,y,a,b,maximum;
    scanf("%d",&t);
    y=1;
    while(y<=t)
    {
        scanf("%d %d",&a,&b);
        if(a>b)
        {
            printf("%d\n",a);
            
        }
        else
        {
            printf("%d\n",b);
        }
        maximum=a+b;
        printf("%d\n",maximum);
        y++;
        
    }
    return 0;
    
    
}


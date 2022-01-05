#include<stdio.h>
int main()
{
    int a,y,x,t;
    scanf("%d",&t);
    
    y=1;
    a=-1;
    while(y<=t)
    {
        scanf("%d",&x);
        if(x<10)
        {
            printf("Thanks for helping Chef!\n");
            
        }
        else
        {
            printf("%d\n",a);
        }
        y++;
        
    }
    return 0;
    
}

#include <stdio.h>

int main()
{
    int t,y,n,LuckyFour;
    scanf("%d",&t);
    y=1;
    while(y<=t)
    {
        scanf("%d",&n);
        
        
        LuckyFour=0;
        while(n>0)
        {
            if(n%10==4)
            {
                LuckyFour++;
                
            }
            n=n/10;
            
        }
        printf("%d\n",LuckyFour);
        y++;
    }
    
    return 0;
    
    
}


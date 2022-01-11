#include <stdio.h>

int main()
{
    int t,y,n,largest;
    scanf("%d",&t);
    y=1;
    while(y<=t)
    {
        scanf("%d",&n);
        largest=n/2;
        largest=largest+1;
        printf("%d\n",largest);
         y++;
        
    }
    return 0;
}

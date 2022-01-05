# include<stdio.h>
int main()
{
    int y,lead1,lead2,sum1,sum2,a,b,k,z,t,max,maximum;
    scanf("%d",&t);
    y=1;
    sum1=0;
    sum2=0;
    lead1=0;
    lead2=0;
    z=0;
    max=0;
    maximum=0;
    while(y<=t) 
    {
        scanf("%d %d",&a,&b);
        sum1=a+sum1;
        sum2=b+sum2;
        if(sum1>sum2)
        {
            z=sum1-sum2;
            lead1=lead1+z;
            if(z>max)
            {
                max=z;
            }
        }
        if(sum2>sum1)
        {
            k=sum2-sum1;
            lead2=lead2+k;
            if(k>maximum)
            {
                maximum=k;
            }
        }
        
        y++;
    }
    if(lead1>lead2)
    {
        printf("1 %d\n",max);
    }
    if(lead2>lead1)
    {
        printf("2 %d\n",maximum);
    }
    
    
    
    return 0;
}

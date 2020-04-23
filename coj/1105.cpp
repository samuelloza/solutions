#include<stdio.h>
int main()
{
    long n,x,y,sum,i,j,s;
    int lim;
    int ii=0;
    scanf("%ld",&lim);
    while(ii<lim)
    {
       scanf("%ld",&n);

            sum=0;
            for(i=1; sum<n; i++)
                sum=sum+i;
            sum=sum-i+1;
            s=n-sum;
            if(i&1)
                x=s,y=i-s;
            else
                x=i-s,y=s;
            printf("TERM %ld IS %ld/%ld\n",n,x,y);

        ii++;
    }
    return 0;
}
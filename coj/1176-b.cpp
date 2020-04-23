#include<stdio.h>

int ternary(int);

int main()

{
    int num;
    //freopen("in.txt","r",stdin);
   
    while(scanf("%ld",&num) && num>=0)
       
    {
        if(!num)
            printf("0\n");
        else
        {
            ternary(num);
            printf("\n");
        }
    }
    return 0;
   
}

int ternary(int n)
{
   
    if(n==0)
        return 1;
    else ternary(n/3);
    printf("%d",n%3);
}
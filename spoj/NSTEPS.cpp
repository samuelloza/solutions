#include<stdio.h>
 
int main (int argc, char *argv[])
{
    int ip_count = 0,x=0,y=0,i=0;
    scanf("%d",&ip_count);
    for (i = 0; i < ip_count; i++)
    {
        scanf("%d %d",&x,&y);
        if(x == y)
        {
            if(x%2 == 0)
                printf("%d\n",2*x);
            else
                printf("%d\n",2*x-1);
        }
        else if(y == x-2)
        {
            if(x%2 == 0)
                printf("%d\n",2*x-2);
            else
                printf("%d\n",2*x-3);
        }
        else
        {
            printf("No Number\n");
        }
    }
    return 0;

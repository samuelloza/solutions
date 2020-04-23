#include<stdio.h>
#include<string.h>
 
char num[1005];
 
int main()
{
    int i,n,l;
    while(gets(num)&&strcmp(num,"0"))
    {
        n=0,l=strlen(num);
 
        for(i=0;i<l;i+=2)
            n=n+(num[i]&15);
 
        for(i=1;i<l;i+=2)
            n=n-(num[i]&15);
 
        if(n%11)
            printf("%s is not a multiple of 11.\n",num);
        else
            printf("%s is a multiple of 11.\n",num);
    }
    return 0;
}
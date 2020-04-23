#include<stdio.h>
#include<string.h>
int main()
{
char line[102];
int i,j,grp,k,a,b,len,start,end;
while(scanf("%d\n",&grp)==1)
{
if(grp==0)break;
else
{
gets(line);
start=0;
end=0;
len=strlen(line);
a=len/grp;
for(i=0;i<len;i++)
{
if((i+1)%a==0)
{
end=i;
for(j=end;j>=start;j--)
{
printf("%c",line[j]);
}
start=end+1;
}
}
}
printf("\n");
}
return 0;
}
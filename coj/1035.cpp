#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>

using namespace std;


#define MAX 1000001
#define REP(i,a) for(i=0;i<a;i++)

int M[MAX];
int es(int i)
{
int b,c,d;
float f;
f=float(i);
b=int(f-sqrt(f));
c=(int)log(f);
d=int(f*sin(f)*sin(f));

if(M[b]==-1)
{
es(b);

}
if(M[c]==-1)
es(c);
if(M[d]==-1)
es(d);

M[i]=(M[b]+M[c]+M[d])%1000000;

}
int main()
{

int i;
float f;
int b;


REP(i,MAX)
M[i]=-1;
M[0]=1;
while(scanf("%d",&i)!=EOF)
{
if(i==-1)
break;
if(i>0)
{
es(i);
}
printf("%d\n",M[i]);
}

return 0;
}
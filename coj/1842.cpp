#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

int main()
{
    int x1,x2,y1,y2,n;
    scanf("%d",&n);
    while(n--){
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    printf("%d\n",(abs(x2-x1)+abs(y2-y1)));
    }
    return 0;
}

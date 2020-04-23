#include <cstdlib>
#include <cstdio>
int main(){
    int n,a,b,c;
    
    while(scanf("%d",&n)==1){
    int conta=0;
    while(n--){
    scanf("%d %d %d",&a,&b,&c);
    if(a+b+c>=2)
    conta++;
        
    }
    printf("%d\n",conta);
    }
    return 0;
    }
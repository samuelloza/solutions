#include <cstdio>
using namespace std;
int main() {
    int g, d,m,a,c1,c2,c3,n;
    scanf("%d",&n);
    while(n--){
    scanf("%d %d/%d/%d%d%d%d",&g,&d,&m,&a,&c1,&c2,&c3);
    printf ("%d-%04d-%02d-%02d-%04d-%03d-%04d\n",g,a,m,d,c1,c2,c3);
    }
    return 0;
}
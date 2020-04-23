#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <cstring>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <limits>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;
#define MAX 31622LL
int main(){
    int i,j,n,k;
    scanf("%d%d",&n,&k);
    for (i=0;i<n;i++){
        for (j=0;j<n;j++){
            if (i==j) printf("%d ",k);
            else printf("0 ");
        }
        printf("\n");
    }
    return 0;
}
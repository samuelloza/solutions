#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{bool vec[42]={false};int conta=0,v,m;
    for(int i=0; i<10; i++){scanf( "%d", &v );if(v>42){m=v%42;}
        else if(v==42) m=0;
        else{m=v;}
        if(!vec[m])
        {conta++;}vec[m]=true;
    }printf( "%d\n", conta );
    return 0;
}

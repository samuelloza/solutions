#include <iostream>
using namespace std;
int main() {
    int x,e,f,c,su=0,su2=0;
    cin>>x;
    while(x--) {
        cin>>e>>f>>c;
        if(c==1){
        cout<<0<<endl;
        }else{
         e+=f;
        su2=0;
        while (e >= c) {
            su= e / c;
            e = su +e-(su*c);
            su2 += su;
        }
        cout<<su2<<endl;
        }
       
    }
    return 0;
}
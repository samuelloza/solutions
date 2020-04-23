#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;
int main(){
	int a,b;
	//while(true){
	scanf("%d %d",&a,&b);

	if(a<b)cout<<-1;
	else{
		char aa='a';
		if(a==b||a!=1&&b==1){
			if(b==1&&a!=1)cout<<-1;
			else 
			for (int i = 0; i < b; i++,aa++){
				cout<<aa;
			}
		}else{
			bool sw=true;
			int i=0;
			for (; i <= a-b; i++){
				if(sw)cout<<"a";
				else cout<<"b";
				sw=!sw;
			}
			if(sw){
				cout<<"a";
				aa='b';
			}else {cout<<"b";aa='b';}
			aa++;
			for (int i2 = (a-b); i < a-1; i++){
				cout<<aa;

				aa++;
			}
		}

	}	
	cout<<endl;
	//}

	return 0;
}
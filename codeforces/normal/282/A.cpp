#include <cstdio>
#include <cstdlib>
#include <vector>
#include <iostream>
using namespace std;

int main(){
	int k=1;
	scanf("%d",&k);
	getchar();
	int d=0;
	while(k--){
		string cad;
		getline(cin,cad);
		if(cad[0]=='+'){
			d++;
		}else{
			if(cad[0]=='X'){
				if(cad[1]=='+'){
					d++;
				}else{
					d--;
				}
			}else{
				d--;
			}
		}
	}
	cout<<d<<endl;
	return 0;
}
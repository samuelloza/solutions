#include <iostream>
#include <vector>
#include <map>
#include <string.h>
#include <sstream>
using namespace std;
bool valido[10];
bool esValido(int n){
	memset(valido,false,sizeof valido);
	while(n){
		int a=n%10;
		if(valido[a]){return false;}
		else{valido[a]=true;n/=10;}
	}
	return true;
}
int main(){
	int a,b;
	while(cin>>a>>b){
		int con=0;
		for (int i = a; i <= b; i++)
			con+=esValido(i);
		cout<<con<<endl;
	}
	return 0;
}
#include <cstdio>
#include <vector>
#include <iostream>
using namespace std;

bool is_let(char a,string cade){
	for(int i = 0; i< cade.size(); i++){
		if(cade[i] == a){
			return true;
		}
	}
	return false;
}


string elimina_rep(char a, string cade){
	for(int i = 0; i< cade.size();i++){
		if(cade[i] == a){
			cade[i]='\0';
			return cade;
		}
	}
	return cade;
}

int main(){
	int n,k;
	string cade;
	cin>>n>>k>>cade;

	char i = 'a';

	while(i <= 'z' && k){
		if(is_let(i,cade)){
			cade = elimina_rep(i,cade);
			k--;
		}else{
			i++;
		}
	}

	cout<<cade<<endl;
	return 0;
}
#include <cstdio>
#include <iostream>
using namespace std;

bool is_palindrome(int a, int b, string cade){
	int dist = b;
	for(int i = a; i <=b; i++,dist-- ){
		if(cade[i] != cade[dist]){
			return false;
		}
	}
	return true;
}

bool sub_cadenas(string cade){
	for(int i = 0; i < cade.size(); i++){
		for(int j = i + 1; j < cade.size() ; j++){
			if(cade[i] == cade[j]){
				if(is_palindrome(i,j,cade)){
					if(((j-i)+ 1) % 2 == 0){
						return false;
					}
					for(int k = i; k <= j; k++){
						cout<<cade[k];
					}
					cout<<" "<<j-i;
					cout<<endl;

				}
			}
		}	
	}
	return true;
}

int main(){
	string cade;
	while(cin>>cade){
		if(sub_cadenas(cade)){
			cout<<"Odd."<<endl;
		}else{
			cout<<"Or not."<<endl;
		}
	}
	return 0;
}


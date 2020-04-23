#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	map<char,char> mapa;
	string cade;
	cin>>t;
	while(t--){
		mapa.clear();
		int n;
		cin>>n;
		char ci,pi;
		for(int i=0;i<n;i++){
			cin>>ci>>pi;
			mapa[ci] = pi;
		}
		cin>>cade;
		int ln = cade.size();
		bool flag = 0;
		for(int i=0;i<ln;i++){
			if(mapa.find(cade[i])!=mapa.end()){
				cade[i] = mapa[cade[i]];
			}
			if(cade[i] == '.'){
				flag = true;
			}
		}
		int i=0;
		while(i<ln && cade[i]=='0') {
			i++;
		}
 
		int j = ln-1;
 
		while(j>=0 && cade[j]=='0'){
			j--;
		} 
		if(cade[j] != '.'){
			if(flag){
				j++;
			}
			else{
				j = ln;
			}
		}
		if(j<=i){
			cout<<"0"<<endl;
		}
		else{
			cout<<cade.substr(i,j-i)<<endl;
		}
	}
	return 0;
}
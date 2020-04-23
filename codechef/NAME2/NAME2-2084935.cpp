#include <cstdio>
#include <cstdlib>
#include <string>
#include <vector>
#include <iostream>	
using namespace std;
bool solved(string a, string b){
	int i,j,c=0;
	i=j=0;
	for (; j <b.size()&&i<a.size() ; j++){
		if(a[i]==b[j]){
			i++;c++;
		}
	}
	if(c==a.size())return true;
	return false;		
}
int main(){
	int k;
	scanf("%d",&k);
	getchar();
	string a,b;
	while(k--){
		cin>>a>>b;
		if(a.size()>b.size()){
			if(solved(b,a)){
				cout<<"YES"<<endl;
			}else{
				cout<<"NO"<<endl;
			}	
		}else{
			if(solved(a,b)){
				cout<<"YES"<<endl;
			}else{
				cout<<"NO"<<endl;
			}	
		}
		
	}
}
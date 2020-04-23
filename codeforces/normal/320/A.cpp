#include <algorithm>
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <vector>
#include <map>
#include <set>
#include <queue>
using namespace std;
bool verif(bool flag[],string cad){
	for(int i=0;i<cad.size();i++)if(!flag[i])return false;

		return true;
}
int main(){
	string cad;
	getline(cin,cad);
	for(int i=0;i<cad.size();i++){
		if(cad[i]=='1' || cad[i]=='4'){;}
		else{cout<<"NO"<<endl;return 0;}
	}
	bool flag[cad.size()];
	memset(flag,false,sizeof(flag));
	bool sw1,sw2,sw3;
	for(int i=0;i<cad.size();i++){
		if(cad[i]=='1'){
			flag[i]=true;
		}else{
			sw1=false;
		}
	}
	if(verif(flag,cad)){cout<<"YES"<<endl;return 0;}
	else{
		for(int i=0;i<cad.size()-1;i++){
			if(cad[i]=='1' && cad[i+1]=='4'){
				flag[i+1]=true;
			}else{
				sw2=false;
			}
		}
	}
	if(verif(flag,cad)){
		cout<<"YES"<<endl;
		return 0;
	}
	else{
		for(int i=0;i<cad.size()-1;i++){
			if(cad[i]=='1' && cad[i+1]=='4'&& cad[i+2]=='4'){
				flag[i+2]=true;
			}else{
				sw2=false;
			}
		}
	}
	
	if(verif(flag,cad))cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0;
}
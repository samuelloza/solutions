#include <cstdio>
#include <cstdlib>
#include <vector>
#include <iostream>
#include <algorithm>
#include <math.h>
#define  pb push_back
using namespace std;
int main(){
	string a;
	string b;
	int ma;
	//while(true){
	cin>>a>>b;
	//->
	int vec[300];
	for(int i=0;i<300;i++){
		vec[i]=0;
	}
	for(int i=0;i<a.size();i++){
		vec[a[i]]++;
	}
	for(int i=0;i<b.size();i++){
		vec[b[i]]++;
	}
	bool sw=true;
	int l1=a.size(),l2=b.size();
	int des=0;
	for(int i=0;i<300;i++){
		//cout<<vec[i]<<endl;
		if(vec[i]!=0&&vec[i]%2==1){
			sw=false;
		}else{}
		if(i<=l1&&i<=l2){
			if(a[i]!=b[i])des++;
		}else{}
		
	}
	if(sw){
		if(des>=3){
			cout<<"NO"<<endl;
		}else{
			cout<<"YES"<<endl;
		}	
	}else{
		cout<<"NO"<<endl;
	}
	//<-
	//}
	//cin>>a;
}
#include <cstdio>
#include <cstdlib>
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>	
using namespace std;
bool solved(string a, string b){
	int c=0,j=0;
	for (int i = 0; i < a.size()&&j<b.size();i++){
		if(b[j]==a[i]){
			j++;
		}
	}

	if(j==b.size())return true;
	return false;		
}
int main(){
	int k,n;
	scanf("%d",&k);
	getchar();
	string a,b;
	while(k--){
		cin>>a>>b;
		a+=b;
		scanf("%d",&n);getchar();
		string p="",pp="";
		while(n--){
			cin>>p;
			pp+=p;
		}
		sort(a.begin(),a.end());
		sort(pp.begin(),pp.end());

		if(solved(a,pp))cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
		
	}
}
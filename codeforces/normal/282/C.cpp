#include <cstdio>
#include <cstdlib>
#include <vector>
#include <iostream>
#include <cstring>
using namespace std;
int v1[10];
int v2[10];
int b0[10];

bool comp(int a[],int b[]){
	for (int i = 0; i < 10; i++){
		if(a[i]!=b[i])return false;
	}
	return true;
}
void compara(){
	if(comp(v1,b0)||comp(v1,b0)||comp(v1,b0)||comp(v1,b0)){
		cout<<"YES"<<endl;
	}else{
		if(comp(v2,b0)||comp(v2,b0)||comp(v2,b0)||comp(v2,b0)){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
		
	}
}

int main(){
	int p,q,x,y;
	string xx,yy;
	while(cin>>xx>>yy){
		memset(b0,0,sizeof b0);
		memset(v1,0,sizeof v1);
		memset(v2,0,sizeof v2);
		int aa=0,bb=0,cc=00,dd=0,ee=0;
		if(xx.compare(yy)==0)cout<<"YES"<<endl;
		else{
			if(xx.size()==1||yy.size()==1){
				cout<<"NO"<<endl;
			}else{
				for (int i = 0; i+1< xx.size(); i++){
					x=xx[i]-'0';
					y=xx[i+1]-'0';
					p=x xor y;
					q=x or y;

					aa=(aa*10)+x;
					aa=(aa*10)+p;

					cc=(cc*10)+p;
					cc=(cc*10)+x;

					dd=(dd*10)+q;
					dd=(dd*10)+x;

					ee=(ee*10)+q;
					ee=(ee*10)+y;

				}
				for (int i = 0; i < yy.size(); i++){
					bb=(bb*10)+yy[i]-'0';
				}
				if(aa==bb||cc==bb||dd==bb||ee==bb){
					cout<<"YES"<<endl;
				}else{
					cout<<"NO"<<endl;
				}
			}
		}
	}
	return 0;
}
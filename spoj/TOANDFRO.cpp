#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <string.h>
#include <iostream>
using namespace std;
int main(){
	int k,lim;
	string cad;
	while(scanf("%d",&k)&&k!=0){
		getchar();
		getline(cin,cad);
		char mat[1000][k+2];
		memset(mat,0,sizeof mat);
		bool sw=true;
		int idx=0;
		int i=0;
		for (; idx<cad.size();){
			if(sw){
				for (int j = 0; j < k&&idx<cad.size(); j++){
					mat[i][j]=cad[idx];
					idx++;
				}
			}else{
				for (int j = k-1; j>=0&&idx<cad.size(); j--){
					mat[i][j]=cad[idx];
					idx++;	
				}	
			}
			sw=!sw;
			i++;
		}
		string cad="";
		for (int i2 = 0; i2 < k; i2++){
			for (int j = 0; j < i; j++){
					cad+=mat[j][i2];
			}	
		}
		cout<<cad<<endl;
	}
	return 0;

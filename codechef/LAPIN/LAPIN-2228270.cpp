#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int k;
	scanf("%d",&k);
	getchar();
	string cad;
	while(k--){
		cin>>cad;
		string cad1="",cad2="";
		int li=cad.size();
		int j=0;
		if(li%2 == 1){
			j++;
		}

		for (int i = 0; i < li/2 ;i++){
			cad2+=cad[i];
		}

		for (int i = (li/2)+j; i < li ;i++){
			cad1+=cad[i];
		}
		sort(cad1.begin(),cad1.end());
		sort(cad2.begin(),cad2.end());
		bool sw=true;
		for(int i=0;i<cad1.size();i++){
			if(cad1[i]!=cad2[i]){
				sw=false;break;
			}
		}
		if(sw)printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
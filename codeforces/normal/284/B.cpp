#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
#include <map>
#include <cmath>
using namespace std;
int main(){
	//ifstream cin("174b.in");
	int k;
	while(cin>>k){
		getchar();
		string cade;
		getline(cin,cade);
		bool a,f,i;
		a=f=i=false;
		int aa=0;
		int ff=0;
		int ii=0;
		for (int j = 0; j < cade.size(); j++){
			if(cade[j]=='A'){
				a=true;
				aa++;
			}else if(cade[j]=='F'){
				f=true;
				ff++;
			}else if(cade[j]=='I'){
				i=true;
				ii++;
			}		
		}
		if(a&&f&&i){
			cout<<ii<<endl;
		}else{
			if(a&&f&&!i){
				cout<<aa<<endl;
			}else{
				if(a&&i&&!f){
					cout<<0<<endl;
				}else{
					if(f&&i&&!a){
						cout<<ii<<endl;
					}else{
						if(a&&!f&&!i){
							cout<<aa<<endl;
						}else{
							if(!a&&f&&!i){
								cout<<0<<endl;
							}else{
								if(!a&&!f&&i){
									cout<<0<<endl;
								}
							}
						}
					}
				}
			}
		}
	}
	
	return 0;
}
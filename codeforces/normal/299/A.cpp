#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <iostream>
using namespace std;
bool fun(int a , int b){
	return a>b;
}
int main(){
	int k,lim;
	scanf("%d",&k);
	lim=k;
	int vec[k],i=0;
	while(k--){
		scanf("%d",&vec[i]);
		i++;
	}
	if(lim==1){
		cout<<vec[0]<<endl;
	}else{
		sort(vec,vec+lim);

		for (int i = 0; i < lim; i++){
			if(vec[i]%vec[0]!=0){
				cout<<-1<<endl;
				return 0;
			}
		}
		cout<<vec[0]<<endl;
	}
	return 0;
}
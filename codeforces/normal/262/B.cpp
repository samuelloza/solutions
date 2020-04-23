#include <cstdio>
#include <algorithm>
#include <cstdlib>
#include <vector>
#include <iostream>

using namespace std;
int main(){
	int n,lim;
	scanf("%d %d",&n,&lim);
	int vec[n];
	for (int i = 0; i < n; i++)	scanf("%d",&vec[i]);
		int h=n-1;
		for (; h>=0; h--){
			if(lim>0){
				if(vec[h]<0){
					lim--;
					vec[h]*=-1;
				}
			}else break;
		}

		if(lim>0){
			if(h<0)h=n-1;
			for (; h&&lim; h--){
				vec[h]*=-1;
				if(h==0)h=n-1;
				lim--;
			}
		}		
		int sum=0;
		for (int i = 0; i < n; i++){
			sum+=vec[i];
		}
		cout<<abs(sum)<<endl;
		return 0;
	}
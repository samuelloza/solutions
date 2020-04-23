#include <cstdio>	
#include <cstdlib>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;
vector<char> simu(vector<char> v,int k){
	for (int i = 0; i < k; i++){
		for (int j = 0; j < v.size()-1; j++){
			if(v[j]=='B'&&v[j+1]=='G'){
				swap(v[j],v[j+1]);
				j++;
			}
		}
	}
	return v;
}
int main(){
	int n,k;
	scanf("%d %d",&n,&k);
	vector<char> v(n);
	for(int i=0;i<n;i++)cin>>v[i];

		v=simu(v,k);

	for(int i=0;i<n;i++)cout<<v[i];
		cout<<endl;
	
	return 0;
}
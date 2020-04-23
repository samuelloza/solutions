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
void prin(vector<int> v ){
	for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
}
vector<int> verif(vector<int> v){
	vector<int> v2;
	int i=0;
	for(;i<v.size();i++){
		if(v[i]!=-1){
			v2.push_back(v[i]);
		}
	}
	return v2;
}
bool kernel(vector<int> v){
	for(int i=v.size()-2;i>=0;i--){
		if(v[i]>v[i+1]){
			return true;
		}
	}
	return false;
}
int main(){
	int n,dat;
	scanf("%d",&n);
	vector<int> v(n,-1);
	for(int i=0;i<n;i++){
		scanf("%d",&dat);
		v[i]=dat;
	}
	int sol=0;

	while(true){

		if(!kernel(v)){
			cout<<sol<<endl;
			return 0;
		}		
		for(int j=v.size()-2;j>-1;j--){
			if(v[j]>v[j+1] && v[j]!=-1){
				v[j+1]=-1;
			}

		}
		v=verif(v);
		sol++;
	}
	return 0;
}
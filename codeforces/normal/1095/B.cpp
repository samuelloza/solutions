#include <cstdio>
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main(){
	int n,d;
	cin>>n;
	std::vector<int> v;
	while(n--){
		cin>>d;
		v.push_back(d);
	}
	sort(v.begin(),v.end());

	map<int,int> mapa;
	int min = 0;

	for (int i = 0; i < v.size() -1 ; i++){
		//for(int j = i + 1; j < v.size(); j++){
			mapa[v[v.size() - 1 ]-v[i]]++;
			if(min < mapa[v[v.size() - 1 ]-v[i]]){
				min = mapa[v[v.size() - 1 ]-v[i]];
			}
			
	//	}	
	}

	
	if(mapa.size() == 1){
		cout<<0<<endl;
	}else{
		cout<<min<<endl;
	}
	

	return 0;
}
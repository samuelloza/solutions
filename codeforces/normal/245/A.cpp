#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <algorithm>
#include <cmath>
#include <cassert>
#include <sstream>
#include <fstream>
using namespace std;
struct d{
	int a;
	int b;
	int c;
};
int main(){
	int n;
	vector< d > vec(3);
	d aux;
	aux.a=aux.b=aux.c=0;
	vec.push_back(aux);
	vec.push_back(aux);
	cin>>n;
	while(n--){
		int a,b,c;
		cin>>a>>b>>c;
		vec[a-1].b+=b;
		vec[a-1].c+=c;
		vec[a-1].a=a;	
	}

	for(int i=0;i<2;i++){
		if(vec[i].b>=(vec[i].b+vec[i].c)/2)
			cout<<"LIVE"<<endl;
		else 
			cout<<"DEAD"<<endl;
	}
	vec.clear();
	//cin>>n;
	return 0;
}
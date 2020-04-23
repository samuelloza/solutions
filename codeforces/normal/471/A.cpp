#include <algorithm>
#include <iostream>
#include <iterator>
#include <cassert>
#include <sstream>
#include <fstream>
#include <cstdlib>
#include <cstring>
#include <utility>
#include <complex>
#include <string>
#include <cctype>
#include <cstdio>
#include <vector>
#include <bitset>
#include <stack>
#include <queue>
#include <cmath>
#include <deque>
#include <list>
#include <set>
#include <map>
using namespace std;
int main(){
	int n=6;
	vector<int> vec;
	int v;
	map<int,int> mapa;
	while(n--){
		scanf("%d",&v);
		vec.push_back(v);
		mapa[v]++;
	}
	sort(vec.begin(),vec.end());;
	map<int,int> ::iterator it=mapa.begin();
	int ii=it->first;it++;
	int iu=it->first;
	if(mapa.size() == 3 ){
		it++;
		int io=it->first;
		if((mapa[ii]==1  or mapa[iu]==1 or mapa[io]==1)&&(mapa[ii]>=4 or mapa[iu]>=4 or mapa[io]>=4))
			cout<<"Bear"<<endl;
		else cout<<"Alien"<<endl;
	}else {
		if((mapa.size() == 2 && ii < iu && (mapa[ii]==1 or mapa[iu]==1)))
			cout<<"Bear"<<endl;
		else if(mapa.size()==2 && (mapa[ii]==4 or mapa[ii]==6 or mapa[iu]==4 or mapa[iu]==6) or (mapa.size()==1 && (mapa[ii] ==4 or mapa[ii]==6)))
			cout<<"Elephant"<<endl;
		else cout<<"Alien"<<endl;
	}
	return 0 ;
}
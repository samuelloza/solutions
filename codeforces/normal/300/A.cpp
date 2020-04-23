#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int dat(vector <int> v){
	int a=1;
	for (int i = 0; i < v.size(); i++){
		a*=v[i];
	}
	return a;
}
int main(){
	int n;
	scanf("%d",&n);
	vector<int> ve;
	vector<bool> vi;
	int d;
	while(n--){
		scanf("%d",&d);
		ve.push_back(d);
		vi.push_back(false);
	}
	vector<int>a;
	vector<int>b;
	vector<int>c;
	bool aa,bb,cc;
	aa=bb=cc=true;
	for (int i = 0; i < ve.size(); i++){
		if(ve[i]==0&&aa){
			c.push_back(ve[i]);aa=false;
		}
		if(ve[i]>0&&bb){
			b.push_back(ve[i]);bb=false;
		}
		a.push_back(ve[i]);
	}
	ve.clear();
	for (int i = 0; i < a.size(); i++){
		ve.push_back(a[i]);
	}
	for (int i = 0; i < b.size(); i++){
		ve.push_back(b[i]);
	}
	for (int i = 0; i < c.size(); i++){
		ve.push_back(c[i]);
	}

	vector<int> aux;
	for (int i = 0; i < ve.size(); i++){
		aux.push_back(ve[i]);
		vi[i]=true;
		if(dat(aux)<0){
			cout<<aux.size()<<" "<<aux[aux.size()-1];
			for (int i = aux.size()-2; i >=0 ; i--){
				cout<<" "<<aux[i];
			}
			cout<<endl;
			aux.clear();
			break;
		}
	}
	for (int i = 0; i < ve.size(); i++){
		if(!vi[i]){
			aux.push_back(ve[i]);
			vi[i]=true;
			if(dat(aux)>0){
				cout<<aux.size()<<" "<<aux[aux.size()-1];
				for (int i = aux.size()-2; i >=0 ; i--){
					cout<<" "<<aux[i];
				}
				cout<<endl;
				aux.clear();
				break;
			}
		}
	}

	for (int i = 0; i < ve.size(); i++){
		if(!vi[i]){
			aux.push_back(ve[i]);
			vi[i]=true;
			if(dat(aux)==0){
				cout<<aux.size()<<" "<<aux[aux.size()-1];
				for (int i = aux.size()-2; i >=0 ; i--){
					cout<<" "<<aux[i];
				}
				cout<<endl;
				aux.clear();
				break;
			}
		}
	}
	return 0;
}
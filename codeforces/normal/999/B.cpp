#include <cstdio>
#include <vector>
#include <iostream>
using namespace std;

int main(){
	int n;
	string cad,aux;
	cin>>n>>cad;
	vector<int> vec;
	for(int i = 1; i <=n; i++ ){
		if(n%i == 0){
			vec.push_back(i);
		}
	}


	int ini = 0;
	int end;
	for(int i = 0; i < vec.size(); i++ ){
		end = vec[i] - 1;
		for(int j = ini; j < end; j++){
			swap(cad[j],cad[end]);
			end--;
		}
	}

	cout<<cad<<endl;
	return 0;
}
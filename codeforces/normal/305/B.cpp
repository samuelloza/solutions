#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

vector<long long int> sol(int n,vector <long long int> d){
	long long int i=d.size()-1;
	vector<long long int> vec;
	if(n==1){
		vec.push_back(1);
		vec.push_back(d[i]);
		return vec;
	}else{
		long long int num=1,den=d[i-1],r=d[i-1],ant=0;
		long long int g=1,g2=0;
		long long int ad=0;
			ant=d[i]; 		   // 4 abajo
			while(i>0){
			den=((d[i-1]*ant)+g); // 9 su
			//
			ad=ant;   //4
			ant=den;  //9
			g=ad;
			den=ad;  //4
			i--;
		}

		long long int t = __gcd(den,ant);
		vec.push_back(den/t);
		vec.push_back(ant/t);
		return vec;
	}
}
int main(){
	long long int p,q,aux;
	int n;
	cin>>p>>q>>n;
	vector<long long int> d;
	for(int i=0;i<n;i++){
		cin>>aux;
		d.push_back(aux);
	}
	vector <long long int> v= sol(n,d);
	long long int tt = __gcd(q,p);
	if(v[0]==q/tt && v[1]==p/tt)
		cout<<"YES"<<endl;
	else cout<<"NO"<<endl;


	return 0;
}
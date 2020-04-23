#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <stack>
#include <queue>
#include <deque>
using namespace std;

int main(){
	string cad;
	while(cin>>cad){
		deque<char> a;
		for (int i = 0; i < cad.size(); i++){
			if(a.empty()){
				a.push_front(cad[i]);
			}else{
				char x=a.front();
				if(x==cad[i]){
					a.pop_front();
				}
				else{
					a.push_front(cad[i]);
				}
			}
		}
		while(!a.empty()){
			cout<<a.back();
			a.pop_back();
		}
		
	}
	return 0;
}
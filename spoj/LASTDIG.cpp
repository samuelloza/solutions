#include <iostream>
#include <cstdio>

#define 	sc scanf
using namespace std;
//unordered_map<int,int> unmap;
int digits[][4] = {
	{0,0,0,0},
	{1,1,1,1},
	{2,4,8,6},
	{3,9,7,1},
	{4,6,4,6},
	{5,5,5,5},
	{6,6,6,6},
	{7,9,3,1},
	{8,4,2,6},
	{9,1,9,1}
};

int lastdigit(long a, long b) {
	if(b==0) return 1;
	int base = a % 10;
	return digits[base][(b-1)%4];
}

int main(){
	int k;
	sc("%d",&k);
	int a,b;
	while(k--){
		sc("%d %d",&a,&b);
		printf("%d\n",lastdigit(a,b) );
	}
	return 0;

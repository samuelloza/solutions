#include <cstdio>
#include <iostream>
#include <map>
using namespace std;

int main() {
	map<int, int> ans;
	for (int i = 0; ; i++) {
		int ways = (i*i + 3*i + 2)/2;
		if (ways > 50000000)
			break;
		ans[ways] = i;
	}
	
	
	int test, n;
	scanf("%d", &test);
	while (test--) {
		scanf("%d", &n);
		if (ans[n] != 0){
			printf("%d\n", ans[n]);
		}else{
			printf("No solution\n");
		}
	}
	return 0;
}
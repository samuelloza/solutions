#include <iostream>

using namespace std;

int main()
{
		int li;
		cin>>li;
		for (int i = 0; i < li; i++) {
			int li2;
			cin>>li2;
			int sum = 0;
			for (int j = 0; j < li2; j++) {
                    int num2;
            cin>>num2;
				sum =num2 + sum;
			}
			if (sum % li2 == 0) {
				cout<<("YES")<<endl;
			} else {
				cout<<("NO")<<endl;
			}
		}
    return 0;
}

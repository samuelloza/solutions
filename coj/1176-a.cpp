#include <iostream>

using namespace std;

int main()
{
    int x;
    cin>>x;
		int vec[1000];

		while (x >= 0) {
			int g=0;
			while(x!=0) {
				vec[g]=(int)x%3;
				x=x/3;
				g++;
			}
			for (int i = g-1; i>=0; i--) {
				cout<<(vec[i]);
			}
			 cin>>x;
			 cout<<endl;

		}
    return 0;
}
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;
/*Encuentra la distancia de edicion entre 2 cadenas*/
/*
El numero minimos de cambios para transformar la cadena s1 en la cadena s2, con los siguientes cambios:

- Elimina una letra de una de las cadenas
- Inserta una letra en una de las cadenas
- Reemplaza una letra en una de las cadenas
*/
int levenshtein(const string &s1, const string &s2)
{
	int N1 = s1.size();
	int N2 = s2.size();
	int i, j;
	vector<int> T(N2+1);

	for ( i = 0; i <= N2; i++  )
		T[i] = i;

	for ( i = 0; i < N1; i++  ) {
		T[0] = i+1;
		int corner = i;
		for ( j = 0; j < N2; j++  ) {
			int upper = T[j+1];
			if ( s1[i] == s2[j]  )
				T[j+1] = corner;
			else
				T[j+1] = min(T[j], min(upper, corner)) + 1;
			corner = upper;

		}

	}
	return T[N2];
}
int main(){
	int casos;
	cin >> casos;
	string a, b;
	while(casos--){
		cin >> a >> b;
		if(a.size() > b.size())
			swap(a,b);
		cout << levenshtein(a,b) << endl;
	}
	return 0;

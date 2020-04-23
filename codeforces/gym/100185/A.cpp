#include <cstdio>
#include <cstdlib>
#include <map>
#include <vector>
#include <iostream>

using namespace std;

int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	getchar();
	vector<string> vec;
	string cad;
	while(a--){
		cin>>cad;
		vec.push_back(cad);
	}
	vector<string> vec2;
	while(b--){
		cin>>cad;
		vec2.push_back(cad);
	}

	bool sw=false,ff=true;
	int g=0;
	for (int i = 0; i < vec2.size(); i++){//palabras
		sw=false;
		g=0;

		for (int j = 0; j < vec.size()&& !sw; j++){//dicc
			g=0;
			for(int k=0;k<vec[j].size()&&!sw;k++){//recorre dic
				if(tolower(vec2[i][g])==tolower(vec[j][k])){
					g++;
				}
				if(g==3){
					sw=true;
					cout<<vec[j]<<endl;
					g=10;
					break;
				}
			}
		}
		if(!sw)
			cout<<"No valid word"<<endl;

	}
	return 0;
}
/*
criterio hesiano
multi lagrange
integralesm doble
calculo area
cambio de variable
coordenadas polares
integra triples
caoordenalda cilindricas
integral de linea teoriam dde green*/
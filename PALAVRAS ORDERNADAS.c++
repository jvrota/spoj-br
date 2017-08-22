#include<iostream>
#include<ctype.h>
#include<string.h>
using namespace std;
int main(void){
	int aux[42],fator,numero;
	char palavra[42];	
	char ordenada='O';
	cin >>numero;
	for(int u=1;u<=numero;u++){
		cin >> palavra;
		fator=strlen(palavra);		
		for(int i=0;i<fator;i++){
			aux[i]=palavra[i];			
			if(isupper(palavra[i])){
				aux[i]-=65;	
			}else if(islower(palavra[i])){
				aux[i]-=97;
			}
		}
		for(int i=0;i<fator;i++){
			if(i+1<fator){
				if(aux[i]>=aux[i+1])ordenada='N';
			}
		}
	cout <<palavra<<": "<<ordenada<<endl;
	ordenada='O';
	}
	return 0;
}

//74 111 227 111 32 86 105 99 116 111 114 32 82 111 100 114 105 103 117 101 115 32 82 111 116 97 110 100 97 110 111 10 83 105 115 116 101 109 97 115 32 100 101 32 73 110 102 111 114 109 97 231 227 111 32 50 48 49 55 46 49




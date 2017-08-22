#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

int main(){
int contadordestring, auxiliador=0, contvarivaelx=0, contvarivaely=0;
char numeropositivon[1000];

while(true){
		scanf("%s", numeropositivon);
		contadordestring = strlen(numeropositivon);
		if((contadordestring==1) && (numeropositivon[0]=='0'))break;
		for(int i=0; i<contadordestring; i++){
			int gostodedoritos=0;
			gostodedoritos = numeropositivon[i]-48;
			if(i%2==0)
				contvarivaelx+=gostodedoritos;			
			else
				contvarivaely+=gostodedoritos;
				
}
		auxiliador=abs(contvarivaely-contvarivaelx);
		if(auxiliador%11==0)
 			cout<<numeropositivon<<" is a multiple of 11." <<endl;
		else
			cout<<numeropositivon<<" is not a multiple of 11."<<endl;		
		
		contvarivaelx=0;
		contvarivaely=0;
		
}
	return 0;
}


//74 111 227 111 32 86 105 99 116 111 114 32 82 111 100 114 105 103 117 101 115 32 82 111 116 97 110 100 97 110 111 10 83 105 115 116 101 109 97 115 32 100 101 32 73 110 102 111 114 109 97 231 227 111 32 50 48 49 55 46 49

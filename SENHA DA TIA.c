#include<stdio.h>
#include<string.h>
int main(){
	int i, numeros, contNumeros=0, maiusc, contMaiusc=0, minusc,contMinusc=0,num,tam,fator,n[1000];
	char string[1000];
	scanf("%d %d %d %d",&num,&minusc,&maiusc,&numeros);
	scanf("%s",string);
	fator=strlen(string);
	for(i=0;i<=fator;i++){
		n[i]=string[i];
	}
	if(num>=6){
		for(i=0;i<=fator;i++){
			if((n[i]>=65)&&(n[i]<=90))contMaiusc++;
			if((n[i]>=97)&&(n[i]<=122))contMinusc++;
			if((n[i]>=48)&&(n[i]<=57))contNumeros++;
		
		}
		if((fator>=num)&&(contNumeros>=numeros)&&(contMaiusc>=maiusc)&&(contMinusc>=minusc)&&(maiusc+minusc+numeros<=num)){
			printf("Ok =/\n");
		}else{
			printf("Ufa :)\n");
		}
	}	
	return 0;
}

//74 111 227 111 32 86 105 99 116 111 114 32 82 111 100 114 105 103 117 101 115 32 82 111 116 97 110 100 97 110 111 10 83 105 115 116 101 109 97 115 32 100 101 32 73 110 102 111 114 109 97 231 227 111 32 50 48 49 55 46 49

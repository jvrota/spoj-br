#include <stdio.h>
int main(){
	int N,P,R,X;
	while(1){
		scanf("%d%d", &N,&P);
		if(N==0&&P==0){
			break;
		}
		R=N/P;
		if(N%P!=0){
			R++;
		}
		if(R<=6){
			printf("Poodle\n");
		}
		else if(R<=20){
			printf("P");
			X=0;
			while (X<(R-4)){
				printf("o");
				X++;
			}
			printf("dle\n");
		}
		else if(R>=20){
			printf("Poooooooooooooooodle\n");
		}
	}
	return 0;
}

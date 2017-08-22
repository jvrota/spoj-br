#include <stdio.h>
int main (){
int A,N,F,brilho,V=0;
		scanf("%d",&A,&N);
for(F=0;F<N;F++){
		scanf("%d",&brilho);
	if(brilho*A>=40000000){
	V+=1;}
}
		printf("%d",V);

return 0;
}

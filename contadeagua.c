#include <stdio.h>
int main () {
	int A;
	scanf("%d", &A);
	if (A == 0)
		printf("E");
	else if	(A>=1&&A<=35)
		printf("D");
	else if	(A>=36&&A<=60)
		printf("C");
	else if	(A>=61&&A<=85)
		printf("B");
	else if	(A>=86&&A<=100)
		printf("A");	
			
return 0;
}

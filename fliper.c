#include <stdio.h>
int main () {
int R,P;
	scanf("%d%d", &P,&R);
	if (P == 0)
		printf("C\n");
	else if	(P == 1&&R == 1)
		printf("A\n");
	else if	(P == 1&&R == 0)
		printf("B\n");
return 0;
}

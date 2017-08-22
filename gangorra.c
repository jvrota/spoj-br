#include <stdio.h>
int main () {
	int P1,C1,P2,C2;
	scanf("%d%d%d%d", &P1,&C1,&P2,&C2);
	int e,d;
	e = P1*C1;
	d = P2*C2;
	if (e == d)
		printf("0");
	else if
		(e > d)
		printf("-1");
	else
		printf("1");
return 0;
}


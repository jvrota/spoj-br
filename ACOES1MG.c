#include <stdio.h>

int count(int capitalinicial, int valormaximoparacompra) {
	if (capitalinicial <= valormaximoparacompra) 
	return 1;
	
	if (capitalinicial > valormaximoparacompra){
		if (capitalinicial%2 == 0)
			return 2*count(capitalinicial/2, valormaximoparacompra);

		else 
			return count(capitalinicial/2, valormaximoparacompra) + count(capitalinicial/2 + 1, valormaximoparacompra);
	}
}

int main(){
	int capitalinicial, valormaximoparacompra;
	while (1) {
		scanf("%d %d", &capitalinicial, &valormaximoparacompra);
			if (capitalinicial == 0 && valormaximoparacompra == 0) 
			break;
		
		printf("%d\n", count(capitalinicial, valormaximoparacompra));
	}
return 0;
}

//74 111 227 111 32 86 105 99 116 111 114 32 82 111 100 114 105 103 117 101 115 32 82 111 116 97 110 100 97 110 111 10 83 105 115 116 101 109 97 115 32 100 101 32 73 110 102 111 114 109 97 231 227 111 32 50 48 49 55 46 49



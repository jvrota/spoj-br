#include <stdio.h>
#include <string.h>
int main(){
int i=0;
	char telefone[20];
	char ch;

while ((ch = getchar()) != '\n'){
	
	if (ch == '-') telefone[i] = '-';
	else if (ch>= 48 && ch <= 57) telefone[i] = ch;
	else if (ch>= 65 && ch <= 67) telefone[i] = '2';
	else if (ch>= 68 && ch <= 70) telefone[i] = '3';
	else if (ch>= 71 && ch <= 73) telefone[i] = '4';
	else if (ch>= 74 && ch <= 76) telefone[i] = '5';
	else if (ch>= 77 && ch <= 79) telefone[i] = '6';
	else if (ch>= 80 && ch <= 83) telefone[i] = '7';
	else if (ch>= 84 && ch <= 86) telefone[i] = '8';
	else if (ch>= 87 && ch <= 90) telefone[i] = '9';
	
	i++;
}
telefone[i] = '\0';

printf("%s", telefone);

return 0;	
}

//74 111 227 111 32 86 105 99 116 111 114 32 82 111 100 114 105 103 117 101 115 32 82 111 116 97 110 100 97 110 111 10 83 105 115 116 101 109 97 115 32 100 101 32 73 110 102 111 114 109 97 231 227 111 32 50 48 49 55 46 49



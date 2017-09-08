#include <iostream>
#include <cstring>
using namespace std;

int conta(char s[1000] , int grau)
{
    int add = 0;
	for (int i = 0; i < strlen(s); ++i)  //retorna o número de caracteres contidos na string
		add += s[i] - 48;

	if(add < 9)
		return -1;

	if(add > 9)
	{
		char auxiliar[1000] = {};
		sprintf(auxiliar, "%d", add);	
		return conta(auxiliar, grau+1);
	}

	return grau;
}

int main()
{
    char arquivo[1000] = {};
	cin >> arquivo; //entrada

	if(arquivo[0] == '0') //fim da entrada
		return 0;

	int grau = conta(arquivo, 1);

	if(grau == -1)
		cout << arquivo << " is not a multiple of 9." << endl; //caso o valor não seja múltiplo de 9
	else
		cout << arquivo << " is a multiple of 9 and has 9-degree " << grau << "." <<endl;
	
	main();
	return 0;
}


//74 111 227 111 32 86 105 99 116 111 114 32 82 111 100 114 105 103 117 101 115 32 82 111 116 97 110 100 97 110 111 10 83 105 115 116 101 109 97 115 32 100 101 32 73 110 102 111 114 109 97 231 227 111 32 50 48 49 55 46 49



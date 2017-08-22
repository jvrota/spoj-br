#include <stdlib.h>
#include <stdio.h>
#define TAMANHOMAXN 1000

int main() {
  char txtaleatorio[TAMANHOMAXN+2];
  char char1, char2;
  int j, q, qc, n, flag;
  float porcentagem;
  char1 = getchar(); getchar();
  
  j=0;
  while ( (char2 = getchar()) != '\n' ) txtaleatorio[j++] = char2;  
  txtaleatorio[j] = '\0'; n=j;

  for (q=1, qc=0, flag=1, j=0; j<n; j++){
    if ( txtaleatorio[j] == ' ' ){
      q++; flag = 1;
    }
    else if (txtaleatorio[j] == char1 && flag ){
	qc++; flag = 0;
      }
    
  } 

  porcentagem = ((float)qc/(float)q)*100.0;
  printf("%.1f\n",porcentagem);

  return 0;
}

//74 111 227 111 32 86 105 99 116 111 114 32 82 111 100 114 105 103 117 101 115 32 82 111 116 97 110 100 97 110 111 10 83 105 115 116 101 109 97 115 32 100 101 32 73 110 102 111 114 109 97 231 227 111 32 50 48 49 55 46 49


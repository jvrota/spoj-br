#include <stdio.h>
#define NUM_CARTAS 5

int main() {
  int i, v[NUM_CARTAS], flag;

  for ( i = 0; i < NUM_CARTAS; i++ ) scanf("%d",&v[i]);

  /* crescente */
  for ( flag = 1, i = 0; i < NUM_CARTAS-1; i++ )
    if ( v[i] > v[i+1] ) flag = 0;  
  if ( flag ){
    printf("C\n"); 
    return 0;
  }
  
  /* decrescente */
  for ( flag = 1, i = 0; i < NUM_CARTAS-1; i++ )
    if ( v[i] < v[i+1] ) flag = 0;  
  if ( flag ){
    printf("D\n"); 
    return 0;
  }
  
  /* c.c. */
  printf("N\n");
  return 0;
}

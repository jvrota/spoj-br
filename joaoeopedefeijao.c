#include <stdio.h>
 


int main() {
int i, seq[] = {1, 9, 45, 55, 99, 297, 703, 999 , 2223, 2728, 4879, 4950, 5050, 5292, 7272, 7777, 9999, 17344, 22222, 38962, 77778, 82656, 95121, 99999, 142857, 148149, 181819, 187110, 208495, 318682, 329967, 351352, 356643, 390313, 461539, 466830, 499500, 500500, 533170};
 int inArray(int array[], int element) 
    for (i = 0; i < 38; i++) 
        if (array[i] == element) 
        	
 
    for( int i = 1; ; i++ ){
       
        int n;
 
        scanf("%d", &n);
 
        if( !n )
            break;
 
        if( inArray( seq, n ) )
            printf("%d: S\n", n);
        else
            printf("%d: N\n", n);
 
    }
 
    return 0;
 
}

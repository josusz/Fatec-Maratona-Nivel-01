#include <stdio.h>
 
int main() {
 
	int i, n, val_par, calc;
	
	scanf("%i", &n);
	
	for(i=1;i<=n;i++){
		val_par = i;
		if(val_par % 2 == 0){
			calc = val_par * val_par;
			printf("%i^2 = %i\n", val_par, calc);
		}
	}
 
    return 0;
}

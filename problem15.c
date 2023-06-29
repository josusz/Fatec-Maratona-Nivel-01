#include <stdio.h>
 
int main() {
 
	int i, n, val_par;
	
	scanf("%i", &n);
	
	for(i=1;i<=10000;i++){
		val_par = i;
		if(val_par % n == 2){
			printf("%i\n", val_par);
		}
	}
 
    return 0;
}

#include <stdio.h>
 
int main() {
 
	int i, x, val_impar;
	
	scanf("%i", &x);
	
	if(x > 0 && x < 1001){
		for(i=0;i<=x;i++){
			val_impar = i;
			if(val_impar % 2 != 0){
				printf("%i\n", val_impar);
			}
		}
	}
	 
    return 0;
}

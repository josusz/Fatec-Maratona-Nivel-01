#include <stdio.h>
 
int main() {
 
	int i, x, y, val_impar, soma_impar=0;
	
	scanf("%i", &x);
	scanf("%i", &y);
	
	if(x > y){
		for(i=y+1;i<x;i++){
			val_impar = i;
			if(val_impar % 2 != 0){
				soma_impar += val_impar;
			}
		}
	}
	else{
		for(i=x+1;i<y;i++){
			val_impar = i;
			if(val_impar % 2 != 0){
				soma_impar += val_impar;
			}
		}
	}
	printf("%i\n", soma_impar);
 
    return 0;
}

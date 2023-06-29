#include <stdio.h>
 
int main() {
 
	int i, n;
	float valor1, valor2, valor3, media_pond;
	
	scanf("%i", &n);
	
	for(i=0;i<n;i++){
		scanf("%f", &valor1);
		scanf("%f", &valor2);
		scanf("%f", &valor3);
		
		media_pond = ((valor1 * 2) + (valor2 * 3) + (valor3 * 5))/10;
		printf("%.1f\n", media_pond);
	}
 
    return 0;
}

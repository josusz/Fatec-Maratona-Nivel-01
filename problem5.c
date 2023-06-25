#include <stdio.h>
 
int main() {
 
	int X;
	float Y, GASTO;
	
	scanf("%i", &X);
	scanf("%f", &Y);
	
	GASTO = X / Y;
	
	printf("%.3f km/l\n", GASTO);
 
    return 0;
}

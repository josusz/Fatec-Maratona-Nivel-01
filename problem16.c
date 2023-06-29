#include <stdio.h>
 
int main() {
 
	int i, n, tabuada;
	
	scanf("%i", &n);
	
	for(i=0;i<10;i++){
		tabuada = (i+1) * n;
		printf("%i x %i = %i\n", i+1, n, tabuada); 
	}
 
    return 0;
}

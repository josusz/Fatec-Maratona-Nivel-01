#include <stdio.h>
 
int main() {
 
	int i=1, j;
	
	for(j=60;j>=0;j--){
		printf("I=%i J=%i\n", i, j);
		j = j - 4;
		i += 3;
	}
 
    return 0;
}

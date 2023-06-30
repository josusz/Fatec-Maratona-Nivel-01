#include <stdio.h>
 
int main() {

	int vetor, i=1, j=7, repet;
	
	for(vetor=1;i<=9;vetor++){
		for(repet=0;repet<3;repet++){
			printf("I=%i J=%i\n", i, j);
			j -= 1;
		}
		i += 2;
		j = 7;
	}
 
    return 0;
}

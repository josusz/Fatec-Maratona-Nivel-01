#include <stdio.h>
 
int main() {
 
	int i, num, cont_num = 0;
	
	for(i=0;i<5;i++){
		scanf("%i", &num);
		
		if(num % 2 == 0){
			cont_num++;
		}
	}
	
	printf("%i valores pares\n", cont_num);
 
    return 0;
}

#include <stdio.h>
 
int main() {
 
	int m=1, n=1, sum;
	
	while(m > 0 || n > 0){
		scanf("%i", &m);
		if(m <= 0){
			break;
		}
		scanf("%i", &n);
		if(n <= 0){
			break;
		}
		
		if(m > n){
			sum = 0;
			for(n=n;n<=m;n++){
				printf("%i ", n);
				sum += n;
			}
			printf("Sum=%i\n", sum);
		}
		else{
			sum = 0;
			for(m=m;m<=n;m++){
				printf("%i ", m);
				sum += m;
			}
			printf("Sum=%i\n", sum);
		}		
	}
 
    return 0;
}

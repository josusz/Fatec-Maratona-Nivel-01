#include <stdio.h>
 
int main() {
 
	float i, num, soma_num = 0, cont_positivos = 0, media;
	
	for(i=0;i<6;i++){
		scanf("%f", &num);
		
		if(num > 0){
			soma_num += num;
			cont_positivos++;
		}
	}
	
	media = soma_num / cont_positivos;
	
	printf("%.0f valores positivos\n", cont_positivos);
	printf("%.1f\n", media);
 
    return 0;
}

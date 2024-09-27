#include<stdio.h>
#include"remove.h"

int main() {
	int i = 0, j, aux = 0, n = 0, b = 0, temp = 0;
	double imprimir;
	int vchar[51];
	
	printf("Digite o numero de mensagens: ");
	scanf("%d", &n);
	
	while(i < n) {
		aux = 0;
		printf("Digite o b: ");
		scanf("%d", &b);
		printf("Digite a cifra: ");
		for(j = 0; j < 50; j++) {
			scanf("%2x", &vchar[j]);
		} for(j = 0; j < 50; j++) {
			imprimir = func_val( (j + 1), b);
			if(vchar[j] == 00) {
				temp = j; 
				break;
			}
			vchar[aux] = vchar[j];
			if(aux < j) {
				vchar[j] = 0;
			}
			if(imprimir != 0){
				aux++;
				continue;
			}
		}
		for(j = 0; j < temp; j++) {
			printf("%c", vchar[j]);
		}
		printf("\n");
		i++;
	}
	
	
	
	
	
	return 0;
}

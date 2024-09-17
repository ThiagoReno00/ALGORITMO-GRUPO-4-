#include<stdio.h>

int main() {
	float N1 = 0, N2 = 0, PPD = 0, EU = 0, N3 = 0, NotaFinal = 0;
	int EUflag = 0, N3flag = 0;
	
	do {
		printf("Digite a nota da N1: ");
		scanf("%f", &N1);
		
		if (N1 < 0 || N1 > 4.5) {
			printf("CODIGO DE ERRO 3\n");
		}
	} while (N1 < 0 || N1 > 4.5);
	
	
	do {
		printf("Digite a nota da N2: ");
		scanf("%f", &N2);
		
		if (N2 < 0 || N2 > 4.5) {
			printf("CODIGO DE ERRO 3\n");
		}
	} while (N2 < 0 || N2 > 4.5);
	
	do {
		printf("Digite a nota da PPD: ");
		scanf("%f", &PPD);
		
		if (PPD < 0 || PPD > 1.0) {
			printf("CODIGO DE ERRO 3\n");
		}
	} while (PPD < 0 || PPD > 1.0);
	
	printf("O estudante realizou o exame unificado? (0 para nao e 1 para sim): ");
	scanf(" %d", &EUflag);
	
	if(EUflag == 1) {
		do {
			printf("Digite a nota do exame unificado: ");
			scanf("%f", &EU);
			
			if (EU < 0 || EU > 1.0) {
				printf("CODIGO DE ERRO 3\n");
			}
		} while (EU < 0 || EU > 1.0);
	}
	
	printf("O estudante realizou a N3? (0 para nao e 1 para sim): ");
	scanf(" %d", &N3flag);
	
	if(N3flag == 1) {
		do {
			printf("Digite a nota da N3: ");
			scanf("%f", &N3);
			
			if (N3 < 0 || N3 > 4.5) {
				printf("CODIGO DE ERRO 3\n");
			}
		} while (N3 < 0 || N3 > 4.5);
	}
	
	if(N3 > N1){
		N1 = N3;
	}else if(N3 > N2) {
		N2 = N3;
	} else {}
	
	NotaFinal = (N1 + N2 + PPD + EU);
	
	
	if(NotaFinal > 7 && NotaFinal < 10){
		printf("A nota final do estudante foi: %.2f\n", NotaFinal);
		printf("APROVADO");
	}else if(NotaFinal > 10) {
		printf("A nota final do estudante foi: 10.0\n");
		printf("APROVADO");
	}else{
		printf("A nota final do estudante foi: %.2f\n", NotaFinal);
		printf("REPROVADO");
	}
	

	
	return 0;
}

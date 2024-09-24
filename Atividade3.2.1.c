#include <stdio.h>
#include <limits.h>

int main() {
	printf("Limites dos tipos de variaveis:\n");
	
	printf("\nchar:\n");
	printf("Minimo: %d\n", CHAR_MIN);
	printf("Maximo: %d\n", CHAR_MAX);
	
	printf("\nshort int:\n");
	printf("Minimo: %d\n", SHRT_MIN);
	printf("Maximo: %d\n", SHRT_MAX);
	
	printf("\nint:\n");
	printf("Minimo: %d\n", INT_MIN);
	printf("Maximo: %d\n", INT_MAX);
	

	printf("\nunsigned int:\n");
	printf("Maximo: %u\n", UINT_MAX);
	

	printf("\nlong int:\n");
	printf("Minimo: %ld\n", LONG_MIN);
	printf("Maximo: %ld\n", LONG_MAX);
	

	printf("\nunsigned long int:\n");
	printf("Maximo: %lu\n", ULONG_MAX);
	

	printf("\nlong long int:\n");
	printf("Minimo: %lld\n", LLONG_MIN);
	printf("Maximo: %lld\n", LLONG_MAX);
	

	printf("\nunsigned long long int:\n");
	printf("Maximo: %llu\n", ULLONG_MAX);
	
	return 0;
}


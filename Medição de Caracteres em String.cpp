#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "");
	char palavra[] =  "PROGRAMACAO";
	printf("Tamanho : %zu\n", strlen(palavra));
	return 0;
}

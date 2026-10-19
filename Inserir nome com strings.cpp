#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	char nome[50];
	printf("Nome completo: ");
	if (fgets(nome, sizeof(nome),stdin) == NULL){
		return 1;
	}
	
	nome[strcspn(nome, "\n")] = '\0';
	printf("Nome: %s\n", nome);
	return 0;	
}

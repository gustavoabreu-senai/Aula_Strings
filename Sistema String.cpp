#include <stdio.h>
#include <locale.h>
#include <string.h>

#define TOTAL 5
#define TAM 40

int main(){
	char equipamentos[TOTAL][TAM];
	char busca[TAM];
	
	int qtd = 0;
	int opc;
	int encontrado;
	
	do{
			printf("\n=== CADASTRO DE EQUIPEAMENTOS===\n");
			printf("1 - Cadastrar\n");
			printf("2 - Listar\n");
			printf("3 - Pesquisar\n");
			printf("0 - Sair\n");
		
		if (scanf("%d", &opc) != 1){
			printf("Entrada invalida");
			return 1;
		}
		
		int ch;
		while ((ch = getchar()) != '\n' && ch != EOF){
		}
		
		switch (opc){
			
			case 1:
			if (qtd < TOTAL){
					printf("Nome do equipamento: ");
					
					if(fgets(equipamentos[qtd], TAM,stdin) == NULL){
						return 1;
					}
					
					equipamentos [qtd][strcspn(equipamentos[qtd],"\n")] = '\0';
					qtd++;
					
				} else {
					printf("Cadastro cheio!\n");
			}
			break;
			
			case 2:
				printf("\nEquipamentos cadastrados!\n");
				
				for(int i = 0; i < qtd; i++){
					printf("%d - %s\n", i + 1, equipamentos[i]);
				}
				break;
				
				
			case 3:
				printf("\n Nome para pesquisar: ");
				
				if(fgets(busca, TAM, stdin) == NULL){
					return 1;
				}
				
				busca[strcspn(busca, "\n")] = '\0';
				encontrado = 0;
				
				for (int i = 0; i < qtd; i++){
					if (strcmp(equipamentos[i],busca) == 0){
						encontrado = 1;
						printf("Equipamentos encontrado!\n");
						break;
					}
				}
				
				if(!encontrado){
					printf("Equipamento não encontrado");
				}
				break;
				
			case 0:
				printf("Encontrado o sistema...\n");
				break;
				
			default:
				printf("Opção inválida!\n");
		}
	} while (opc != 0);
	
	return 0;
}

#include <stdio.h>
int main(){
    //variaveis que vão receber os atributos das cidades
    char codigo[4];
    char nome [50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;

    //cadastrar cartas
    printf("=== Cadastro de Carta ===\n");
    printf("Digite o código da cidade (ex: A01): ");
    scanf (" %s", codigo);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome); //captura nomes com espaço 
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao);
    printf("Digite a área da cidade: ");
    scanf(" %f", &area);
    printf ("Digite o PIB da cidade : ");
    scanf (" %f", &pib);
    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &pontos_turisticos);

    //exibe as cartas
    printf("\n=== Carta Cadastrada ===\n");
    printf("Código: %s\n", codigo);
    printf("Nome: %s\n", nome);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$ %.2f bilhões\n", pib);
    printf("Pontos Turísticos: %d\n", pontos_turisticos);
    
     return 0;


}


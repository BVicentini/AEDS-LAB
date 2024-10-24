#include <stdio.h>
#include <stdlib.h>
#include "contabancaria.h"
#include "cliente.h"
#include "endereco.h"
int main(){
        char nome[50];
        char cpf[15];
        char tipo[8];
        char rua[50];
        char bairro[50];
        char cep[8];
        int ano;
        int r;
        int num;
        ContaBancaria conta1;
        Cliente cliente1;
        Endereco endereco1;
        Inicializa(&conta1, 918556, 300.00);
        printf("\n Antes da movimentação:\n ");
        Imprime(conta1);
        Deposito(&conta1, 500.00);
        Saque(&conta1, 70.00);
        printf("\nDepois da movimentação: \n");
        Imprime(conta1);
        printf("Digite o nome: \n");
        scanf("%s", &nome);
        printf("Digite o cpf: \n");
        scanf("%s", &cpf);
        printf("Digite o tipo da conta: \n");
        scanf("%s", &tipo);
        printf("Digite o ano de abertura da conta: \n");
        scanf("%d", &ano);
        printf("Digite a rua: \n");
        scanf("%s", &rua);
        printf("Digite o bairro: \n");
        scanf("%s", &bairro);
        printf("Digite o numero: \n");
        scanf("%d", &num);
        printf("Digite o CEP: \n");
        scanf("%s", &cep);
        
        EscreverNome(&cliente1, nome);
        EscreverCPF(&cliente1, cpf);
        Imprimir(cliente1);
        EscreverRua(&endereco1, rua);
        EscreverBairro(&endereco1, bairro);
        EscreverNum(&endereco1, num);
        EscreverCep(&endereco1, cep);
        ImprimirEnd(endereco1);
        EscreverTipo(&conta1, tipo);
        r =EscreverAno(&conta1, ano);
        if (r=1){
            printf("Elegivel para credito");
        }else{
            printf("Nao elegivel");
        }
return 0;
}
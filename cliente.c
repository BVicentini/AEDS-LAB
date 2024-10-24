#include <stdio.h>
#include "cliente.h"
#include <string.h>


void EscreverNome(Cliente* client, char nome[50]){
    strcpy(client->nome, nome);
}
void EscreverCPF(Cliente* client, char cpf[50]){
    strcpy(client->cpf, cpf);
}
void Imprimir(Cliente client){
    printf("Nome: %s\n", client.nome);
    printf("\nCPF: %s\n", client.cpf);
}
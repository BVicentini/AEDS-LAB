#include <stdio.h>
#include "endereco.h"
#include <string.h>

void EscreverRua(Endereco* endereco, char rua[50]){
    strcpy(endereco->rua, rua);
}
void EscreverBairro(Endereco* endereco, char bairro[50]){
    strcpy(endereco->bairro, bairro);
}
void EscreverCep(Endereco* endereco, char cep[8]){
    strcpy(endereco->cep, cep);
}
void EscreverNum(Endereco* endereco, int num){
    endereco->num=num;
}
void ImprimirEnd(Endereco endereco){
    printf("Rua: %s\n", endereco.rua);
    printf("Bairro: %s\n", endereco.bairro);
    printf("Numero: %d\n", endereco.num);
    printf("CEP: %s \n", endereco.cep);
}
#include <stdio.h>
#include "contabancaria.h"
#include <string.h>

void Inicializa(ContaBancaria* conta, int numero, double saldo){
    conta->numero = numero;
    conta->saldo;
}
void Deposito(ContaBancaria* conta, double valor){
    conta->saldo+=valor;
}
void Saque(ContaBancaria* conta, double valor){
    conta->saldo-=valor;
}
void Imprime(ContaBancaria conta){
    printf("Numero: %d\n", conta.numero);
    printf("Saldo: %d\n", conta.saldo);
}

void EscreverTipo(ContaBancaria* conta, char tipo[8]){
    strcpy(conta->tipo, tipo);
}
int EscreverAno(ContaBancaria* conta, int ano){
    conta->ano=ano;
    if(conta->ano <=2019){
        return 1;
    }else{
    return 0;
    }
}
typedef struct{
    char nome[50];
    char cpf[15];
} Cliente;

void EscreverNome(Cliente* client, char nome[50]);
void EscreverCPF(Cliente* client, char cpf[50]);
void Imprimir(Cliente client);

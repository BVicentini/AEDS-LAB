typedef struct{
    char rua[50];
    char bairro[50];
    char cep[8];
    int num;
}   Endereco;

void EscreverRua(Endereco* endereco, char rua[50]);
void EscreverBairro(Endereco* endereco, char bairro[50]);
void EscreverCep(Endereco* endereco, char cep[8]);
void EscreverNum(Endereco* endereco, int num);
void ImprimirEnd(Endereco endereco);
typedef struct{
    int numero;
    double saldo;
    char tipo[8];
    int ano;
} ContaBancaria;

void Inicializa(ContaBancaria* conta, int numero, double saldo);
void EscreverTipo(ContaBancaria* conta, char tipo[8]);
int EscreverAno(ContaBancaria* conta, int ano);
void Deposito(ContaBancaria* conta, double valor);
void Saque(ContaBancaria* conta, double valor);
void Imprime(ContaBancaria conta);

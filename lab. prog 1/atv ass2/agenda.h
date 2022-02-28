struct _tel
{
    int DDD;
    long int num;
};
struct _aniver
{
    int dia;
    int mes;
    int ano;
};
typedef struct _agenda
{
    char nome[32];
    char email[32];
    struct _tel telefone;
    struct _aniver aniversario;
    char obs[64];
}cadastro;
cadastro agenda[10];
int i;
void cadastrar();
void buscaNome();
void buscaMes();
void imprimeAgenda();
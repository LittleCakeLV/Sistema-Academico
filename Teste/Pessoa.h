using namespace std;

class Pessoa
{
protected:
    int id;
    int dia;
    int mes;
    int ano;
    int idade;
    char Nome[30];


public:
    Pessoa(int diaI, int mesI, int anoI, const char* NomeI = "");
    Pessoa();
    void Inicializa(int diaI, int mesI, int anoI, const char* NomeI = "");
    void CalculoIdade(int Dia_atual, int Mes_Atual, int Ano_atual);
    void InformaIdade();


};
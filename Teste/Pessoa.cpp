#include "Pessoa.h"
#include <string.h>
#include <iostream>

Pessoa::Pessoa(int diaI, int mesI, int anoI, const char* NomeI)
{
    Inicializa(diaI, mesI, anoI, NomeI);
}
Pessoa::Pessoa()
{
    Inicializa(0, 0, 0);
}
void Pessoa::Inicializa(int diaI, int mesI, int anoI, const char* NomeI)
{
    dia = diaI;
    mes = mesI;
    ano = anoI;
    strcpy_s(Nome, NomeI);
    idade = 0;
}
///////////////////////////////////////////////////////////////////////////////////
void Pessoa::CalculoIdade(int Dia_atual, int Mes_Atual, int Ano_atual)
{
     idade = Ano_atual - (ano);
     if (mes < Mes_Atual)
     {
        idade--;
     }
     else if (dia < Dia_atual)
     {
        idade--;
     }
 }
///////////////////////////////////////////////////////////////////////////////
void Pessoa::InformaIdade()
{
    cout << "Idade de " << Nome << " seria: " << idade << "\n";
}
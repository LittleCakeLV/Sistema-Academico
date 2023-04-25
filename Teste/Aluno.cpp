#include "Aluno.h"
using namespace std;

Aluno::Aluno(int diaI, int mesI, int anoI, const char* NomeI) :
    Pessoa(diaI, mesI, anoI, NomeI)
{
    RA = 0;
}
Aluno::Aluno()
{
    RA = 0;
}
Aluno::~Aluno()
{

}
void Aluno::setRA(int ra)
{
    RA = ra;
}
int Aluno::getRA()
{
    return RA;
}
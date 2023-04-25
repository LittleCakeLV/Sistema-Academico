#include "professor.h"

Professor::Professor(int diaI, int mesI, int anoI,const char* NomeI):Pessoa(diaI,mesI,anoI,NomeI)
{
    pUnivFiliado = NULL;
    pDptoFiliado = NULL;
}
Professor::Professor()
{
    pUnivFiliado = NULL;
    pDptoFiliado = NULL;
}

Professor::~Professor()
{
    pUnivFiliado = NULL;
    pDptoFiliado = NULL;
}

void Professor::setUnivFiliado(Universidade* pU)
{
    pUnivFiliado = pU;
}

void Professor::setDptoFiliado(Departamento* pD)
{
    pDptoFiliado = pD;
}

void Professor::ondetrabalho()
{
    cout << Nome << " trabalha para a " << pUnivFiliado->getNome() << endl;
}

void Professor::DptoFiliado()
{
    cout << Nome << " Trabalha no departamento: " << pDptoFiliado->getNome() << endl;
}
#include "Departamento.h"
#include <string.h>
#include "universidade.h"
#include "Disciplina.h"

Departamento::Departamento()
{
	pUniv = NULL;
	pDiscipPrim = NULL;
	pDiscipAtual = NULL;
	strcpy_s(Nome, "");
}
Departamento::~Departamento()
{
	pDiscipPrim = NULL;
	pDiscipAtual = NULL;
	strcpy_s(Nome, "");
}
void Departamento::setNome(const char* n)
{
	strcpy_s(Nome, n);
}
char* Departamento::getNome()
{
	return Nome;
}

void Departamento::setUniversidade(Universidade* pU)
{
	pUniv = pU;
}

Universidade* Departamento::getUniversidade()
{
	return pUniv;
}

void Departamento::incluaDisciplina(Disciplina* pD)
{
	if (pDiscipPrim == NULL)
	{
		pDiscipAtual = pD;
		pDiscipPrim = pD;
	}
	else {
		pDiscipAtual->pProx = pD;
		pD->pAnt = pDiscipAtual;
		pDiscipAtual = pD;
	}
}

void Departamento::listeDisciplina()
{
	Disciplina* pAux;
	pAux = pDiscipPrim;
	while (pAux!=NULL)
	{
		cout << "Disciplina " << pAux->getNome() << " do departamento" << Nome << endl;
		pAux = pAux->pProx;
	}
}
void Departamento::listeDisciplina2()
{
	Disciplina* pAux;
	pAux = pDiscipAtual;
	while (pAux != NULL)
	{
		cout << "Disciplina " << pAux->getNome() << " do departamento" << Nome << endl;
		pAux = pAux->pAnt;
	}
}

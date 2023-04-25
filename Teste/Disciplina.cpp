#include "Disciplina.h"

Disciplina::Disciplina(const char* nomeI, const char* ac)
{
	pDptoAssociado = NULL;
	pProx = NULL;
	pAnt = NULL;
	strcpy_s(area_conhecimento, ac);
	strcpy_s(nome, nomeI);
	id = 0;
}

Disciplina::~Disciplina()
{
	pDptoAssociado = NULL;
	pProx = NULL;
	pAnt = NULL;
}

void Disciplina::setId(int n)
{
	id = n;
}

int Disciplina::getID()
{
	return id;
}

void Disciplina::setNome(const char* n)
{
	strcpy_s(nome, n);
}

char* Disciplina::getNome()
{
	return nome;
}

void Disciplina::setDepartamento(Departamento* pDpto)
{
	pDptoAssociado = pDpto;
	pDpto->incluaDisciplina(this);
}

Departamento* Disciplina::getDepartamento()
{
	return pDptoAssociado;
}

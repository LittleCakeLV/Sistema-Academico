#pragma once
#include "Departamento.h"

class Disciplina
{
public:

	Disciplina(const char* nomeI = "", const char* ac = " ");
	~Disciplina();
	void setId(int n);
	int getID();
	void setNome(const char* n);
	char* getNome();
	void setDepartamento(Departamento* pDpto);
	Departamento* getDepartamento();
	Disciplina* pProx;
	Disciplina* pAnt;

protected:

	int id;
	char nome[150];
	char area_conhecimento[150];
	Departamento* pDptoAssociado;
	
};


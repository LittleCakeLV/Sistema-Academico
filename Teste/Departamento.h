#include <iostream>
#pragma once
class Universidade;
class Disciplina;

class Departamento
{
public:
	Departamento();
	~Departamento();
	void setNome(const char* n);
	char* getNome();
	void setUniversidade(Universidade* pU);
	Universidade* getUniversidade();
	void incluaDisciplina(Disciplina* pD);
	void listeDisciplina();
	void listeDisciplina2();
private:
	char Nome[50];
	Universidade* pUniv;
	Disciplina* pDiscipPrim;
	Disciplina* pDiscipAtual;
};
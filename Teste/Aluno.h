#pragma once
#include "Pessoa.h"

class Aluno: public Pessoa
{
public:
	Aluno(int diaI, int mesI, int anoI, const char* NomeI = "");
	Aluno();
	~Aluno();
	void setRA(int ra);
	int getRA();
private:
	int RA;
};
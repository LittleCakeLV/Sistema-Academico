#pragma once
#include "Departamento.h"
#include <list>
using namespace std;

class Universidade
{
public:
	Universidade();
	~Universidade();
	void setNome(const char* n);
	char* getNome();

	
private:
	char Nome[100];
};
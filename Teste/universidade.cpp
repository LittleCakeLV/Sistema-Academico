#include "universidade.h"
#include <string.h>
using namespace std;

Universidade::Universidade()
{
	strcpy_s(Nome, " ");
}
Universidade::~Universidade()
{

}
void Universidade::setNome(const char* n)
{
	strcpy_s(Nome, n);
}
char* Universidade::getNome()
{
	return Nome;
}


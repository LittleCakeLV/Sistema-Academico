#include "Pessoa.h"
#include "universidade.h"

class Professor: public Pessoa
{
public:

	Professor(int diaI, int mesI, int anoI, const char* NomeI = "");
	Professor();
	~Professor();
	void setDptoFiliado(Departamento* pD);
	void setUnivFiliado(Universidade* pU);
	void ondetrabalho();
	void DptoFiliado();

private:

	Universidade* pUnivFiliado;
	Departamento* pDptoFiliado;

};
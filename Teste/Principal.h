#include "professor.h"
#include "Disciplina.h"

class Principal {
private:
	Professor Einstein;
	Professor Newton;
	Professor Jean, Leticia;

	Universidade UTFPR;
	Universidade Princeton;
	Universidade Cambridge;

	Departamento DAINF, Moda, DAELN;
	Departamento CalcCambridge;
	Departamento FiscPrinceton;

	Disciplina FundamentosProg;
	Disciplina TecnicasProg;
	Disciplina IntroLogica;
	Disciplina EstruturaDados;

	int Dia, Mes, Ano;
public:
	Principal();
	void incializa();
	void inicializaUniversidade();
	void inicializaProfessores();
	void inicializaDepartamentos();
	void inicializaDisciplinas();
	void calcIdade();
	void InfoIdade();
	void univTrab();
	void dptoTrab();
	void listDisciplinasDpto();

	~Principal();
	void Executar();
};
#include "Principal.h"
#include <Windows.h>

Principal::Principal()
{
	
	SYSTEMTIME st;
	GetSystemTime(&st);
	Dia = st.wDay;
	Mes = st.wMonth;
	Ano = st.wYear;
	incializa();
	Executar();
}
void Principal::incializa()
{
	inicializaProfessores();
	inicializaUniversidade();
	inicializaDepartamentos();
	inicializaDisciplinas();
}
void Principal::inicializaUniversidade()
{
	UTFPR.setNome("Universidade Tecnologica Federal do Parana");
	Princeton.setNome("Princeton");
	Cambridge.setNome("Cambridge");
}
void Principal::inicializaProfessores()
{
	Einstein.Inicializa(14, 03, 1879, "Einstein");
	Newton.Inicializa(04, 01, 1643, "Newton");
	Jean.Inicializa(12, 12, 1998, "Jean");
	Leticia.Inicializa(01, 9, 2003, "Leticia");

	Jean.setUnivFiliado(&UTFPR);
	Einstein.setUnivFiliado(&Princeton);
	Newton.setUnivFiliado(&Cambridge);
	Leticia.setUnivFiliado(&UTFPR);

	Jean.setDptoFiliado(&DAINF);
	Leticia.setDptoFiliado(&DAELN);
	Einstein.setDptoFiliado(&FiscPrinceton);
	Newton.setDptoFiliado(&CalcCambridge);
}
void Principal::inicializaDepartamentos()
{
	DAINF.setNome("Informática");
	Moda.setNome("Moda UTFPR");
	DAELN.setNome("Eletronica");
	CalcCambridge.setNome("Matemática");
	FiscPrinceton.setNome("Física");
}
void Principal::inicializaDisciplinas()
{
	FundamentosProg.setNome("Fundamentos de Programacao");
	TecnicasProg.setNome("Tecnicas de Programacao");
	IntroLogica.setNome("Introducao a Logica");
	EstruturaDados.setNome("Estrutura de Dados");

	FundamentosProg.setDepartamento(&DAINF);
	TecnicasProg.setDepartamento(&DAINF);
	IntroLogica.setDepartamento(&DAINF);
	EstruturaDados.setDepartamento(&DAINF);
}
void Principal::calcIdade()
{
	Einstein.CalculoIdade(Dia, Mes, Ano);
	Newton.CalculoIdade(Dia, Mes, Ano);
	Jean.CalculoIdade(Dia, Mes, Ano);
}
void Principal::InfoIdade()
{
	Einstein.InformaIdade();
	Newton.InformaIdade();
	Jean.InformaIdade();
}
void Principal::dptoTrab()
{
	Jean.DptoFiliado();
	Newton.DptoFiliado();
	Einstein.DptoFiliado();
	Leticia.DptoFiliado();
}
void Principal::listDisciplinasDpto()
{
	DAINF.listeDisciplina();
	DAINF.listeDisciplina2();
}
void Principal::univTrab()
{
	Jean.ondetrabalho();
	Newton.ondetrabalho();
	Einstein.ondetrabalho();
	Leticia.ondetrabalho();
}
Principal::~Principal()
{

}
void Principal::Executar()
{
	calcIdade();
	InfoIdade();
	univTrab();
	dptoTrab();
	listDisciplinasDpto();

	
}
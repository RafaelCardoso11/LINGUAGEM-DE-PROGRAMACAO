#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
//Quest�o 1
void questao1()
{
	double calc, taxa, prestacao, valor;
	int tempo;
	cout << "Digite um valor da presta��o: ";
	cin >> valor;
	cout << "Digite a taxa da presta��o:";
	cin >> taxa;
	cout << "Digite o tempo (Dias), em atraso: ";
	cin >> tempo;
	prestacao = valor + (valor * (taxa / 100) * tempo);
	cout << "Valor da final (Calculado): " << prestacao;
}

//Quest�o 2
void questao2()
{
	int num;
	double calc;
	double baseMenor, altura, baseMaior;
	double diagonalMAIOR;
	double diagonalMENOR;
	double ladoUm, ladoDois;
	double base;
	double c;

	cout << "C�rculo (1) - Trap�zio (2) - Losango (3) - Quadrado (4) - Tri�ngulo (5)" << endl;
	cout << "Escolha a figura (Numero): ";
	cin >> num;

	if (num == 1)
	{
		cout << "Digite o raio do C�rculo: ";
		cin >> c;
		calc = (3.14 * c) * c;
	}
	else if (num == 2)
	{

		cout << "Digite a baseMaior: ";
		cin >> baseMaior;
		cout << "Digite a baseMaior: ";
		cin >> baseMenor;
		cout << "Digite a altura: ";
		cin >> altura;
		calc = (baseMaior + baseMenor) * altura / 2;
	}
	else if (num == 3)
	{

		cout << "Digite o Diagonal maior: ";
		cin >> diagonalMAIOR;
		cout << "Digite o Diagonal menor: ";
		cin >> diagonalMENOR;
		calc = (diagonalMAIOR * diagonalMENOR) / 2;
	}
	else if (num == 4)
	{
		cout << "Digite um lado do quadrado: ";
		cin >> ladoUm;
		cout << "Digite outro lado do quadrado: ";
		cin >> ladoDois;
		calc = ladoUm * ladoDois;
	}
	else if (num == 5)
	{
		cout << "Digite a altura: ";
		cin >> altura;
		cout << "Digite a base: ";
		cin >> base;
		calc = (base * altura) / 2;
	}
	cout << "Resposta: " << calc << endl;
}
//Quest�o 3

//Quest�o 4
void imposto(double &valor)
{
	cout << "Digite o valor do produto: R$";
	cin >> valor;
}
double questao4(double imposto)
{
	double res;
	res = (imposto * 12) / 100;
	return res;
}

//Quest�o 27
/*
27) Escreva um algoritmo que leia o nome e as tr�s notas semestrais de um aluno e forne�a a m�dia (aritm�tica simples) entre elas. Ap�s a m�dia, deve ser fornecida uma mensagem no seguinte formato:
O aluno XXXXX foi aprovado/reprovado, com m�dia XX
Obs1: o algoritmo considerar� aprovado o aluno que obtiver m�dia > 7.
Obs2: para o nome do aluno, declare uma vari�vel do tipo char. Por exemplo, var Nome: char [tamanho da cadeia]; A entrada de dados do tipo char deve ser por meio do comando gets.
Exemplo de uso:
cout << "Digite o seu nome: ";
gets(Nome);*/

void nome(string nome)
{
	cout << "Digite o nome do Aluno:";
	cin >> nome;
}

void nota1(float nota[3], int i, int soma)
{
	for (i = 0; i < 3; i++)
	{
		cout << "Digite a " << i + 1 << "� nota do aluno: ";
		cin >> nota[i];
	}
	soma = nota[1] + nota[2] + nota[3];
}

double questao27(string nome, double nota)
{
	string nome;
	double nota[i];

	if (soma > 21)
	{
		cout << "O aluno: " << nome << " Foi aprovado!";
	}
	else
	{
		cout << "O aluno: " << nome << " Foi reprovado!";
	}
}

int main()
{
	setlocale(LC_ALL, "portuguese");

	int questao = 1;

	while (questao > 0)
	{
		system("cls");

		cout << "Escolha a quest�o: ";
		cin >> questao;
		cout << endl
			 << endl;
		switch (questao)
		{

		case 1:
			questao1();
			break;

		case 2:
			questao2();
			break;

			/*	case 3:
	questao3();
	
	break;*/

		case 4:
			double imposto1;
			imposto(imposto1);
			double res1;
			res1 = questao4(imposto1);
			cout << res1;
			break;

		case 27:
			float nota1;
			string nome1;
			nota1 = questao27(nota);
			string nome1;
			nome1 = questao27(nome);
			break;
		}
		return 0;
	}
}

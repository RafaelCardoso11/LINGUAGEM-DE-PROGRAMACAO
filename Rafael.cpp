#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
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
void questao2()
{
	int num;
	double calc;
	double baseMenor, altura, baseMaior;
	double diagonalMAIOR;
	double diagonalMENOR;
	double ladoUm, ladoDois;
	double base;

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
int main()
{
	setlocale(LC_ALL, "portuguese");
	questao2();
	return 0;
}

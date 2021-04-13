//Desenvolver um c�digo em C++ que calcule a m�dia aritm�tica de 10 valores reais fornecidos pelo usu�rios.
#include <iostream>
using namespace std;
typedef int tipo[2];
void mediaA(tipo valor)
{
	int i;
	for (i = 0; i < 10; i++)
	{
		cout << "Calculo media - Digite o valor " << i + 1 << "� : ";
		cin >> valor[i];
	}
}
float calc(tipo valor)
{
	int x;
	int soma;
	for (x = 0; x < 10; x++)
	{
		soma = soma + valor[x];
	}
	return valor / 10;
}
float main(tipo valor)
{
	cout << "CALA A BOCA PEDRO: " << calc(valor);
}

/*Desenvolver um c�digo em C++ que calcule a vari�ncia dos 10 valores fornecidos no exemplo anterior.

V = ? ( x � m) 2
               N*/

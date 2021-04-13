#include <iostream>
#define valor 10
using namespace std;

void entrada(float vetor[])
{
	setlocale(LC_ALL, "Portuguese");
	int i;
	for (i = 0; i < valor; i++)
	{

		cout << "Digite o " << i + 1 << "� valor: ";
		cin >> vetor[i];
	}
}

float calc(float vetor[valor])
{
	float soma = 0;
	int x;
	for (x = 0; x < valor; x++)
	{
		soma = soma + vetor[x];
	}
	return soma / valor;
}

float calc2(float vetor[valor])
{
	float maior = vetor[0];
	int a;
	for (a = 0; a < valor; a++)
	{
		if (vetor[a] > maior)
		{
			maior = vetor[a];
		}

		else
			maior = vetor[0];
	}
	return maior;
}

float fim(float calc2, float calc)
{
	cout << "Media: " << calc << endl;
	cout << "Maior: " << calc2 << endl;
}

main()
{
	float maior, soma, vetor[valor];
	entrada(vetor);
	maior = calc2(vetor);
	soma = calc(vetor);
	fim(maior, soma);
	setlocale(LC_ALL, "Portuguese");
}

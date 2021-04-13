#include "exercicio6.h"

void questao1()
{

	int vetor[50];
	int x = 0;
	for (int i = 1; i <= 100; i++)
	{
		if (i % 5 == 0)
		{
			vetor[x] = i;
			x++;
		}
	}
	cout << "os multiplos de cinco sao: ";
	for (int j = 0; j < x; j++)
	{
		cout << vetor[j] << " ";
	}
	system("pause");
}

void questao2()
{
	int vetor[50];
	int x = 0;
	for (int i = 1; i <= 100; i++)
	{
		if (i % 2 == 0)
		{
			vetor[x] = i;
			x++;
		}
	}
	cout << " os valores pares sao: ";
	for (int j = x - 1; j >= 0; j--)
	{
		cout << vetor[j] << " ";
	}

	system("pause");
}

void questao3()
{

	int vetorA[5], vetorB[8];

	for (int i = 0; i < 5; i++)
	{
		cout << " coloque os valores do vetor A: ";
		cin >> vetorA[i];
	}
	for (int j = 0; j < 8; j++)
	{
		cout << " coloque os valores do vetor B: ";
		cin >> vetorB[j];
	}
	cout << " os valores iguais sao: ";
	for (int x = 0; x < 5; x++)
	{
		for (int y = 0; y < 8; y++)
		{
			if (vetorA[x] == vetorB[y])
			{
				cout << vetorA[x] << " ";
			}
		}
	}

	system("pause");
}

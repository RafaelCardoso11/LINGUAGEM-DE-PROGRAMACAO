#include <iostream>
using namespace std;
void usuario(int vetor[], int num)
{

    cout << "Digite a quantidade de vetores que você deseja ordenar: ";
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        cout << "Digite o " << i + 1 << "° numero do vetor: ";
        cin >> vetor[num];
    }
}
void OrdInsercao(int vetor[], int num)
{
    int x, y;
    int Aux;
    for (x = 1; x < num; x++)
    {
        Aux = vetor[x];
        y = x - 1;
        while (y >= 0 && vetor[y] > Aux)
        {
            vetor[y + 1] = vetor[y];
            y--;
        }
        vetor[y + 1] = Aux;
    }
}

void exibir(int vetor[num], int num)
{
    for (int i = 0; i < num; i++)
    {
        cout << "fim: " << vetor[y];
    }
}
int main()
{
    int n;
    int vetor[num];
    int fim;
    OrdInsercao(vetor, num);
}
#include <iostream>
#define n 1000
using namespace std;
typedef struct lista
{
    int vetor[n];
    int l;
};
int cLista(lista &Y)
{
    int i;
    cout << "Tamanho da lista: " << endl;
    cin >> Y.l;
    for (i = 0; i < Y.l; i++)
    {
        cout << "Digite o " << i << "° valor: " << endl;
        cin >> Y.vetor[i];
        system("cls");
    }
}

void exibir(lista &Y)
{
    int i;
    for (i = 0; i < Y.l; i++)
    {

        cout << "Sua lista é: " << Y.vetor[i] << endl;
    }
}
void localizar(lista Y)
{
}
void inserir(lista Y)
{
}
void remover(lista Y)
{
}
void acessar(lista Y)
{
}
void alterar(lista Y)
{
}

void menu(lista &Y)
{
    int escolha;
    cout << "Você deseja escolher o que?" << endl;
    cout << "Acessar uma posição na lista (1)" << endl;
    cout << "Inserir um elemento na k-ésima posição (2)" << endl;
    cout << "Alterar um elemento inserido (3)" << endl;
    cout << "Remover um elemento da k-ésima posição (4)" << endl;
    cout << "Localizar um elemento com determinado conteúdo (5)" << endl;
    cout << "Exibir a lista (6)" << endl;
    cin >> escolha;
    if (escolha == 1)
        acessar(Y);
    else if (escolha == 2)
        inserir(Y);
    else if (escolha == 3)
        alterar(Y);
    else if (escolha == 4)
        remover(Y);
    else if (escolha == 5)
        localizar(Y);
    else if (escolha == 6)
        exibir(Y);
    else
        cout << "Numero ou caracter digitado é invalido!";
}
int main()
{
    setlocale(LC_ALL, "portuguese");
    lista Y;
    cLista(Y);
    menu(Y);

    return 0;
}
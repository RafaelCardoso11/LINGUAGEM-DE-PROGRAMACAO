void soma(PtNo p)
{
int soma = 0;
while(p != NULL){
soma += p->dado;
p = p->prox;
}
cout << "A soma dos valores da pilha é: " << soma << endl;
}


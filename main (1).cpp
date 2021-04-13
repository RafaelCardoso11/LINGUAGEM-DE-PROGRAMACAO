#include "questoes.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char **argv)
{
	setlocale(LC_ALL, "portuguese");
	/* // QUEST�O 1
	double bMaior = 0, bMenor = 0, altura = 0, q1 = 0;
	
	cout << "Insira a base maior, menor, e altura de um trap�zio para calcular sua �rea:" << endl;
	cout << "Base maior: ";
	cin >> bMaior;
	cout << "Base menor: ";
	cin >> bMenor;
	cout << "altura: ";
	cin >> altura;
	
	q1 = questao1(bMaior,bMenor, altura);
	
	cout << "A �rea do trap�zio � igual a " << q1 << ". " << endl << endl;
	
	system("pause");	
	return 0; */

	/* // QUEST�O 2
	
	float q2 = 0;
	
	q2 = questao2();
	cout << "O que sobrar� do sal�rio de Jo�o ser� " << q2 << " reais" << endl << endl;
	system("pause");	
	return 0; */
	// QUEST�O 3
	/*
	float horas = 0, valorH = 0, percentualDesconto = 0;
	string q3 = " ";
	
	cout << "Horas trabalhadas: ";
	cin >> horas;
	cout << "Valor da hora trabalhada: ";
	cin >> valorH;
	cout << "Percentual descontado: ";
	cin >> percentualDesconto;
	
	q3 = questao3(horas, valorH, percentualDesconto);
	
	cout << q3 << endl << endl;
	
	system("pause");	
	return 0; */

	/* //  QUEST�O 4
	
	int nota = 0;
	string q4 = " ";
	
	cout << "Insira a nota do aluno: ";
	cin >> nota;
	
	q4 = questao4(nota);
	
	cout << "NOTA DO ALUNO: " << nota << ", CONCEITO " << q4;
	
	
	system("pause");
	return 0; */

	/* // QUEST�O 5
	
	int a = 0, b = 0;
	string q5 = " ";
	
	cout << "Insira dois n�meros A e B: " << endl;
	cout << "A: ";
	cin >> a;
	cout << "B: ";
	cin >> b;
	
	q5 = questao5(a, b);
	
	cout << q5 << endl << endl;
	
	system("pause");
	return 0; */

	/* // QUEST�O 6
	
	float a = 0, b = 0, q6 = 0;
	
	cout << "Insira dois valores A e B com B diferente de 0 (OS VALORES SER�O DIVIDIDOS): " << endl << endl;
	cout << "A: ";
	cin >> a;
	while (b == 0){
	cout << "B (Diferente de 0): ";
	cin >> b; 
}	
	cout << endl;
	
	q6 = questao6(a,b);
	 
	cout << "O resultado da divis�o de " << a << " por " << b << " � igual a " << q6 << endl << endl;
	system("pause");
	return 0; */

	/* // QUEST�O 7 
	
	int a = 0;
	
	cout << "Insira um valor de 1 a 10 para ver sua tabuada: ";
	cin >> a;
	if ((a > 10) || (a < 1)){
		cout << "Valor inv�lido!";
	} else {
		
		for (int x = 1; x < 11; x++){
		cout << a << " X " << x << " = " << a * x << endl;	
			
		}
		
	system("pause");
	return 0;
	} */

	/* // QUEST�O 8
	
	int num[10];
	int q8 = 0;
	
	for (int x = 0; x < 10; x++){
	cout << "Insira o valor " << x + 1 <<" : ";
	cin >> num[x];	
	}
	q8 = questao8(num);
	
	cout << "Soma de n�meros inferiores a 40: " << q8 << endl;
	
	system("pause");
	return 0; */

	/* // QUEST�O 9 
	
	int a = 0, b = 0, q9 = 0;
	
	cout << "Insira um valor: ";
	cin >> a;
	cout << "Insira um valor maior qur o primeiro: ";
	
	while (b <= a){
		
		cin >> b;
		
		while (b <= a){
			cout << "O valor inserido deve ser maior que o primeiro! Tente novamente." << endl;
			cin >> b;
		}
	}
	
	q9 = questao9(a, b);
	
	cout << "Seu resultado (soma de inteiros os dois valores, incluindo os pr�prios) � igual a " << q9 << endl << endl;
	
	system("pause");
	return 0; */

	/* // QUEST�O 10
	
	int q[20], maior = 0, menor = 0, posicaoMaior = 0, posicaoMenor = 0;
	
	for (int x = 0; x < 20; x++){
		
		cout << "Insira o valor " << x + 1 << ": ";
		cin >> q[x];
		while (q[x] < 0){
			cout << "O valor deve ser positivo! Insira outro: ";
			cin >> q[x];
		}
	}	
	
	menor = q[0];
	
    for (int a = 0; a < 20; a++){
		
	  	    

	if (q[a] > maior){
		
	 		maior = q[a];
	 		posicaoMaior = a + 1;
} 
		if (q[a] < menor) {
			menor = q[a];
			posicaoMenor = a + 1;
} 
   }
	
	cout << "Maior valor: " << maior << " Na posi��o "<< posicaoMaior << endl;
	cout << "Menor valor: " << menor << " Na posi��o "<< posicaoMenor << endl;
	
	system("pause");
	return 0; */

	//Exercicio 2
	// Quest�o 1

	/* int x = 0, num[x], produto = 1, soma = 0;
	
	cout << "Insira a quantidade de valores a serem colocados: ";
	cin >> x;
	
	cout << "Insira os valores a seguir: " << endl;
	for (int y = 0; y < x; y++){
		cout << "valor " << y + 1 << ": ";
		cin >> num[y]; 
		while (num[y] <= 0){
		cout << "O Valor deve ser maior que zero! insira novamente o valor " << y + 1 << " : ";
		cin >> num[y]; 	
		}
	}
	
	for (int y = 0; y < x; y++){
		if ((num[y] % 2 ) != 0){
			produto = produto * num[y];
		   } else {
		   	soma = soma + num[y];
		    }
		}
		
	if (produto == 1){
		produto = 0;
	}	
	cout << endl << endl;	
	cout << "Soma dos n�meros pares colocados: " << soma << endl;
	cout << "Produto dos n�meros impares colocados: " << produto << endl; 	
	
	system("pause");
	return 0; */

	// Quest�o 2

	/* int num[5], y = 0;
	
	for (int x = 1001; x > 0 ; x++){
		if ((x % 11) == 5){
			num[y] = x;
			y++;
		} 
		if (y == 5){
		x =	-5;
		}
	}
	cout << num[0] << endl;
	cout << num[1] << endl;
	cout << num[2] << endl;
	cout << num[3] << endl;
	cout << "O Quinto n�mero divis�vel por 11 com resto 5 �: " << num[4];	
	
	system("pause");
	return 0;	*/

	// Quest�o 3
	/*
	double chico = 1.50, juca = 1.10, anos = 0;
	
	while (chico >= juca){
		
		juca = juca + 0.03;
		chico = chico + 0.02;
		anos++;
	}
	
	cout << "Juca demorar� " << anos << " anos para ser maior que Chico" << endl;
	cout << "Altura de Juca: " << juca << endl;
	cout << "Altura de Chico: " << chico << endl;
	
	system("pause");
	return 0; */

	// Quest�o 4
	/*
	
	 int num[7], somaImpar = 0, menor = 0, maior = 0, y = 0, impar[7];
	
	for (int x = 0; x < 7; x++){
		
		cout << "Insira o valor " << x + 1 << " (A ORDEM DEVE SER CRESCENTE): ";
		cin >> num[x];
		
	    menor = num[0];
	    
		if (((num[x] % 2) != 0) || (num[x] == 1) ){
			somaImpar += num[x];
			impar[y] = num[x];
			y++;	
		}	
	} 
	cout << "Impares: ";
	for (int z = 0; z < y; z++){
	cout << impar[z] << " ";	
		}
	cout << "Soma dos impares: " << somaImpar << endl << endl;  
	
	system("pause");
	return 0;
	*/

	// Quest�o 5 (Imcompleta)
	/*
	int altura = 0;
	
	cout << "Insira a altura da pir�mide: ";
	cin >> altura;
	
	*/
	/*
	// Quest�o 6

	int  total = 0, countA = 0, countB = 0, countC = 0, countD = 0, countE = 0;
	string letra;
	
	while (total < 5){
	
	cout << "Insira um caractere (A, B, C, D, OU OUTRO): ";
	cin >> letra;
	cout << endl << endl;
	
	if ((letra == "a" || letra == "A") && countA == 0 ){
		
		cout << "	   &" << endl;
		cout << "	  &&&" << endl;
		cout << "	 &&&&&" << endl;
		cout << "	&&&&&&&" << endl;
		cout << "  &&&&&&&&&" << endl;
		cout << " &&&&&&&&&&&" << endl;
		cout << "&&&&&&&&&&&&&" << endl << endl;
		
		countA++;
		total++;
	} else if ((letra == "b" || letra == "B") && countB == 0 ){
		
		cout << "@@@@@@@@@" << endl;
		cout << "@@@@@@@@@" << endl;		
		cout << "@@@@@@@@@" << endl;
		cout << "@@@@@@@@@" << endl;
		cout << "@@@@@@@@@" << endl;	
		cout << "@@@@@@@@@" << endl << endl;		
		countB++;
		total++;
	}  else if ((letra == "c" || letra == "C") && countC == 0 ){
		
		cout << "     %" << endl;
		cout << "    %%%" << endl;		
		cout << "   %%%%%" << endl;
		cout << "  %%%%%%%" << endl;
		cout << " %%%%%%%%%" << endl;	
		cout << "  %%%%%%%" << endl;
		cout << "   %%%%%" << endl;
		cout << "    %%%" << endl;	
		cout << "     %" << endl << endl;	
		countC++;
		total++;
	}  else if ((letra == "d" || letra == "D") && countD == 0 ){
		
		cout << "   #############" << endl;
		cout << "  ###############" << endl;	
		cout << " #################" << endl;
		cout << "###################" << endl;
		cout << "###################" << endl;
		cout << "###################" << endl;
		cout << "###################" << endl << endl;	
		countD++;
		total++;
	} else if (countE == 0 ){
		
		cout << "KKKKKK    KKKKKK" << endl;
		cout << "KKKKKK   KKKKKK" << endl;	
		cout << "KKKKKK  KKKKKK" << endl;
		cout << "KKKKKK KKKKKK" << endl;
		cout << "KKKKKKKKKKKK" << endl;	
		cout << "KKKKKK KKKKKK" << endl;
		cout << "KKKKKK  KKKKKK" << endl;
		cout << "KKKKKK   KKKKKK" << endl;
		cout << "KKKKKK    KKKKKK" << endl << endl;
		countE++;
		total++;					
	} else {
	cout << "N�o � possivel inserir este caractere novamente, tente outra vez!" << endl << endl;
		}   

	}
	cout << "voc� viu todas as formas, parab�ns!" << endl << endl;	
	
	system("pause");
	return 0;
		*/
	/*	// Crie um algoritmo que apresente as notas de dois alunos na mat�ria portugu�s: 
	
	int matriz[2][3]={1,2,3,4,5,6};                      // nota1, nota2, nota3, nota4, nota5, nota6
         
         cout <<"Notas em Portugu�s:" << endl;
         cout <<"Aluno A:  " << matriz[0][0] << "     " << matriz[0][1] << "     " << matriz[0][2] << endl;
         cout <<"Aluno B:  " << matriz[1][0] << "     " << matriz[1][1] << "     " << matriz[1][2] << endl;
         */
	/*
         // crie um algoritmo que mostre o comprimento de um ret�ngulo 3 x 6
         int matriz[1][4]= {3,3,6,6};  // vetor[4]= {3,3,6,6}
         
         cout << "        " << matriz[0][2] << endl;
         cout << "    ____________" << endl;
         cout << "   |            | " << endl;
         cout << matriz[0][0]<< "  |            | " << matriz[0][1] << endl;
         cout << "   |____________|" << endl << endl;
         cout << "        " << matriz[0][3] << endl;
         
         
         */

	int matriz1[20][20], matriz2[20][20];

	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 20; j++)
		{

			matriz1[i][j] = rand();
		}
	}

	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 20; j++)
		{

			matriz2[i][j] = rand();
		}
	}

	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 20; j++)
		{

			cout << matriz1[i][j] << " ";
			if (j == 19)
			{
				cout << endl;
			}
		}
	}

	cout << endl
		 << endl;

	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 20; j++)
		{

			cout << matriz2[i][j] << " ";
			if (j == 19)
			{
				cout << endl;
			}
		}
	}

	cout << endl
		 << endl;

	cout << "n�meros que aparecem em ambas as matrizes: " << endl
		 << endl;

	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 20; j++)
		{
			for (int k = 0; k < 20; k++)
			{
				for (int l = 0; l < 20; l++)
				{

					if (matriz2[i][j] == matriz1[k][l])
					{

						cout << matriz2[k][l] << " ";
					}
				}
			}
		}
	}
	return 0;
}

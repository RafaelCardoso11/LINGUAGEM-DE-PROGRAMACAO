#include <iostream>
#include "exercicio6.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char **argv)
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

		case 3:
			questao3();
			break;
			/*	
	case 4:
	questao4();
	break;
		
	case 5:
	questao5();
	break;
	/*	
	case 6:
	questao6();
	break;
		
	case 7:
	questao7();
	break;	
	case 8:
	questao8();
	break;
		
	case 9:
	questao9();
	break;
		
	case 10:
	questao10();
	break;
		
	case 11:
	questao11();
	break;
		
	case 0:
	break;
	break;
	
	default:
	break;
	break;		
	*/
		}
	}
	return 0;
}

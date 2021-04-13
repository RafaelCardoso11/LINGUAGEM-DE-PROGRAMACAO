#include "exercicio2.h"
#include <math.h>

void questao11()
{
	int base = 0, altura = 0, terreno = 0;

	cout << "imobili�ria Im�bilis." << endl;
	cout << "\n\n\n\n\nCompre seu terreno aki." << endl;

	cout << "Imforme a base do terreno que voc� deseja: " << endl;
	cin >> base;

	cout << "imforme a altura do terreno que voc� deseja: " << endl;
	cin >> altura;

	terreno = base * altura;

	cout << "Area do terreno � de : " << terreno << "m�" << endl;
}
void questao12()
{

	int cavalos, ferraduras;

	cout << "Total de cavalos: " << endl;
	cin >> cavalos;

	ferraduras = cavalos * 4;

	cout << "Ser� necessario : " << ferraduras << " ferraduras para os cavalos." << endl
		 << endl;
}
void questao13()
{
	float pFrances, pDoce, q1, q2, poupanca, renda;
	cout << "padaria Hotp�o." << endl;
	cout << "\n\n\nO P�o que � uma delicia,p�o quentinho aki.\n\n"
		 << endl;

	cout << "Quantidade de p�o frances: ";
	cin >> pFrances;
	cout << "Quantidade e doce: ";
	cin >> pDoce;

	q2 = 0.12 * pFrances;
	q1 = 1.50 * pDoce;
	renda = q1 + q2;
	poupanca = renda * 0.10;
	cout << "Valor arrecadado com a venda: R$" << renda << endl
		 << endl;
	cout << "Valor que vai pra poupan�a: R$" << poupanca << endl;
}
void questao14()
{
	string nome = "";
	int idade, dias;
	cout << "Qual seu Nome: ";
	cin >> nome;
	setbuf(stdin, NULL);
	cout << "Qual sua idade: ";
	cin >> idade;

	dias = idade * 365;
	cout << "Voc� ja viveu : " << dias << "Dias" << endl;
}
void questao15()
{
	float gasolina, litro, pago;

	cout << "Pre�o da gasolina: R$";
	cin >> gasolina;

	cout << "Qual valor pago? ";
	setbuf(stdin, NULL);
	cin >> pago;

	litro = pago / gasolina;

	cout << "\nSer� colocado : " << litro << "litro(s) de gasolina.\n";
}
void questao16()
{
	float kilo, peso;
	cout << "Qual peso do prato: ";
	setbuf(stdin, NULL);
	cin >> kilo;

	peso = 12.00 * kilo;

	cout << "Valor pago: R$" << peso << ",00" << endl;
}
void questao17()
{
	int mes, dia, inicio, dP;
	cout << "Inicio do ano: 1 de Janeiro" << endl
		 << endl;

	cout << "Qual dia voc� deseja? ";
	cin >> dia;

	cout << "Qual mes voc� deseja? ";
	cin >> mes;

	mes = mes * 30;
	dP = mes + dia;

	cout << "Se passaram : " << dP << "dias" << endl;
}
void questao18()
{

	float notaFinal, nota1, nota2, nota3;

	cout << "Primeira Nota: " << endl;
	setbuf(stdin, NULL);
	cin >> nota1;
	cout << endl;

	cout << "Segunda Nota: " << endl;
	setbuf(stdin, NULL);
	cin >> nota2;
	cout << endl;

	cout << "Terceira Nota: " << endl;
	setbuf(stdin, NULL);
	cin >> nota3;

	notaFinal = ((nota1 * 1) + (nota2 * 2) + (nota3 * 3)) / 6;

	cout << "M�dia Ponderada: " << notaFinal << endl;
}
void questao19()
{
	int P = 10, M = 12, G = 15, numP, numM, numG, valorTotal;

	cout << "Informe o N�mero de camisetas Pequenas: " << endl;
	cin >> numP;

	cout << "Informe o N�mero de camisetas M�dias: " << endl;
	cin >> numM;

	cout << "Informe o N�mero de camisetas Grandes:" << endl;
	cin >> numG;
	cout << endl;

	valorTotal = (numP * P) + (numM * M) + (numG * G);

	cout << "Pre�o Total Das Camisetas: R$" << valorTotal << ",00  " << endl
		 << endl;
}
void questao20()
{
	int xA, xB, yA, yB, d, raiz;

	cout << "valor 1: " << endl;
	cin >> xA;
	cout << "Valor 2: " << endl;
	cin >> xB;
	cout << "Valor 3: " << endl;
	cin >> yA;
	cout << "Valor 4: " << endl;
	cin >> yB;
	d = (xB - xA) ^ 2 + (yB - yA) ^ 2;
	raiz = sqrt(d);
	cout << "Resultado: " << d << endl;
}
void questao21()
{

	int dias, anos, meses, sm, ds;
	cout << "             Relatorio do indice de acidentes" << endl
		 << endl
		 << endl
		 << endl;

	cout << "Total de dias sem nenhum acidente: ";
	cin >> ds;

	sm = (ds / 30);
	anos = sm / 12;
	meses = (ds / 30) - (anos * 12);
	dias = ds - (sm * 30);

	cout << "Total em anos : " << anos << "Ano(s)" << endl;
	cout << "Total em meses: " << meses << "mes(es)" << endl;
	cout << "Total em dias: " << dias << "dia(s)" << endl;
}
void questao22()
{
	int sI, sF, aumento, d, f, g, h;
	cout << "Tabela pra calcular o Salario + aumento" << endl
		 << endl
		 << endl;

	cout << "Qual seu salario inicial: ";
	cin >> sI;

	aumento = (8 * sI) / 100;
	sF = (sI * aumento) / 100;

	f = (15 * sI) / 100;
	g = (sI * f) / 100;
	h = f + sI;
	d = aumento + sI;
	cout << "Seu salario com aumento de 15% � igual a : R$" << h << endl;
	cout << "Seu salario final com desconto �  igual a : R$" << d << endl;
}
void questao23()
{
	int p, p1;
	cout << "      Calculadora de area da pizza" << endl
		 << endl
		 << endl;
	cout << "Qual comprimento da pizza? ";
	cin >> p;
	p1 = (p * 2) * 3.14;
	cout << "A pizza tem uma area de: " << p1 << "cm";
}
void questao24()
{
	int carlos, andre;
	float felipe, pg;

	cout << "Valor da conta: R$";
	cin >> pg;

	andre = (pg / 3);

	carlos = (pg / 3);

	felipe = (pg - andre) - carlos;

	cout << "Andre ir� pagar: R$" << andre << " Carlos ir� pagar: R$" << carlos << " felipe ir� pagar: R$" << felipe << endl;
}
void questao25()
{

	float queijo = 50, presunto = 50, h = 100, l, q;

	cout << "Quantidade de lanches : ";
	cin >> l;

	queijo = (50 * l) / 1000;
	presunto = (50 * l) / 1000;
	h = (100 * l) / 1000;
	cout << "Ser� necessario comprar : " << endl;
	cout << "Queijos: " << queijo << "kg" << endl;
	cout << "Presuntos: " << presunto << "kg" << endl;
	cout << "Hamburgue's: " << h << "kg" << endl;
}
void questao26()
{
	int tc, tf;

	cout << "Digite um valor em celsius: ";
	cin >> tc;

	tf = ((tc / 5) * 9) + 32;
	cout << "Temperatura convertida para fahrenheit: " << tf << "�F" << endl;
}
void questao27()
{

	float hora, hE, sB, s;

	cout << "Hrs trabalhada: ";
	cin >> hora;
	cout << "Hrs extra trabalhada: ";
	cin >> hE;

	sB = ((hora * 10.00) + (hE * 15.00));
	s = sB - ((sB * 10) / 100);

	cout << "Salario Bruto: R$" << sB << endl;
	cout << "Salario com desconto de 10%: R$" << s << endl;
}
void questao28()
{

	int f, g1, g2, g3;
	cout << "Quantos frangos a  granja Frangotech possui: ";
	cin >> f;
	g1 = (f * 4.00);
	g2 = (f * 3.50) * 2;
	g3 = (g1 + g2);
	cout << "Gasto total da granja para marcar todos os frangos: R$" << g3 << endl;
}
void questao29()
{
	int blusas, novelos, la;
	cout << "Quantidade de blusas que a f�brica faz: ";
	cin >> blusas;

	cout << "Quantidade de novelos de l� que foram utilizados: ";
	cin >> novelos;

	la = (novelos / blusas);

	cout << "Foram ultilizados: " << la << "Novelo(s) por unidade" << endl
		 << endl;
}
void questao30()
{
	int lata, garrafa1, garrafa2, a, b, c, e;

	cout << "Quantas latas de 350ml voc� deseja: ";
	cin >> lata;
	cout << "Quantas garrafas de 600ml voc� deseja: ";
	cin >> garrafa1;
	cout << "Quantas garrafas de 2l voc� deseja: ";
	cin >> garrafa2;

	a = (lata * 350);
	b = (garrafa1 * 600);
	c = (garrafa2 * 2000);

	e = (a + b + c);

	cout << "Voc� comprou : " << e << "litros" << endl;
}
void questao31()
{
	float n1, n2, n3, n4, n5, r1, r2, r3, r4, r5, m5 = 0.05, m10 = 0.10, m25 = 0.25, m50 = 0.5, m1 = 1.00, f;
	cout << "Moedas de 5 centavos: ";
	cin >> n1;
	cout << "Moedas de 10 centavos: ";
	cin >> n2;
	cout << "Moedas de 25 centavos: ";
	cin >> n3;
	cout << "Moedas de 50 centavos: ";
	cin >> n4;
	cout << "Moedas de 1 Real: ";
	cin >> n5;

	r1 = (m5 * n1);
	r2 = (m10 * n2);
	r3 = (m25 * n3);
	r4 = (m50 * n4);
	r5 = (m1 * n5);

	f = (r1 + r2 + r3 + r4 + r5);

	cout << "Valor total economizado: R$" << f << endl;
}
void questao32()
{
	int sP, a, sA, aP, f;

	cout << "Qual sua altura? ";
	cin >> a;
	cout << "Qual o tamanho da sombra do predio? ";
	cin >> sP;
	cout << "Qual a tamanho da sua sombra? ";
	cin >> sA;

	f = (sP / a);
	aP = (a * f);
	cout << "Altura do predio: " << aP << endl;
}
void questao33()
{
	float agua, suco, l;
	cout << "Quantos litros de refresco vc deseja: ";
	cin >> l;

	agua = (0.800 * l) * 1.000;
	suco = (0.200 * l) * 1.000;

	cout << "S�o necessario: " << agua << "litro(s) de agua"
		 << " e " << suco << "litro(s) de suco para fazer " << l << "litro(s) " << endl
		 << "de refresco" << endl;
}
void questao34()
{
	float h, r, v, r2;
	cout << "Qual a altura da caixa d'agua: ";
	cin >> h;
	cout << "Qual o raio: ";
	cin >> r;
	r2 = (r * r) * h;
	v = (3.14 * r2);

	cout << "Volume da caixa d'�gua cil�ndrica: " << v << "cm" << endl;
}
void questao35()
{
	int n1, n2, n3, a;

	cout << "Digite o primeiro numero: ";
	cin >> n1;
	cout << "Digite o segundo numero: ";
	cin >> n2;
	cout << "Digite o terceiro numero: ";
	cin >> n3;

	a = (n1 * n2 * n3);
	cout << "Resultado da Multiplica��o = " << a << endl;
}
void questao36()
{

	int n1, n2, r;

	cout << "Digite o primeiro numero: ";
	cin >> n1;
	cout << "Digite o segundo numero: ";
	cin >> n2;

	r = (n1 / n2);

	cout << "Resultado da divis�o: " << r << endl;
}
void questao37()
{
	float n1, n2, r;

	cout << "Digite a primeira nota: ";
	cin >> n1;
	cout << "Digite a segunda nota: ";
	cin >> n2;

	r = (n1 * 2) + (n2 * 3) / 5;

	cout << "M�dia aritm�tica ponderada: " << r << endl;
}
void questao38()
{
	float p1, r;
	cout << "Digite um produto: ";
	cin >> p1;

	r = p1 - (p1 * 10) / 100;
	cout << "Resultado com desconto de 10%: R$" << r << endl;
}
void questao39()
{
	float s1, s2, s3, s4;

	cout << "Salario do funcionario: R$";
	cin >> s1;
	cout << "Total de vendas: ";
	cin >> s2;

	s3 = s2 + (s1 * 4) / 100;
	s4 = s3 + s1;

	cout << "Dinheiro da Comiss�o: R$" << s4 << ",00" << endl
		 << "Sal�rio final do funcion�rio: R$"
		 << ",00" << s3 << endl;
}
void questao40()
{
	float s1, s2, s3;

	cout << "Digite o peso da pessoa: ";
	cin >> s1;

	s2 = s1 + (s1 * 15) / 100;
	s3 = s1 - (s1 * 20) / 100;
	cout << "A) Novo peso se a pessoa engordar 15% sobre o peso digitado:" << endl;
	cout << "R = " << s2 << "kg" << endl;
	cout << "B) O Novo peso se a pessoa emagrecer 20% sobre o peso digitado: " << endl;
	cout << "R = " << s3 << "kg" << endl;
}
void questao41()
{
	float s1, s2;

	cout << "Digite o peso da pessoa: ";
	cin >> s1;
	s2 = (s1 * 1000);

	cout << "Peso da pessoa em gramas: " << s2 << "g" << endl;
}
void questao42()
{
	float d1, d2, a, altura;

	cout << "Digite a base maior: ";
	cin >> d1;
	cout << "Digite a base menor: ";
	cin >> d2;
	cout << "Digite a altura: ";
	cin >> altura;

	a = ((d1 + d2) * altura) / 2;

	cout << "�rea de um trap�zio: " << a << "cm" << endl;
}
void questao43()
{
	float d1, d2, a;

	cout << "Digite um lado do quadrado: ";
	cin >> d1;
	cout << "Digite o outro lado do quadrado: ";
	cin >> d2;

	a = (d1 * d2);

	cout << "�rea do quadrado: " << a << "cm" << endl;
}
void questao44()
{

	float d1, d2, a;

	cout << "Digite a diagonal maior: ";
	cin >> d1;
	cout << "Digite a diagonal menor: ";
	cin >> d2;

	a = (d1 * d2) / 2;

	cout << "�rea de um losango: " << a << "cm" << endl;
}
void questao45()
{
	int s1, s2, s3;

	cout << "Qual Salario atual do funcionario: R$";
	cin >> s1;

	s3 = (s1 / 954.00);

	cout << "O funcionario ganha em media " << s3 << " Salario(s) minimo(s)" << endl;
}
void questao46()
{
	int t1, t2;
	cout << "Qual numero deseja pra multiplicar? ";
	cin >> t1;

	cout << "x : ";
	cin >> t2;

	cout << t1 << "x" << t2 << "=" << t1 * t2 << endl;
}
void questao47()
{
	int n1 = 1200, n2 = 200, n3 = 120, n4, n5;
	cout << "Jo�o recebeu seu sal�rio de R$ 1200,00 e precisa pagar duas contas (C1=R$200,00 e C2=R$120,00) que est�o atrasadas" << endl;

	n4 = n1 - (n1 * 2) / 100;
	n5 = (n4 - 320);

	cout << "Restar� do sal�rio do Jo�o: R$" << n5 << endl;
}
void questao48()
{
	int a, b, h, raiz;
	cout << "Cateto oposto: ";
	cin >> a;
	cout << "Cateto adjacente: ";
	cin >> b;

	h = (a * a) + (b * b);
	raiz = sqrt(h);
	cout << "O valor da hipotenusa = " << raiz << endl;
}
void questao49()
{
	int hrs, h1, h2, h3, h;

	cout << "Digite um numero: ";
	cin >> hrs;

	h1 = hrs / 60;
	h2 = (hrs / 0.1) - (h1 * 60);
	h3 = hrs - (h1 * 0.1);

	cout << "convertido em intervalo de:" << h1 << "hora(s) " << h2 << "minuto(s) "
		 << "e " << h3 << "segundo(s)." << endl;
}
void questao50()
{
	int t1, b1, b2, b3, b4, b5, b6, b7, b8, b9, b10;

	cout << "Tabuada do numero: ";
	cin >> t1;

	b1 = t1 * 1;
	b2 = t1 * 2;
	b3 = t1 * 3;
	b4 = t1 * 4;
	b5 = t1 * 5;
	b6 = t1 * 6;
	b7 = t1 * 7;
	b8 = t1 * 8;
	b9 = t1 * 9;
	b10 = t1 * 10;
	cout << t1 << "x"
		 << "1"
		 << " = " << b1 << endl;
	cout << t1 << "x"
		 << "2"
		 << " = " << b2 << endl;
	cout << t1 << "x"
		 << "3"
		 << " = " << b3 << endl;
	cout << t1 << "x"
		 << "4"
		 << " = " << b4 << endl;
	cout << t1 << "x"
		 << "5"
		 << " = " << b5 << endl;
	cout << t1 << "x"
		 << "6"
		 << " = " << b6 << endl;
	cout << t1 << "x"
		 << "7"
		 << " = " << b7 << endl;
	cout << t1 << "x"
		 << "8"
		 << " = " << b8 << endl;
	cout << t1 << "x"
		 << "9"
		 << " = " << b9 << endl;
	cout << t1 << "x"
		 << "10"
		 << " = " << b10 << endl;
}

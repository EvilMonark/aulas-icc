// Trabalho01.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//
#include <math.h>
#include <iostream>
#ifndef PRINT
#define PRINT std::cout<<
#define ENDLINE <<std::endl;
#endif // !PRINT
#ifndef GET
#define GET std::cin>>
#endif // !GET




int getNum() {
	int num;
	GET num;
	if (num % 5 != 0) {
		PRINT "Numero invalido ou numero fora dos limites. Escreva um numero terminado em 0 ou 5.";
		exit(0);
	}
	else {
		return num;
	}
}

int main()
{
	//Pegar inteiros Centavos
	PRINT "Centavos: ";
	unsigned long int centavos = getNum();
	//Ler quantos reais e centavos e mostrar quantas notas e moedas serao necessarias
	//notas
	int reais100 = 10000;
	int reais50 = 5000;
	int reais20 = 2000;
	int reais10 = 1000;
	int reais5 = 500;
	//moedas
	int moedas1 = 100;
	int moedas50 = 50;
	int moedas25 = 25;
	int moedas10 = 10;
	int moedas5 = 5;
	//Quantidades de notas e moedas
	//notas
	int num100 = floor(centavos / reais100);//nota de 100
	centavos -= num100 * reais100;//o valor inserido - numero de notas * nota representada = novo valor, sendo esse novo valor impossivel de dividir pela nota representada e deve ser analisada uma nota de menor valor  

	int num50 = floor(centavos / reais50);//nota de 50
	centavos -= num50 * reais50 ;

	int num20 = floor(centavos / reais20); //nota de 20
	centavos -= num20 * reais20;

 	int num10 = floor(centavos/reais10);//nota de 10
	centavos -= num10 * reais10;

	int num5 = floor(centavos / reais5);//nota de 5
	centavos -= num5 *reais5;
	//moedas
	int num1 = floor(centavos / moedas1);//moeda de 1 real
	centavos -= num1 * moedas1;

	int nummoeda50 = floor(centavos / moedas50); // moeda de 50 centavos
	centavos -= nummoeda50 * moedas50;

	int nummoeda25 = floor(centavos / moedas25);//moeda de 25 centavos
	centavos -= nummoeda25 * moedas25;

	int nummoeda10 = floor(centavos / moedas10);//moeda de 10 centavos
	centavos -= nummoeda10 * moedas10;

	int nummoeda5 = floor(centavos / moedas5);//moeda de 5 centavos
	centavos -= nummoeda5 * moedas5;

	//mostrar na tela a quantidade de notas ou moedas
	PRINT "R$100,00: " << num100 << " notas" ENDLINE
	PRINT "R$50,00: " << num50 << " notas" ENDLINE
	PRINT "R$20,00: " << num20 << " notas" ENDLINE
	PRINT "R$10,00: " << num10 << " notas" ENDLINE
	PRINT "R$5,00: " << num5 << " notas" ENDLINE
	PRINT "R$1,00: " << num1 << " moeda" ENDLINE
	PRINT "R$0,50: " << nummoeda50 << " moedas" ENDLINE
	PRINT "R$0,25: " << nummoeda25 << " moedas" ENDLINE
	PRINT "R$0,10: " << nummoeda10 << " moedas" ENDLINE
	PRINT "R$0,05: " << nummoeda5 << " moedas" ENDLINE
	return 0;
}
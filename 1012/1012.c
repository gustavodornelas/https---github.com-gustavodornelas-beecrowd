/*Escreva um programa que leia três valores com ponto flutuante de dupla precisão: A, B e C. Em seguida, calcule e mostre:
a) a área do triângulo retângulo que tem A por base e C por altura.
b) a área do círculo de raio C. (pi = 3.14159)
c) a área do trapézio que tem A e B por bases e C por altura.
d) a área do quadrado que tem lado B.
e) a área do retângulo que tem lados A e B.
Entrada

O arquivo de entrada contém três valores com um dígito após o ponto decimal.

Saída

O arquivo de saída deverá conter 5 linhas de dados.
Cada linha corresponde a uma das áreas descritas acima, sempre com mensagem correspondente e um espaço entre os dois pontos e o valor. O valor calculado deve ser apresentado com 3 dígitos após o ponto decimal.*/

#include <stdio.h>

int main (){

	double A, B, C;
	double TRI, CIR, PI, TRA, QUA, RET;

	PI = 3.14159;

	scanf ("%lf %lf %lf", &A, &B, &C);

	TRI = (A*C)/2;
	CIR = (C*C)*PI;
	TRA = ((A+B)*C)/2;
	QUA = B*B;
	RET = A*B;

	printf ("TRIANGULO: %.3f\nCIRCULO: %.3f\nTRAPEZIO: %.3f\nQUADRADO: %.3f\nRETANGULO: %.3f\n", TRI, CIR, TRA, QUA, RET);

	return 0;
}

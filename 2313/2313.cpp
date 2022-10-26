#include "bits/stdc++.h"

using namespace std;

bool validarTriangulo(int a, int b, int c)
{
	return (a + b > c && a + c > b && b + c > a) ? true : false;
}

bool trianguloRetangulo(int a, int b, int c)
{
	return (pow(a, 2) + pow(b, 2) == pow(c, 2)) ? true : false;
}

int main()
{

	int a, b, c;

	cin >> a >> b >> c;

	if (validarTriangulo(a, b, c))
	{

		if (a == b && a == c)
		{
			cout << "Valido-Equilatero" << endl;
		}
		else if (a != b && a != c && b != c)
		{
			cout << "Valido-Escaleno" << endl;
		}
		else
		{
			cout << "Valido-Isoceles" << endl;
		}

		if (trianguloRetangulo(a, b, c) || trianguloRetangulo(a, c, b) || trianguloRetangulo(b, c, a))
		{
			cout << "Retangulo: S" << endl;
		}
		else
		{
			cout << "Retangulo: N" << endl;
		}
	}
	else
	{
		cout << "Invalido" << endl;
	}

	return 0;
}
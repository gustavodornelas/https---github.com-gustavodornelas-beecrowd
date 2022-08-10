/*Faça um programa que leia um valor e apresente o número de Fibonacci correspondente a este valor lido. 
Lembre que os 2 primeiros elementos da série de Fibonacci são 0 e 1 e cada próximo termo é a soma dos 2 anteriores a ele. 
Todos os valores de Fibonacci calculados neste problema devem caber em um inteiro de 64 bits sem sinal.

Entrada
A primeira linha da entrada contém um inteiro T, indicando o número de casos de teste. 
Cada caso de teste contém um único inteiro N (0 ≤ N ≤ 60), correspondente ao N-esimo termo da série de Fibonacci.

Saída
Para cada caso de teste da entrada, imprima a mensagem "Fib(N) = X", onde X é o N-ésimo termo da série de Fibonacci.*/

#include <iostream>
#include <map>
 
using namespace std;
 
int main() {
 
    map<int, long long> fibonacci;
    int t;

    fibonacci.insert(make_pair(0, 0));
    fibonacci.insert(make_pair(1, 1));

    for (int i=2; i<=60; i++){

        long long x;

        x=fibonacci[i-1] + fibonacci[i-2];
        
        fibonacci.insert(make_pair(i, x ));

    }

    cin >> t;

    for (int i=0; i<t; i++){

        int n;

        cin >> n;

        if (fibonacci.find(n) != fibonacci.end()){
            cout << "Fib(" << n << ") = " << fibonacci[n] << endl;
        }

    }


    return 0;
}
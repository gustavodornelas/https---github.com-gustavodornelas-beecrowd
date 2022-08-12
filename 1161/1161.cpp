/*Leia dois valores inteiros M e N indefinidamente.
A cada leitura, calcule e escreva a soma dos fatoriais de cada um dos valores lidos.
Utilize uma variável apropriada, pois cálculo pode resultar em um valor com mais de 15 dígitos.

Entrada
O arquivo de entrada contém vários casos de teste. Cada caso contém dois números inteiros M (0 ≤ M ≤ 20) e N (0 ≤ N ≤ 20).
O fim da entrada é determinado por eof.

Saída
Para cada caso de teste de entrada, seu programa deve imprimir uma única linha, contendo um número que é a soma de ambos os fatoriais (de M e N).*/

#include "bits/stdc++.h"

using namespace std;

long long int fatorial (int x) {
    
    if (x <= 1){
        return 1;
    }
    
    return x * fatorial(x-1);
}


int main () {

    int m, n;

    while ((cin >> m >> n)) {
        cout << fatorial(m) + fatorial(n) << endl;
    }

    return 0;
}
/*Faça um programa que leia um vetor A[100].
No final, mostre todas as posições do vetor que armazenam um valor menor ou igual a 10 e o valor armazenado em cada uma das posições.

Entrada
A entrada contém 100 valores, podendo ser inteiros, reais, positivos ou negativos.

Saída
Para cada valor do vetor menor ou igual a 10, escreva "A[i] = x", 
onde i é a posição do vetor e x é o valor armazenado na posição, com uma casa após o ponto decimal.*/

#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main() {

    cout.precision(1);
    cout.setf(ios::fixed);

    vector<double> a;

    for (int i=0; i<100; i++){

        double x;

        cin >> x;

        a.push_back(x);

    }

    for (int i=0; i<100; i++){

        if (a[i] <= 10){
            cout << "A[" << i << "] = " << a[i] << endl;
        }

    }
    
 
    return 0;
}
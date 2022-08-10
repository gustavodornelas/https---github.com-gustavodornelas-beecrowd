/*Faça um programa que leia um valor T e preencha um vetor N[1000] com a sequência de valores de 0 até T-1 repetidas vezes, conforme exemplo abaixo. 

Imprima o vetor N.

Entrada
A entrada contém um valor inteiro T (2 ≤ T ≤ 50).

Saída
Para cada posição do vetor, escreva "N[i] = x", 
onde i é a posição do vetor e x é o valor armazenado naquela posição.*/

#include <iostream>
#include <vector>
 
using namespace std;
 
int main() {
 
    int t, j=0;
    vector <int> vetor;

    cin >> t;

    for (int i=0; i<1000; i++){
   
        if (j==t){
            j=0;
        }

        vetor.push_back(j);
        j++;

    }

    for (int i=0; i<vetor.size(); i++){

        cout << "N[" << i << "] = " << vetor[i] << endl;

    }

 
    return 0;
}
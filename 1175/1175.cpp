/*Faça um programa que leia um vetor N[20]. 
Troque a seguir, o primeiro elemento com o último, o segundo elemento com o penúltimo, etc., 
até trocar o 10º com o 11º. Mostre o vetor modificado.

Entrada
A entrada contém 20 valores inteiros, positivos ou negativos.

Saída
Para cada posição do vetor N, escreva "N[i] = Y", onde i é a posição do vetor e Y é o valor armazenado naquela posição.*/

#include <iostream>
#include <vector>
#include <stack>
 
using namespace std;
 
int main() {

    vector<int> vetor;
    stack<int> pilha;

    for (int i=0; i<20; i++){
        int x;

        cin >> x;

        pilha.push(x);
    }

    while(pilha.size()>0){
        vetor.push_back(pilha.top());
        pilha.pop();
    }

    for (int i=0; i<20; i++){
        cout << "N[" << i << "] = " << vetor[i] << endl;
    }
 
    
 
    return 0;
}
/*Neste problema você deverá ler 15 valores colocá-los em 2 vetores conforme estes valores forem pares ou ímpares. 
Só que o tamanho de cada um dos dois vetores é de 5 posições. 
ntão, cada vez que um dos dois vetores encher, você deverá imprimir todo o vetor e utilizá-lo novamente para os próximos números que forem lidos. 
Terminada a leitura, deve-se imprimir o conteúdo que restou em cada um dos dois vetores, imprimindo primeiro os valores do vetor impar. 
Cada vetor pode ser preenchido tantas vezes quantas for necessário.

Entrada
A entrada contém 15 números inteiros.

Saída
Imprima a saída conforme o exemplo abaixo.*/

#include <iostream>
#include <vector>
 
using namespace std;
 
int main() {

    vector<int> impar, par;
 
    for (int i=0; i<15; i++){
        int x;

        cin >> x;

        if (x%2!=0){
            impar.push_back(x);

            if (impar.size()==5){
                for (int j=0; j<5; j++){
                    cout << "impar[" << j << "] = " << impar[j] << endl;
                }

                impar.clear();
            }

        }else{
            par.push_back(x);

            if (par.size()==5){
                for (int j=0; j<5; j++){
                    cout << "par[" << j << "] = " << par[j] << endl;
                }

                par.clear();
            }
        }

    }

    for (int j=0; j<impar.size(); j++){
        cout << "impar[" << j << "] = " << impar[j] << endl;
    }

    for (int j=0; j<par.size(); j++){
        cout << "par[" << j << "] = " << par[j] << endl;
    }
 
    return 0;
}
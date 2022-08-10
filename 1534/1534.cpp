/*Leia um valor inteiro N que é o tamanho da matriz que deve ser impressa conforme o modelo fornecido.

Entrada
A entrada contém vários casos de teste e termina com EOF. 
Cada caso de teste é composto por um único inteiro N (3 ≤ N < 70), que determina o tamanho (linhas e colunas) de uma matriz que deve ser impressa.

Saída
Para cada N lido, apresente a saída conforme o exemplo fornecido.*/

#include <iostream>
#include <vector>
 
using namespace std;
 
int main() {
 
    int n;

    while ((cin >> n) and (n!=EOF)){

        vector <vector <int>> matriz;

        for (int i=0; i<n; i++){
                
            vector <int> temp;

            for (int j=0; j<n; j++){

                int x=0;

                if (i==j){
                    x=1;
                }
                if (i==n-j-1){
                    x=2;
                }
                if (i!=j and i!=n-j-1){
                    x=3;
                }
                
                temp.push_back(x);

            }

            matriz.push_back(temp);
        }

        for (int i=0; i<matriz.size(); i++){
            for (int j=0; j<matriz[i].size(); j++){
                cout << matriz[i][j];
            }

        cout << endl;
            
        }

    }
 
    return 0;
}
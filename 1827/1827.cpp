/*Neste programa seu trabalho é ler um valor inteiro que será o tamanho da matriz quadrada (largura e altura) que será preenchida da seguinte forma: 
a parte externa é preenchida com 0, 
a parte interna é preenchida com 1, 
a diagonal principal é preenchida com 2, 
a diagonal secundária é preenchida com 3 
e o ponto central contém o valor 4, conforme os exemplos abaixo.

20003
01110
01410
01110
30002

20000000003
02000000030
00200000300
00011111000
00011111000
00011411000
00011111000
00011111000
00300000200
03000000020
30000000002

Obs: o quadrado com '1' sempre começa na posição tamanho/3, tanto na largura quanto quanto na altura. A linha e a coluna começam em zero (0).

Entrada
A entrada contém vários casos de teste e termina com EOF (fim de arquivo. Cada caso de teste consiste de um valor inteiro ímpar N (5 ≤ N ≤ 101) que é o tamanho da matriz.

Saída
Para cada caso de teste, imprima a matriz correspondente conforme o exemplo abaixo. Após cada caso de teste, imprima uma linha em branco.*/

#include <iostream>
#include <vector>
 
using namespace std;
 
int main() {
 
    int tam;

    while((cin >> tam) and (tam!=EOF)){

        vector <vector <int > > matriz;
        int inicio, fim;

        inicio=tam/3; //dica dada pelo exercicio
        fim=tam-inicio;

        for (int i=0; i<tam; i++){  //preencher matriz com valores padroes

            vector <int> temp;
            int x;

            for (int j=0; j<tam; j++){
              
                if (i == j){
                    x=2;
                }else if (i == tam - j - 1){
                    x=3;
                }else{
                    x=0;
                }
                temp.push_back(x);
            }

            matriz.push_back(temp);
        }

        for (int i=inicio; i<fim; i++){

            for (int j=inicio; j<fim; j++){
                matriz[i][j]=1;   
            }
        }

        matriz[tam/2][tam/2]=4;

        for (int i=0; i<matriz.size(); i++){
    
            for (int j=0; j<matriz[i].size(); j++){
                cout << matriz[i][j];
            }
            cout << endl;
        }
        cout <<endl;
    }  

    return 0;
}
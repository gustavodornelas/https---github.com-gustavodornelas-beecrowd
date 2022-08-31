/*Papai Noel vai começar a fazer as suas viagens de trenó para entregar os presentes de Natal.
A SBC (Sociedade Brasileira de Carregadores) determinou que o máximo de peso de cada saco com presentes, poderá ser 50 kgs,
para que os elfos, que são "puxa-sacos" ou ajudantes de Papai Noel não fiquem com dores nas costas ao carregarem o trenó
e também para que o Papai Noel não se machuque ao entregar os brinquedos.

Uma vez que todos os brinquedos estão agrupados em pacotes,
sua tarefa é auxiliar com um programa que agrupe o máximo de brinquedos possíveis dentro do peso limite de 50 kgs.
Logo na sequência Y-URI, que é o elfo chefe, levará este saco até o trenó para que Noel possa seguir com sua viagem.

Entrada
A entrada contém vários casos de teste.
A primeira linha de entrada contém um inteiro N que é o número de casos de teste, ou melhor, o número viagens que Papai Noel irá fazer para entregar os presentes.
Cada viagem inicia com um inteiro Pac (1 < Pac < 100) que indica a quantidade de pacotes disponíveis para esta viagem.
As próximas Pac linhas irão conter dois valores inteiros cada uma, qt (1 < qt ≤ 300) e peso (1 ≤ peso ≤ 50)
que são respectivamente a quantidade de brinquedos e o peso de cada um destes pacotes, separados por um espaço em branco.

Saída
Para cada caso de teste de entrada, seu programa deverá imprimir três linhas de saída,
com mensagem correspondente conforme o exemplo abaixo, seguidas por uma linha em branco.
A primeira destas linhas deverá conter a quantidade de brinquedos que Y-URI irá carregar até o trenó.
A segunda linha conterá o peso total destes brinquedos.
A última linha, por pedido de Noel, será a quantidade de pacotes que sobraram para uma viagem futura. No segundo caso de teste abaixo,
por exemplo, foram selecionados para a viagem 106 brinquedos que estão agrupados nos pacotes com 24, 2, 3, 4, 5 e 8 kg, somando um total de 46 kg.

Para a maior quantidade de brinquedos selecionada, haverá apenas uma quantidade de peso e pacote que irá sobrar.*/

#include "bits/stdc++.h"

using namespace std;

#define MAX_PESO 50
#define MAX_PACOTE 101
#define MATRIZ_PESO 51

typedef struct pacote {

    int qt;   //quantidade
    int peso; //peso

}Pacote;

int max(int x, int y) { //Retorna o maior valor
    
    if (x > y)
        return x; 
    return y;
}

void criaMatriz(int matriz[MAX_PACOTE][MATRIZ_PESO]){

    for (int i = 0; i < MAX_PACOTE; i++) matriz[i][0] = 0; //Zerar primeira linha e primeira coluna
    for (int j = 0; j < MAX_PESO; j++) matriz[0][j] = 0;   //Zerar primeira linha e primeira coluna

}

void knapsack(int n, Pacote pac[], int matriz[MAX_PACOTE][MATRIZ_PESO]){

    int i, p; // i = itens | p = pesos

    for (i = 1; i <= n; i++) { //Percorre os Itens
        for (p = 1; p <= MAX_PESO; p++) { //Percorre os Pesos

            if (pac[i].peso > p) { //quando peso do item e maior que Peso 
                matriz[i][p] = matriz[i-1][p]; 
            } else { //quando peso do item e menor que Peso
                matriz[i][p] = max(matriz[i-1][p - pac[i].peso] + pac[i].qt, matriz[i-1][p]); //compara valor acima com valor acima no p - peso do item + valor do item atual
            }
        }
    }
}

void mochila (int n, Pacote pac[]){

    int matriz[MAX_PACOTE][MATRIZ_PESO];//Matriz para salvar os resultados

    criaMatriz(matriz); // Inicia 1 linha e primeira coluna

    knapsack(n, pac, matriz); //Resolve problema da mochila

    //Recebendo as informações de quantidade de brinquedos, peso da mochila e quantos pacotes sobraram
    int brinquedos = matriz[n][MAX_PESO]; //a quantidade de brinquedos recebe o ultimo valor da matriz
    int peso = 0;
    int sobra = n;

    for(int i = n, p = MAX_PESO; i > 0; i--){ //começa a percorrer a matriz no ultimo valor da matriz
        if(matriz[i][p] != matriz[i-1][p]){   //se o valor for diferente do valor acima
            sobra--; 
            peso += pac[i].peso;
            if(p - pac[i].peso >= 0) { //percorre as colunas p da matriz até p ser igual a 0
                p -= pac[i].peso;
            }
        }
    }
    
    //saida  
    cout << brinquedos << " brinquedos" << endl;
    cout << "Peso: " << peso << " kg" << endl;
    cout << "sobra(m) " << sobra << " pacote(s)" << endl << endl;
}

int main () {

    Pacote pacotes[MAX_PACOTE]; //vetor com pacotes armazenados
    int n;
    cin >> n; //numero de casos de teste

    while(n-- > 0) {
        int pac;
        cin >> pac; //numero de pacotes

        for (int i = 1; i <= pac; i++) { //Recebendo os pacotes
            cin >> pacotes[i].qt >> pacotes[i].peso;
        }

        mochila(pac, pacotes); //iniciando o problema da mochila com a quantidade de pacotes e o vetor de pacotes
    }

    return 0;
}
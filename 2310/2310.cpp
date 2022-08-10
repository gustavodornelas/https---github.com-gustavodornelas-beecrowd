/*Um treinador de voleibol gostaria de manter estatísticas sobre sua equipe. 
A cada jogo, seu auxiliar anota quantas tentativas de saques, bloqueios e ataques cada um de seus jogadores fez,
bem como quantos desses saques, bloqueios e ataques tiveram sucesso (resultaram em pontos). 
Seu programa deve mostrar qual o percentual de saques, bloqueios e ataques do time todo tiveram sucesso.

Entrada
A entrada é dada pelo número de jogadores N (1 ≤ N ≤ 100), seguido pelo nome de cada um dos jogadores. 
Abaixo do nome de cada jogador, seguem duas linhas com três inteiros cada.
Na primeira linha S, B e A (0 ≤ S,B,A ≤ 10000) representam a quantidade de tentativas de saques, bloqueios e ataques 
e na segunda linha, S1, B1 e A1 (0 ≤ S1 ≤ S; 0 ≤ B1 ≤ B; 0 ≤ A1 ≤ A) com o número de saques, bloqueios e ataques deste jogador que tiveram sucesso.

Saída
A saída deve conter o percentual total de saques, bloqueios e ataques do time todo que resultaram em pontos, conforme mostrado no exemplo.*/

#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

struct jogadores{

    string nome;
    pair <int, int> saque, bloqueio, ataque;

};
 
int main() {

    cout.precision(2);
    cout.setf(ios::fixed);

    vector <jogadores> time;
    int n;
    float media_s=0, media_b=0, media_a=0, total_s=0, total_b=0, total_a=0;

    cin >> n;

    for (int i=0; i<n; i++){

        jogadores temp;

        cin >> temp.nome;
        cin >> temp.saque.first >> temp.bloqueio.first >> temp.ataque.first;
        cin >> temp.saque.second >> temp.bloqueio.second >> temp.ataque.second;

        time.push_back(temp);

    } 

    for (int i=0; i<n; i++){
        total_s+=time[i].saque.first;
        total_b+=time[i].bloqueio.first;
        total_a+=time[i].ataque.first;

        media_s+=time[i].saque.second;
        media_b+=time[i].bloqueio.second;
        media_a+=time[i].ataque.second;
    }

    media_s=(media_s/total_s)*100;
    media_b=(media_b/total_b)*100;
    media_a=(media_a/total_a)*100;

    cout << "Pontos de Saque: " << media_s <<" %." << endl;
    cout << "Pontos de Bloqueio: " << media_b << " %." << endl;
    cout << "Pontos de Ataque: " << media_a << " %." << endl;
 
    return 0;
}
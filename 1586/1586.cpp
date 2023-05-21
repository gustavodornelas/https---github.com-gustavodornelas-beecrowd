#include "bits/stdc++.h"

using namespace std;

typedef struct estudantes
{
    string nome;
    int forca;
} Estudantes;

int calcularForca(const string nome)
{

    int forca = 0;

    for (char c : nome)
    {
        forca += static_cast<int>(c);
    }

    return forca;
}

long long int calcularForcaTime(vector<Estudantes> estudantes) {

    long long int forcaTime = 0, i = 1;

    for (Estudantes estudante : estudantes) {
        forcaTime += estudante.forca * i++;
    }

    return forcaTime;
}

string procurarEmpate(vector<Estudantes> estudantes)
{
    int meio, inicio, fim;
    inicio = 0;
    fim = estudantes.size() - 1;

    while (inicio <= fim) {

        meio = (inicio + fim) / 2;

        vector<Estudantes> timeA(estudantes.begin(), estudantes.begin() + meio);
        vector<Estudantes> timeB(estudantes.begin() + meio, estudantes.end());

        reverse(timeA.begin(), timeA.end());

        long long int forcaTimeA = calcularForcaTime(timeA);
        long long int forcaTimeB = calcularForcaTime(timeB);

        if(forcaTimeA == forcaTimeB)
        {
            return estudantes[meio - 1].nome;
        } else if (calcularForcaTime(timeA) > calcularForcaTime(timeB)) {
            fim = meio - 1;
        } else {
            inicio = meio + 1;
        }

    }

    return "Impossibilidade de empate.";
}

int main()
{

    int N;

    while (cin >> N && N != 0)
    {

        vector<Estudantes> estudantes;

        for (int i = 0; i < N; i++)
        {
            Estudantes aux;
            cin >> aux.nome;
            aux.forca = calcularForca(aux.nome);

            estudantes.push_back(aux);
        }

        string empateEstudante = procurarEmpate(estudantes);

        cout << empateEstudante << endl;
    }

    return 0;
}

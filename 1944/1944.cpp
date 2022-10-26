#include "bits/stdc++.h"

using namespace std;

int main()
{
    int n;

    while (cin >> n)
    {

        stack<string> palavra;
        int premiacoes = 0;

        for (int i = 0; i < n; i++)
        {
            string aux, aux2;
            if (palavra.empty())
            {
                palavra.push("F A C E");
            }

            getline(cin >> ws, aux);
            aux2 = aux;

            reverse(aux2.begin(), aux2.end());

            if (aux2 == palavra.top())
            {
                palavra.pop();
                premiacoes++;
            }
            else
            {
                palavra.push(aux);
            }
        }

        cout << premiacoes << endl;
    }
    return 0;
}
#include <iostream>
#include <cstring>
#include <vector>
#include <utility>

#include <string.h>

using namespace std;

int main () {

    int t;

    cin >> t;

    for (int i = 0; i < t; i++) {
        int m, n;
        vector <pair<string, string>> dicionario;

        cin >> m >> n;
        
        //ler dicionario
        for (int y = 0; y < m; y++) {
            
            pair <string, string> temp;

            cin >> ws;
            getline (cin, temp.first);
            getline (cin, temp.second);

            dicionario.push_back(temp);
        }

        //ler musica e comparar com dicionario
        for (int y = 0; y < n; y++) {
            string musica;
            vector <string> palavrasMusica;

            getline (cin, musica);

            size_t pos = 0;

            while((pos = musica.find(" ")) != std::string::npos ){

                palavrasMusica.push_back(musica.substr(0, pos));
                musica.erase(0, pos + 1);
            }

            for (int k = 0; k < palavrasMusica.size(); k++){
                bool traduzida = false;
                for (int l = 0; l < dicionario.size(); l++) {

                    if (palavrasMusica[k] == dicionario[l].first){
                        cout << dicionario[l].second;
                        traduzida = true;
                        break;
                    }                        
                }

                if (!traduzida){
                    cout << palavrasMusica[k];
                }
            }
        }
        cout << endl;
    }

    return 0;
}
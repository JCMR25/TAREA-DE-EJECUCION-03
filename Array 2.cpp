#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

int main() {
    array<string, 12> paises = {
        "Peru", "Uruguay", "Argentina", "Brasil", "Colombia",
        "Ecuador", "Paraguay", "Guyana", "Surinam", "Chile"
    };

    paises.at(10) = "Venezuela";
    paises[11] = "Bolivia";

    cout<<"Lista de paises completos"<<endl;
    for (const string& pais : paises) {
        cout<<pais<< " ";
    }
    cout<<endl;
    cout<<endl;

    cout<<"Paises que inician con C o P"<<endl;
    for (const string& pais : paises) {
        if (!pais.empty() && (pais[0] == 'C' || pais[0] == 'P')) {
            cout<<pais<<endl;
        }
    }
    cout<<endl;

    cout<<"Primer y ultimo elemento del arreglo"<<endl;
    cout<<"Primer pais: " <<paises.front()<<endl;
    cout<<"Ultimo pais: " <<paises.back()<<endl;
    cout<<endl;

    sort(paises.begin(), paises.end());

    cout<<"Paises ordenados alfabeticamente: ";
    for (const string& pais : paises) {
        cout<<pais<<" ";
    }
    cout<<endl;

    return 0;
}

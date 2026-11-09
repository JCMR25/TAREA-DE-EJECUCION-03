#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

int main() {
    array<int, 20> numeros = {
        21, 23, 25, 33, 45,
        41, 43, 45, 47, 51, 53, 55, 57, 61, 65,
        1, 3, 5, 9, 11
    };

    cout<<"Elementos del grupo"<<endl;
    for (int n : numeros) {
        cout<<n<<" ";
    }
    cout<<endl;

    cout<<"Elementos mayores de 20 y menores que 50"<<endl;
    for (int n : numeros) {
        if (n>20 && n<50) {
            cout<<n<<" ";
        }
    }
    cout<<endl;

    sort(numeros.begin(), numeros.end());
    cout<<"Elementos ordenados de menor a mayor"<<endl;
    for (int n : numeros) {
        cout<<n<<" ";
    }
    cout<<endl;

    cout<<"Elementos en indices impares menores de 10"<<endl;
    for (size_t i = 1; i < 10; i += 2) {
        cout<<"Indice "<<i<<": "<<numeros[i]<<endl;
    }
    cout<<endl;

    return 0;
}

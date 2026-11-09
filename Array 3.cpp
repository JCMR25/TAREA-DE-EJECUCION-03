#include <iostream>
#include <array>
#include <fstream>

using namespace std;

struct Estudiante {
    string nombre;
    int anioNacimiento;
    double gpa;
};

int main() {
    array<Estudiante, 10> estudiantes;

    estudiantes[0]={"Juan", 2000, 3.4};
    estudiantes[1]={"Maria", 2005, 2.8};

    for (int i=2; i<=3; i++) {
        cout<<"Ingrese el nombre del estudiante "<<i+1<<": ";
        cin>>estudiantes[i].nombre;
        cout<<"Ingrese el ano de nacimiento de "<<estudiantes[i].nombre<<": ";
        cin>>estudiantes[i].anioNacimiento;
        cout<<"Ingrese el GPA de "<<estudiantes[i].nombre<<": ";
        cin>>estudiantes[i].gpa;
        cout<<endl;
    }

    string nombres_base[]={"Gaby", "Patty", "Diana"};
    int nacimientos_base[]={2002, 2004, 2006};
    double gpa_base[]={3.8, 3.0, 2.9};

    estudiantes[4]={nombres_base[0], nacimientos_base[0], gpa_base[0]};
    estudiantes[5]={nombres_base[1], nacimientos_base[1], gpa_base[1]};

    ifstream archivo("datos.txt");
    if (archivo.is_open()) {
        for (int i=6; i<10; i++) {
            archivo>>estudiantes[i].nombre>>estudiantes[i].anioNacimiento>>estudiantes[i].gpa;
        }
        archivo.close();
    } else {
        cerr<<"Advertencia: No se pudo abrir el archivo 'datos.txt'. Asegurese de que exista."<<endl;
    }

    const int anioActual=2026;
    cout<<"Lista de Estudiantes 2026"<<endl;
    cout<<endl;

    for (int i = 0; i < 10; i++) {
        int edad=anioActual-estudiantes[i].anioNacimiento;
        bool calificaBeca=(estudiantes[i].gpa>=3.5);

        cout<<"Estudiante "<<(i+1)<<": "<<endl;
        cout<<"-Nombre: "<<estudiantes[i].nombre<<endl;
        cout<<"-Ano de nacimiento: "<<estudiantes[i].anioNacimiento<<endl;
        cout<<"-Edad actual: "<<edad<<" anos"<<endl;
        cout<<"-GPA: "<<estudiantes[i].gpa<<endl;
        cout<<"-Califica a beca: "<<(calificaBeca ? "SI" : "NO")<<endl;
        cout<<endl;
    }

    return 0;
}

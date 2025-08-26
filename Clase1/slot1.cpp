#include <iostream>
#include <fstream>
using namespace std;
typedef char Cadena[101];
int main() {
    int n, cod;
    Cadena nomb;
    cout<<"Ingrese numero de datos: ";
    cin>>n;
    ofstream Archivo;
    Archivo.open("Datos1.txt");
    if (Archivo) {
        for (int i=0; i<n; i++) {
            cout<<"Datos ("<<i+1<<"): "<<endl;
            cout<<"Imgrese el codigo ("<<i+1<<"): "; cin>>cod;
            cout<<"Ingrese el nombre ("<<i+1<<"): "; cin>>nomb;
            Archivo<<cod<<'\t'<<nomb<<endl;
        }
    }else {
        cout<<"Error al abrir el Archivo"<<endl;
    }
    Archivo.close();
    return 0;
}
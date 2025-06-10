#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingresar la cantidad de elementos: ";
    cin >> n;

    int numeros[n];
    
    cout << "Ingrese los " <<n<< " numeros separados por un espacio: " <<endl;
   for (int i=0; i<n; i++){
   	cin >> numeros[i];
   }

    for (int i=0; i<n-1; i++) {
        for (int j=0; j<n-i-1; j++) {
            if (numeros[j] > numeros[j+1]) {
                int num = numeros[j];
                numeros[j] = numeros[j+1];
                numeros[j+1] = num;
            }
        }
    }

    cout << "Vector ordenado: "<<endl;
    for (int i =0; i<n; i++) {
        cout << numeros[i] << " ";
    }

    return 0;
}

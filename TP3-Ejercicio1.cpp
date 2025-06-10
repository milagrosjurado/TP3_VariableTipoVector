#include <iostream>
#include <string>
using namespace std;

int main (){
	string paises[5];
	
	cout << "Ingresar 5 paises: " << endl;
	for (int i=0; i<5; i++){
		cout << "Pais" <<i+1<< ": ";
		cin >> paises[i];
	}
	
	for (int i=0; i<4; i++) {
        for (int j=0; j<4-i; j++) {
            if (paises[j]>paises[j+1]) {
                string abc = paises[j];
                paises[j] = paises[j+1];
                paises[j+1] = abc;
            }
        }
    }

	cout << "Los paises ingresados ordenados alfabeticamente: " << endl;
    for (int i=0; i<5; i++) {
        cout << paises[i] << endl;
    }
    
    return 0;
}

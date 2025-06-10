#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Ingrese cantidad de numeros: ";
    cin >> n;
    
    int vecNum[n];
    
   cout << "Ingrese los " <<n<< " numeros separados por un espacio: " <<endl;
   for (int i=0; i<n; i++){
   	cin >> vecNum[i];
   }
   
    int busNum;
    cout << "Ingrese el valor a buscar: ";
    cin >> busNum;

    bool numEnc = false;
    for (int i=0; i<n; i++){
    	if (vecNum[i]==numEnc){
    		numEnc=true;
    		break;
		}
	}
    
    if (numEnc){
    	cout << "El numero se encuentra en el vector." <<endl;
	} else {
		cout << "El numero NO se encuentra en el vector." <<endl;
	}
    
    return 0;
}

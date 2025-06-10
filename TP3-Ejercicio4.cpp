#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Ingrese la cantidad de numeros: ";
    cin >> n;

    int vecNum[n];

	cout << "Ingrese los " <<n<< " numeros separados por un espacio: " <<endl;
   for (int i=0; i<n; i++){
   	cin >> vecNum[i];
   }
    
    for (int i=0; i<n; i++){
    	int actNum = vecNum[i];
    	int j=i-1;
    	while (j>=0 && vecNum[j]>actNum){
    		vecNum[j+1] = vecNum[j];
    		j--;
		}
		vecNum[j+1] = actNum;
	}
	
	cout << "El vector ingresado de manera ordenada: " <<endl;
	
	for (int i=0; i<n; i++){
		cout << vecNum[i] << " ";
	}

    return 0;
}

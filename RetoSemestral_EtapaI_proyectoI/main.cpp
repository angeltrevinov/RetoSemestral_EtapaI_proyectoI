/*
    Angel Odiel Treviño Villanueva
    A01336559
    Estructura de Datos
    Reto Semestral
    Etapa I 
    Reto Array Manipulation
*/


#include <iostream>

using namespace std;

void O(int a, int b, int k, int array[100], int n){
    for(int i = a; i < b; i++){
		array[i] = array[i] + k;
	}
}

int main() {
    
	int n; // the number of values 
	int m; // the number of operations
	int a, b, k; // a from what position to start, b from what position to stop and k what number to add

	cin >> n; 
	cin >> m; 

	int array[100]; 

	int cont = 0; 

	while(cont < m){
        
        cin >> a >> b >> k;
		O(a, b, k, array, n); 
		cont++; 
	}

	int mayor = 0;
	for(int i = 0; i < n; i ++){
		if(mayor < array[i])
			mayor = array[i];
	} 

	cout << mayor <<endl; 

    return 0;
}

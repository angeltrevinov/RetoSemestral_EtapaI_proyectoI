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

void O(long a, long b, long k, long array[10^7], long n){
    if(a > 0){
        a--;
    }
    for(long i = a; i < b; i++){
		array[i] = array[i] + k;
	}
}

int main() {
    
	long n; // the number of values
	long m; // the number of operations
	long a, b, k; // a from what position to start, b from what position to stop and k what number to add
    
    cin >> n;
	cin >> m;

    long array[10^7] = {0};

	int cont = 0; 

	while(cont < m){
        cin >> a >> b >> k;
		O(a, b, k, array, n);
		cont++; 
	}

	long mayor = 0;
	for(int i = 0; i < n; i ++){
		if(mayor < array[i])
			mayor = array[i];
	} 

	cout << mayor <<endl; 

    return 0;
}

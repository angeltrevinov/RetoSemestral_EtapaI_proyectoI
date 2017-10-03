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

int main() {
    
	long n; // the number of values
	long m; // the number of operations
	long a, b, k; // a from what position to start, b from what position to stop and k what number to add
    
    cin >> n >> m;

    long array[10^7] = {0};

    for(int i = 0; i < m; i++){
        cin >> a >> b >> k;
        array[a] += k;
        if((a+1) <= n ){
            array[a+1] -= sum;
        }
	}

	long mayor = 0;
	for(int i = 0; i < n; i ++){
		if(mayor < array[i])
			mayor = array[i];
	} 

	cout << mayor <<endl; 

    return 0;
}

    

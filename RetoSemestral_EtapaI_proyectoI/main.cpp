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
    long int n,m,a,b,sum, max=0,x=0;
    
    cin>>n>>m; // n is how many digits and m how many instructions
    long int *array=new long int[n+1](); //here it creates  the array
    
    for(int i=0;i<m;i++){
        
        cin>>a>>b>>sum; //a start, b end, the sum to add
        array[a]+=sum; //adding the sum to that position and putting it in the sum
        if((b+1)<=n)
            array[b+1]-=sum;
    }
    
    //find the maximum value in the array
    for(int i=1;i<= n;i++){
        x=x+array[i];
        if(max<x)
            max=x;
        
    }
    
    cout<<max;
    return 0;
}

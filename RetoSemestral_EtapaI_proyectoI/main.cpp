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
    long int n,m, a, b, k, max=0;
    
    cin>>n>>m;
    
    long int *array=new long int[n+1]();
    
    for(long int i=0; i<m; i++){
        
        cin>>a>>b>>k;
        array[a]+=sum;
        if((b+1)<=n)
            array[b+1]-=sum;
    }
    
    for(i=1;i<=n;i++){
        
        if(max< array[i])
            max=array[i];
        
    }
    
    cout<<max;
    return 0;
}

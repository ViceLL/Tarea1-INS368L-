//
//  main.cpp
//  INS368LTarea1
//
//  Created by Vicente Fernando Vargas Grullon on 5/11/21.
//

#include <iostream>
using namespace std;

int main()
{
    int n, x = 0, y = 1, z = 1, digito;
    bool primo = true;
    
    cout << "Ingrese hasta que elemento quiere mostrar de la sucesion de fibonacci: "; cin >> n;
    
    cout << "\nSerie de Fibonacci: \n";
    
    //cout << "1, "; //Imprime el 1 primero porque la serie de fibonacci empieza 1 1 2 3 5
    
    for(int i = 1; i <= n; i++)
    {
        z = x + y; // 1 2 3 5. Z es igual a la sumatoria de x y
        y = x; // 1 1 2.
        x = z; // 1 2 3.    "x" tomara el valor de "y" y "y" tomara el valor de z
        
        
        cout << z << " - "; // 1 2 3 5
        
        if (z % 2 == 0)
        {
            cout << " Par; ";
        }
        else
        {
            cout << " Impar; ";
        }
        
        for(int i = 2; i < n; i++)
        {
            if(z % i == 0) primo = false;
        }
        if(primo == true)
        {
            cout << "es primo; \n";
        }
        else
        {
            cout << "no es primo; \n";
        }
        
    }
    
    return 0;
}

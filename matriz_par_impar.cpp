/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
    
    int matriz[3][3],i,j,nump=0,numi=0;
    
    
    //SE LE PIDE AL USUARIO POBLAR LA MATRIZ.
    cout << "ingrese valores deseados." << endl;
    for(int i=0;i<3;i++){//filas
        for(int j=0;j<3;j++){//columnas
            
            cin >> matriz[i][j];
        }
    }
    //SE LE MUESTRA A USUARIO LA MATRIZ.
    cout << "impresion de datos: " << endl;
    for(int i=0;i<3;i++){//filas
        for(int j=0;j<3;j++){//columnas
            
            cout << matriz[i][j] <<" ";
        }
         cout << endl;
    }
    
    //CALCULANDO LA CANTIDAD DE VALORES IMPARES Y PARES DE LA MATRIZ.
    for(int i=0;i<3;i++){//filas
        for(int j=0;j<3;j++){//columnas
            
            if(matriz[i][j]%2==0){
                
                nump++;
                
            }else{
                numi++;
            }
        }
         cout << endl;
    }
    
    cout << "cantidad de numeros pares en la matriz: " << nump <<endl;
    
    cout << "cantidad de numeros impares en la matriz: " << numi <<endl;
    
    return 0;
}
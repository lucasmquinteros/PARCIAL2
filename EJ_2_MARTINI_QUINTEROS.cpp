#include <iostream>
using namespace std;

int main(){


/**
## Ejercicio n°2: Suma de 2 matrices

#### Escribe un programa que:

- [*]Solicite al usuario las dimensiones de dos matrices (número de filas y columnas)
- [*]asegurándose de que ambas matrices tengan las mismas dimensiones.
- [*]Permita al usuario ingresar los elementos de ambas matrices.
- [*]Sume las dos matrices y almacene el resultado en una tercera matriz.
- [*]Imprima la matriz resultante.



`si la matrices se llenan con los elementos`
`1 2 3 4 5 6 7 8 9`
`9 8 7 6 5 4 3 2 1`
### *Resultado esperado:*
```
    La suma de las matrices es:
    10 10 10
    10 10 10
    10 10 10
```*/

int filas,columnas,filas2,columnas2;

cout << "ingrese la cantidad de filas de la primera matriz: ";
cin >> filas;

cout << "ingrese la cantidad de columnas de la primera matriz: ";
cin >> columnas;


cout << "ingrese la cantidad de filas de la segunda matriz: ";
cin >> filas2;


cout << "ingrese la cantidad de columnas de la segunda matriz: ";
cin >> columnas2;


if(filas != filas2 || columnas != columnas2){
        cout << "ingrese el mismo valor de las filas y columnas en ambas matrices porfavor " << endl;
    while (filas != filas2 || columnas != columnas2){
        cout << "ingrese la cantidad de filas de la primera matriz: ";
        cin >> filas;

        cout << "ingrese la cantidad de columnas de la primera matriz: ";
        cin >> columnas;


        cout << "ingrese la cantidad de filas de la segunda matriz: ";
        cin >> filas2;


        cout << "ingrese la cantidad de columnas de la segunda matriz: ";
        cin >> columnas2;
    }
}
int matriz1[filas][columnas];
int matriz2[filas2][columnas2];
int suma[filas][columnas];
for(int i=0; i < filas; i++){
    for(int j=0; j < columnas;j++){
        cout << "ingrese un valor para la matriz 1 en la posicion [" << i << "] [" << j << "]: ";
        cin >> matriz1[i][j];
        cout << endl;
        cout << "ingrese un valor para la matriz 2 en la posicion [" << i << "] [" << j << "]: ";
        cin >> matriz2[i][j];
        cout << endl;
    }
}
for (int i=0;i < filas; i++){
    for(int j=0; j < columnas;j++){
        suma[i][j] = matriz1[i][j] + matriz2[i][j];
    }
}
for (int i=0;i < filas; i++){
    for(int j=0; j < columnas; j++){

    cout << suma[i][j] << " ";


    }
    cout << endl;
}


return 0;
}

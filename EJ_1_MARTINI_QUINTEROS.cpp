#include <iostream>
#include <vector>
using namespace std;

int main(){
/*## Ejercicio n°1: Metodos de array

#### Escribe un programa que realice las siguientes operaciones:

Crea un array inicial con 5 elementos enteros.
- Agrega dos elementos nuevos al final del array.
- Elimina el tercer elemento del array.
- Muestra el array original y el array modificado después de cada operación.

#### *Resultado esperado:*
```
Array inicial: 10 20 30 40 50
Array después de agregar dos elementos: 10 20 30 40 50 60 70
Array después de eliminar el tercer elemento: 10 20 40 50 60 70
``` */

vector<int>arry = {1, 2, 3, 4, 5};


vector<int>nuevoArry = {1, 2, 3, 4, 5};

nuevoArry.push_back(6);
nuevoArry.push_back(7);


for(int i=0; i < arry.size(); i++){
    cout << arry[i] << " ";
}
cout << endl;
for(int i=0; i < nuevoArry.size(); i++){
    cout << nuevoArry[i] << " ";
}


return 0;
}

#include <iostream>
#include <vector>
using namespace std;


bool asientosDisponibles(int cliente, vector<int>asientos){

    for (int i=0; i < asientos.size(); i++){
            if(asientos[i] == cliente){
                return true;
            }
    }
    return false;
}


int main(){

/**
## Ejercicio n°3: Asientos disponibles

[+]Nos piden que escribamos la función asientosDisponibles(),
[+]que tome como parámetro un conjunto de asientos disponibles y el asiento que quiere ocupar la persona.
[+] Nuestra función deberá verificar si el asiento solicitado se encuentra disponible y
[] devolverle un mensaje claro y prolijo al cliente.
#### *Resultado esperado:*
```
Asientos disponibles: 15, 28, 44, 45, 70
Ingrese el número del asiento que desea ocupar: 28
Felicitaciones, el asiento número 28 está disponible
```

```
Asientos disponibles: 15, 28, 44, 45, 70
Ingrese el número del asiento que desea ocupar: 5
Lo sentimos, el asiento número 5 está ocupado, pero aún quedan 5 asientos disponibles: 15, 28, 44, 45, 70
*/
    vector<int>asientos = {15, 28, 44, 45, 70};
    int cliente;

    cout << "Por favor ingrese el numero de asiento que desea ocupar: ";
    cin >> cliente;

    if(asientosDisponibles(cliente, asientos)){
        cout << "Felicitaciones, el asiento numero " << cliente << " esta disponible";
    }else{
    cout << "lo sentimos el asiento numero " << cliente << " esta ocupado, aunque todavia nos quedan los asientos: ";
    for(int i=0; i < asientos.size(); i++){
        cout << asientos[i] << ", ";
        }
    }
    return 0;
}

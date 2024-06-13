#include <iostream>
#include <vector>
#include <string>
using namespace std;

string miniCompilador(const string& secretMessage){
    int valorDescifrado = 0;
    string resultado;
    for(int i =0; i < secretMessage.size(); i++){
        switch (secretMessage[i]){
        case '#':
            valorDescifrado = valorDescifrado + 1;
            break;
        case '@':
            valorDescifrado = valorDescifrado - 1;
            break;
        case '*':
            valorDescifrado = valorDescifrado * valorDescifrado;
            break;
        case '&':
            resultado += to_string(valorDescifrado);
            break;

        }
    }
return resultado;

}

int main(){
    /**
## Ejercicio n�4: mini-compilador
#### Escribe un programa que:

-[+] Implementa una funci�n `string miniCompilador(const string& secretMessage)` que tome una cadena `secretMessage` como entrada y devuelva una cadena con el resultado de las operaciones.
-[+] El programa debe inicializar el valor num�rico a 0.
-[+] El programa debe ejecutar las operaciones en el orden en que aparecen en la cadena.
-[+] Si el s�mbolo es &, el programa debe agregar el valor num�rico actual a la cadena de resultados.
-[+] El programa debe manejar entradas largas y realizar las operaciones correctamente.

#### Las operaciones del lenguaje son las siguientes:
>"#" Incrementa el valor num�rico en 1.
>
>"@" Decrementa el valor num�rico en 1.
>
>"*" Multiplica el valor num�rico por s� mismo.
>
>"&" Imprime el valor num�rico actual.
>
>El valor num�rico inicial es 0 y las operaciones deben aplicarse en elorden en que aparecen en la cadena de s�mbolos.

**Ejemplos de entrada:**
```
Entrada: "##*&"
Salida esperada: "4"
Explicaci�n: Incrementa (1), incrementa (2), multiplica (4), imprime (4).
```
```
Entrada: "&##&*&@&"
Salida esperada: "0243"
Explicaci�n: Imprime (0), incrementa (1), incrementa (2), imprime (2), multiplica (4), imprime (4), decrementa (3), imprime (3).
```

1. Resuelve el mensaje que se te muestra a continuaci�n
`&###@&*&###@@##@##&######@@#####@#@#@#@##@@@@@@@@@@@@@@@*&&@@@@@@@@@####@@@@@@@@@#########&#&##@@##@@##@@##@@##@@##@@##@@##@@##@@##@@##@@##@@##@@##@@##@@&`

2. Crea un programa al que le pases como entrada el mensaje anterior.

El resultado ser�  `024899455`*/

string secretMessage = "&###@&*&###@@##@##&######@@#####@#@#@#@##@@@@@@@@@@@@@@@*&&@@@@@@@@@####@@@@@@@@@#########&#&##@@##@@##@@##@@##@@##@@##@@##@@##@@##@@##@@##@@##@@##@@##@@&";

string valorDescifrado = miniCompilador(secretMessage);
cout << "El valor descifrado es: ";
for(int i=0; i < valorDescifrado.size(); i++){
    cout << valorDescifrado[i];
}

return 0;
}

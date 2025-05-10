//
// Created by lufe0 on 8/05/2021.
//

#include "DosColores.h"

float DosColores::jugar(float gonzosApostar) {
    float gonzosResultado;
    srand(time(nullptr));
    int numMaxRandom = 7;
    int numMinRandom = 1;
    // para calcular numero aleatorio variable = limite_inferior + rand() % (limite_superior +1 - limite_inferior) ;
    numeroJugador = numMinRandom + rand() % numMaxRandom;// numeros de 1 a 13
    numeroCasino = numMinRandom + rand() % numMaxRandom;// numeros de 1 a 13
    colorCasino = rand() % 2; // Numero entre 0 y 1
    cout << "Tu numero aleatorio es: " << numeroJugador << endl;
    cout << "Elije un color: " << endl;
    cout << "1. Blanco" << endl;
    cout << "2. Negro" << endl;
    cin >> colorJugador;
    --colorJugador; // Se ajusta el valor del color
    cout << "Numero casino: " << numeroCasino << endl;
    cout << "Color casino: ";
    if (colorCasino == 0) {
        cout << "Blanco." << endl;
    } else {
        cout << "Negro." << endl;
    }
    gonzosResultado = calcularResultado(gonzosApostar);
    return gonzosResultado;
}

float DosColores::calcularResultado(float gonzosApostar) {
    float lowestResult = 0;
    float maxResult = 4;
    float midResult = 1.5;

    // Si coincide tanto el valor del dado como el color, el usuario ganará 4 veces lo apostado
    if (numeroJugador == numeroCasino && colorJugador == colorCasino) {
        return maxResult * gonzosApostar;
    }
        // coincide sólo con el valor del dado ganará 0.5 veces lo apostado
    else if (numeroJugador == numeroCasino) {
        return midResult * gonzosApostar;
    }
        // no gana ni pierde
    else if (colorJugador == colorCasino) {
        return gonzosApostar;
    }
        // pierde lo apostado
    else {
        return lowestResult;
    }
}
void DosColores::mostrarReglas() {
    cout << "=== REGLAS DE DOS COLORES ===" << endl;
    cout << "1. El jugador recibe un número aleatorio entre 1 y 7." << endl;
    cout << "2. El jugador debe elegir un color: Blanco o Negro." << endl;
    cout << "3. El casino genera un número aleatorio y un color." << endl;
    cout << "4. Si coinciden tanto el número como el color, el jugador gana 4 veces lo apostado." << endl;
    cout << "5. Si solo coincide el número, el jugador gana 1.5 veces lo apostado." << endl;
    cout << "6. Si solo coincide el color, el jugador recupera su apuesta (ni gana ni pierde)." << endl;
    cout << "7. Si no coincide ni el número ni el color, el jugador pierde toda su apuesta." << endl;
}
/* Como el constructor se definio por defecto no hay que poner constructo vacio
DosColores::~DosColores() {

}
/* Como el constructor se definio por defecto no hay que poner constructo vacio
DosColores::~DosColores() {

}
*/
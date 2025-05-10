//
// Created by alexb on 07/05/2025.
//

#include "CaraOSello.h"

float CaraOSello::jugar(float gonzosApostar) {
    float gonzosResultado;

    cout << "=== CARA O SELLO ===" << endl;
    cout << "Elija su opción:" << endl;
    cout << "0. Cara" << endl;
    cout << "1. Sello" << endl;
    cout << "Opción: ";
    cin >> eleccionJugador;

    // Validar entrada
    if (eleccionJugador != 0 && eleccionJugador != 1) {
        cout << "Opción inválida. Se seleccionará Cara (0) por defecto." << endl;
        eleccionJugador = 0;
    }

    // Lanzar la moneda (0 = Cara, 1 = Sello)
    srand(time(nullptr));
    numeroCasino = rand() % 2;

    // Mostrar resultado
    cout << "La moneda muestra: " << (numeroCasino == 0 ? "Cara" : "Sello") << endl;

    // Calcular resultado
    gonzosResultado = calcularResultado(gonzosApostar);
    return gonzosResultado;
}

float CaraOSello::calcularResultado(float gonzosApostar) {
    float winMultiplier = 1.8; // Ganancia de 1.8 veces lo apostado

    if (eleccionJugador == numeroCasino) {
        cout << "¡Has ganado!" << endl;
        return winMultiplier * gonzosApostar;
    } else {
        cout << "Has perdido." << endl;
        return 0;
    }
}

void CaraOSello::mostrarReglas() {
    cout << "=== REGLAS DE CARA O SELLO ===" << endl;
    cout << "1. El jugador debe elegir entre Cara (0) o Sello (1)." << endl;
    cout << "2. Se lanza una moneda virtual." << endl;
    cout << "3. Si la elección del jugador coincide con el resultado de la moneda, gana 1.8 veces lo apostado." << endl;
    cout << "4. Si no coincide, pierde toda su apuesta." << endl;
    cout << "5. Es un juego simple de suerte con probabilidad cercana al 50%." << endl;
}

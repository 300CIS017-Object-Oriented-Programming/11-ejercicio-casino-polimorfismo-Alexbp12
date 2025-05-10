//
// Created by alexb on 07/05/2025.
//

#ifndef CASINO_CARAOSELLO_H
#define CASINO_CARAOSELLO_H

#include "Juego.h"
#include<cstdlib>
#include<ctime>

class CaraOSello : public Juego {
protected:
    int eleccionJugador; // 0 para Cara, 1 para Sello
    float calcularResultado(float gonzosApostar) override;

public:
    ~CaraOSello() override = default;
    float jugar(float gonzosApostar) override;
    void mostrarReglas() override;
};

#endif //CASINO_CARAOSELLO_H
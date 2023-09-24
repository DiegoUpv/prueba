#include "BrazoRobotico.h"


BrazoRobotico::BrazoRobotico(double initialX, double initialY, double initialZ) {
    x = initialX;
    y = initialY;
    z = initialZ;
    sujetaObjeto = false;
}


double BrazoRobotico::getX() const {
    return x;
}

double BrazoRobotico::getY() const {
    return y;
}

double BrazoRobotico::getZ() const {
    return z;
}

bool BrazoRobotico::estaSujetando() const {
    return sujetaObjeto;
}


void BrazoRobotico::coger() {
    sujetaObjeto = true;
}

void BrazoRobotico::soltar() {
    sujetaObjeto = false;
}

void BrazoRobotico::mover(double newX, double newY, double newZ) {
    x = newX;
    y = newY;
    z = newZ;
}

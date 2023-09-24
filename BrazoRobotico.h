#ifndef BRAZOROBOTICO_H
#define BRAZOROBOTICO_H

class BrazoRobotico {
private:
    double x;
    double y;
    double z;
    bool sujetaObjeto;

public:
   
    BrazoRobotico(double initialX, double initialY, double initialZ);

   
    double getX() const;
    double getY() const;
    double getZ() const;
    bool estaSujetando() const;

    
    void coger();
    void soltar();
    void mover(double newX, double newY, double newZ);
};

#endif 

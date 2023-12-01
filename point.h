//point.hpp
//ComposicionTriangulo
//
//Juan Iza and Pablo Morales

#ifndef POINT_H
#define POINT_H

#include <string>
#include <math.h>

class point{

    public:
    //métodos constructores
    point();
    point(double _x,  double _y);

    //métodos de acceso
    double getX();
    double getY();

    //métodos modificadores
    void setX(double _x);
    void setY(double _y);

    //otros métodos
    double calculaDistancia(point p2);
    std::string str();

    private:
        double x, y;
};

#endif // POINT_H

//triangulo.hpp
//composiciosn triangulo
//Juan Iza and Pablo Morales

#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "point.h"


class triangle
{
    public:
        //métodos constructores
        triangle();
        triangle(point _v1, point _v2, point _v3);

        //métodos get
        point getVertice1();
        point getVertice2();
        point getVertice3();

        //métodos set -
        void setVertice1(point _v1);
        void setVertice2(point _v2);
        void setVertice3(point _v3);

        //otros métodos
        double perimetro();
        double area();
        std::string str();


    private:
        point v1,v2,v3;
};

#endif // TRIANGLE_H

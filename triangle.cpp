#include "triangle.h"

triangle::triangle()
{
    v1 = point(0, 0);
    v2 = point(50, 30);
    v3 = point(25, 10);
}

triangle::triangle(point _v1, point _v2, point _v3){
    v1 = _v1;
    v2 = _v2;
    v3 = _v3;
}

point triangle::getVertice1(){
    return v2;
}
point triangle::getVertice2(){
    return v2;
}
point triangle::getVertice3(){
    return v2;
}
void triangle::setVertice1(point _v1){
    v1 = _v1;
    _v1 = v2;
}
void triangle::setVertice2(point _v2){
    v2 = _v2;
}
void triangle::setVertice3(point _v3){
    v3 = _v3;
}
double triangle::perimetro(){
    return v2.calculaDistancia(v1)+v3.calculaDistancia(v2)+ v1.calculaDistancia(v3);
}
double triangle::area(){
return 1.0/2 * abs(((v1.getX()*v2.getY())+(v2.getX()*v3.getY())+(v3.getX()*v1.getY())- ((v1.getX()*v3.getY())+(v3.getX()*v2.getY())+(v2.getX()*v1.getY()))));
}

std::string triangle::str(){
    return v1.str()+','+ v2.str()+','+v3.str();
}

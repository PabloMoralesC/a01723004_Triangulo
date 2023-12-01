//composición triangulo
// main.cpp
//Juan Iza and Pablo Morales

#include <iostream>
#include "triangle.h"
#include <string>
using namespace std;

//desplegar el contenido del arrgelo
void desplegarArregloTriangle(triangle arrTriangulos[], int iS){

    for(int indice = 0; indice< iS; indice++){
        cout << indice << "."<< arrTriangulos[indice].str() << endl;
    }
}

void leerArregloTriangle(triangle arrTriangulos[], int iS){
    double x1,y1,x2,y2,x3,y3;
    point pto;

    for(int indice = 0; indice< iS; indice++){
        cout << "Ingresa los 3 coordenas x,y y de los vertices del Triangulo"<< indice << ':';
        cin >> x1>>y1>>x2>>y2>>x3>>y3;

        pto.setX(x1);
        pto.setY(y1);

        cout << pto.str()<< endl;
        arrTriangulos[indice].setVertice1(pto);

        cout<<pto.str()<<endl;

        pto.setX(x2);
        pto.setY(y2);
        arrTriangulos[indice].setVertice2(pto);

        pto.setX(x3);
        pto.setY(y3);
        arrTriangulos[indice].setVertice3(pto);
    }
}

void calculaPerimetroArea(triangle arrTriangulos[], int iS){
    for(int indice = 0; indice< iS; indice++){
        cout << "Triangulo" << indice << ".\nPerimetro =" <<
        arrTriangulos[indice].perimetro()<<
        "\nArea = "<<
        arrTriangulos[indice].area()<<endl;
    }
}

int main()
{
    point p1{-5, -5}, p2{1, 3}, p3{4, 6};
    point p4{-2, -3}, p5{5, -4}, p6{-1, 3};
    point p7{-2, -3}, p8{5, -4}, p9{-1,3};
    triangle tri1{p4,p5,p6}, tri2{p1,p2,p3}, tri3{p7,p8,p9};
    string nombre;
    int edad;
    //declaración del arreglo de triangulos
    triangle arrT[100];

    //llamar a la función desplegarArregloTriangulo
    desplegarArregloTriangle(arrT, 100);
    leerArregloTriangle(arrT, 2);
    desplegarArregloTriangle(arrT, 5);
    calculaPerimetroArea(arrT, 5);

    //ejemplo del método getline() y cin.ignore
    for (int alumnos= 1; alumnos<4; alumnos++){
        cout<< "Ingresa tu nombre: ";
        getline(cin, nombre);
        cout<<nombre<<endl;
        cout<<"Ingresa tu edad: ";
        cin>>edad;
        cin.ignore();
    }
    return 0;
}
//constructores

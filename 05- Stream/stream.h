// Tipo Color: Implementación, Parte Pública
#ifndef BANDERA_DE_QUE_YA_SE_INCLUYO_EL_HEADER_DEL_TIPO_STREM
#define BANDERA_DE_QUE_YA_SE_INCLUYO_EL_HEADER_DEL_TIPO_STREAM

#include <iostream>
#include <array>
#include <string>

using namespace std;

    struct Color {uint8_t R, G, B;};     
    struct Punto {double x, y;};
    struct Poligono { unsigned p; array<Punto, 50> puntospol; Color colorpol;}; //p marca la cantidad de puntos que tiene el polígono
    //n marca la cantidad máxima posible de puntos
    bool ExtraerPoligono (Poligono&, ifstream&);
    bool ExtraerPuntos (Poligono&, ifstream&);
    bool ExtraerColor (Poligono&, ifstream&);
    void AddVertice (Poligono&, Punto); // Nueva version. La de la tarea de Poligonos anterior no servia, ya que solo agregaba al final.   
    bool EnviarPoligono (Poligono&, ofstream&);
    bool EnviarColor (Poligono&, ofstream&);
    bool EnviarPuntos (Poligono&, ofstream&);    

#endif
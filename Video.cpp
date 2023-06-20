#include <iostream>
#include "Video.h"
using namespace std;

void Video::MuestraDatos(){
    cout << "\nTipo: " << tipo << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Genero: " << genero << endl;
    cout << "Calificacion: " << calificacion << endl;
    cout << "Ano de lanzamineto: " << anioLanzamiento << endl;
    cout << "Duración: " << duracion << " min" << endl;
};

void Video::setCalif( int _calificacion){
    if (_calificacion<0){
        calificacion=0;
    }
    else if (_calificacion>5){
        calificacion=5;
    }
    else{
        calificacion = _calificacion;
    }
};

string Video::getNombre(){
    return nombre;
}

int Video::getCalif(){
    return calificacion;
}

void Video::obtener(int _num){
    cout<<0<<endl;
}
//............................................
void Pelicula::obtener(int _nominaciones){
    nominaciones = _nominaciones; 
};

string Pelicula::getNombre(){
    return nombre;
}

int Pelicula::getCalif(){
    return calificacion;
}


void Pelicula::MuestraDatos(){
    Video::MuestraDatos();
    cout << "Nominaciones: " << nominaciones << endl;
};

//............................................
void Serie::obtener(int _cantEspisodios){
    cantEspisodios = _cantEspisodios; 
};

string Serie::getNombre(){
    return nombre;
}

int Serie::getCalif(){
    return calificacion;
}

void Serie::MuestraDatos(){
    Video::MuestraDatos();
    cout << "Cantidad de episodios: " << cantEspisodios << endl;
};




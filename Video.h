#include <iostream>
using namespace std;

class Video{
    public:
        Video (string _tipo, string _nombre, string _genero, int _calificacion, int _anioLanzamiento, int _duracion){
            tipo= _tipo;
            nombre= _nombre;
            genero= _genero;
            calificacion= _calificacion;
            anioLanzamiento= _anioLanzamiento;
            duracion= _duracion;
        }
        virtual void MuestraDatos();
        virtual string getNombre();
        virtual int getCalif();
        virtual void obtener(int);
        void setCalif(int);
    protected:
        string tipo;
        string nombre;
        string genero;
        int calificacion;
        int anioLanzamiento;
        int duracion;
};

class Pelicula : public Video{
    public:
        Pelicula(string _tipo, string _nombre, string _genero, int _calificacion, int _anioLanzamiento, int _duracion):Video( _tipo, _nombre, _genero, _calificacion, _anioLanzamiento, _duracion){};
        void obtener(int);
        void MuestraDatos();
        void setCalif(int);
        string getNombre();
        int getCalif();
    private:
        int nominaciones;
};

class Serie : public Video{
    public:
        Serie( string _tipo, string _nombre, string _genero, int _calificacion, int _anioLanzamiento, int _duracion):Video(_tipo, _nombre, _genero, _calificacion, _anioLanzamiento, _duracion){};
        void obtener(int);
        void MuestraDatos();
        string getNombre();
        int getCalif(); 
    private:
        int cantEspisodios;
};
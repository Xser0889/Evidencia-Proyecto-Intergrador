#include <iostream>
#include "Video.h"
using namespace std;

int main(){
    
    Video * pArray[5];
    
    pArray[0] = new Pelicula("Pelicula", "Batman", "ciencia ficcion", 4, 2012, 120);
    pArray[0] -> obtener(6);

    pArray[1] = new Pelicula("Pelicula", "Avenger", "ciencia ficcion", 3, 2015, 140);
    pArray[1] -> obtener(3);

    pArray[2] = new Pelicula("Pelicula", "StarWars3", "ciencia ficcion", 4, 2012, 140);
    pArray[2] -> obtener(7);

    pArray[3] = new Serie("Serie", "Flash", "fantasia", 2 ,2011, 60);
    pArray[3] -> obtener(171);

    pArray[4] = new Serie("Serie", "Mandalorian", "ciencia ficcion", 5 ,2019, 60);
    pArray[4] -> obtener(16);

    bool menu = true;
    int n;
    cout << "\n\n************************************************" << endl;
    while (menu){ 
    cout<<"\nMenú:\n------------------------------------------------" << endl;
    cout <<"\n1.\tMostrar los videos en general "<< endl;
    cout << "2.\tMostrar las series con una calificación determinada" << endl;
    cout << "3.\tMostrar las películas con cierta calificación" << endl;
    cout << "4.\tCalificar un video" <<endl;
    cout << "5.\tSalir" <<endl;
    cout << "\n************************************************" << endl;
    cout << endl << "Ingresa el número de la opción que quieres: ";
    cin >> n;

    if (n == 1){
        cout << "\n\n************************************************" << endl;
        cout << endl << "\nVideos:"<< endl;
        for (int i=0; i<=4;i++){
            pArray[i] -> MuestraDatos();
            cout << endl<<endl;
        }
        cout << "\n************************************************" << endl;
    } 

    else if (n == 2){
        cout << "\n\n************************************************" << endl;
        bool temp=false;
        int _calificacion;
        cout << "Ingresa la calificacion de búsqueda: ";
        cin>>_calificacion;
        cout<<"\nSeries:"<<endl;
        for (int i=3; i<=4; i++){
            if (_calificacion == pArray[i]-> getCalif()){
                pArray[i] -> MuestraDatos();
                cout<<endl;
                temp=true;
            }
        }
        if(temp==false){
            cout<<"\nNo se encontraron resultados"<<endl<<endl;
        }
        cout << "\n************************************************" << endl;
    } 
    
    else if (n == 3){
        cout << "\n************************************************" << endl;
        bool temp=false;
        int _calificacion;
        cout << "Ingresa la calificacion de búsqueda: ";
        cin>>_calificacion;
        cout<<"\nPelícula:"<<endl;
            for (int i=0; i<=2; i++){
                if (_calificacion == pArray[i]-> getCalif()){
                    pArray[i] -> MuestraDatos();
                    cout<<endl;
                    temp=true;
                }
            }
        if(temp==false){
            cout<<"\nNo se encontraron resultados"<<endl<<endl;
            }
        cout << "\n************************************************" << endl;
    } 
    
    else if (n == 4){
        cout << "\n\n************************************************" << endl;
        bool temp =false;
        string nVideo;
        int _calificacion;
        cout << "¿Que video deseas calificar?: ";
        cin>>nVideo;
        for (int i=0; i<5; i++){
            if (pArray[i]->getNombre()==nVideo){
                cout << "Ingresa calificación: ";
                cin >> _calificacion;
                pArray[i] -> setCalif(_calificacion);
                pArray[i] -> MuestraDatos();
                temp=true;
                cout << endl;
                } 
            }
        if(temp==false){
            cout<<"\nNo se encontraron resultados"<<endl<<endl;
        } 
        cout << "\n************************************************" << endl;
    }

    else if( n== 5){
        cout << "\n********************Saliendo********************" << endl;
        menu = false;
    } 
    
    else {
        cout << "\n\n************************************************" << endl;
        cout << "\nIngrese una opcion que esta en el menu"<<endl;
        cout << "\n************************************************" << endl;
        }
    }
}
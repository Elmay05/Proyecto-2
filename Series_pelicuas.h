#ifndef SERIES_PELICUAS_H_INCLUDED
#define SERIES_PELICUAS_H_INCLUDED


#include <iostream>
#include <string>
#include <sstream>
#include "Contenido.h"
/*
 *Proyecto Miavie clase Contenido
 *Omar Emilio Casillas Alday
 *A01712114
 *07/06/2024
 *Esta clase define los objetos de tipo Pelicula y Serie
 * que heredan de Contenido
 */

//---------------------- Clase Pelicula -----------------------------
// Declaro objero Pelicula que hereda de Contenido
class Pelicula:public Contenido{
    //Declaro las variables privadas de instancia
    private:
        std::string duracion;
    public:
        //Declaro constructores
        Pelicula():Contenido(),duracion("00:00:00"){};
        Pelicula(std::string nom,std::string sino,std::string cla,std::string dur):Contenido(nom,sino,cla,"Pelicula"),duracion(dur){};
        // Declaro Metodos
        std::string get_duracion();
        void set_duracion(std::string);
        std::string resumen();
        //Destructor
        ~Pelicula() {}
};

std::string Pelicula::get_duracion(){
    return duracion;
};
void Pelicula::set_duracion(std::string dur){
    duracion=dur;
};
/*
 * resumen muestra todas las partes de la pelicula
 */
std::string Pelicula::resumen(){
    std::stringstream aux;
    aux<<"Nombre: "<<nombre<<std::endl<<"Sinopsis: "<<sinopsis<<std::endl<<"Clasificacion: "<<clasificacion<<std::endl<<"Categorias: "<<std::endl;
    for(int i=0; i<categoria; i++){
        aux<<i+1<<".- "<<categorias[i]<<std::endl;
    }
    aux<<"Duracion: "<<duracion<<std::endl<<std::endl;
    return aux.str();
};



//---------------------- Clase Serie -----------------------------
// Declaro objero Serie que hereda de Contenido
class Serie:public Contenido{
    private: //Variables de instancia del objeto
        std::string temporadas[100];
        int temporada;
        int episodios[100];

    public:
        //Declaro constructores
        Serie():Contenido(),temporada(0){};
        Serie(std::string nom,std::string sino,std::string cla):Contenido(nom,sino,cla,"Serie"),temporada(0){};
        //Declaro metodos del objeto
        int get_temporada(){return temporada;}
        void agrega_temporada(std::string);
        void agrega_episodios(int, int);
        std::string resumen();
        //Destructor
        ~Serie() {}

};
/*
 * agrega_temporada agrega temporadas
 * a las series
 */
void Serie::agrega_temporada(std::string tem){
    temporadas[temporada]=tem;
    temporada++;
};
/*
 * agrega_episodio agrega episodios
 * a las temporadas ya existentes
 */
void Serie::agrega_episodios(int tem, int ep){
    if (temporada==0){
        std::cout<<"Primero tienes que agregar una temporada"<<std::endl;
    }
    else{
        episodios[tem]=ep;
    }

};
/*
 * resumen muestra todas las partes de la serie que
 */
std::string Serie::resumen(){
    std::stringstream aux;
    aux<<"Nombre: "<<nombre<<std::endl<<"Sinopsis: "<<sinopsis<<std::endl<<"Clasificacion: "<<clasificacion<<std::endl<<"Categorias: "<<std::endl;
    for(int i=0; i<categoria; i++){
        aux<<i+1<<".- "<<categorias[i]<<std::endl;
    }
    aux<<std::endl;
    for(int i=0;i<temporada;i++){
        aux<<"Temporada "<<i+1<<": "<<temporadas[i]<<std::endl;
        aux<<"Episodios: "<<episodios[i]<<std::endl;
    }
    aux<<std::endl;
    return aux.str();
};


#endif // SERIES_PELICUAS_H_INCLUDED

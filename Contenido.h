#ifndef CONTENIDO_H_INCLUDED
#define CONTENIDO_H_INCLUDED

#include <iostream>
#include <string>
#include <sstream>
/*
 *Proyecto Miavie clase Contenido
 *Omar Emilio Casillas Alday
 *A01712114
 *07/06/2024
 *Esta clase definida por el tipo Contenido que contienen las clases
 *heredadas Pelicula y Serie
 */



/*Declaracion de clase Madre "Contenido" que es abstracta y
 * heredará a las clases "Pelicula" y "Serie"
 */
class Contenido{
    protected:
        //Declaro variables privadas de instancia
        std::string tipo;
        std::string nombre;
        std::string sinopsis;
        std::string clasificacion;
        std::string categorias[100];
        int categoria;
    public:
        //Declaracion de los constructores
        Contenido():nombre(""),sinopsis(""),clasificacion(""),categoria(0),tipo(""){};
        Contenido(std::string nom,std::string sino,std::string cla,std::string tip):nombre(nom),sinopsis(sino),clasificacion(cla),categoria(0),tipo(tip){};
        //Declaracion los metodos que va a tener el objeto
            //getters
        std::string get_nombre(){return nombre;}
        std::string get_sinopsis(){return sinopsis;}
        std::string get_clasificacion(){return clasificacion;}
        std::string get_tipo(){return tipo;}
            //setters
        void muestra_categoria();
        void set_nombre(std::string);
        void set_sinopsis(std::string);
        void set_clasificacion(std::string);
        void agregar_categoria(std::string);
        void set_tipo(std::string);
        // Metodos abstractos que serán sobreescritos
        virtual std::string resumen()=0;
        virtual void agrega_temporada(std::string){}
        virtual void agrega_episodios(int, int){}
        virtual int get_temporada(){return 0;}
        virtual ~Contenido(){}
};


void Contenido::set_nombre(std::string nom){
    nombre=nom;
};

void Contenido::set_sinopsis(std::string sino){
    sinopsis=sino;
};

void Contenido::set_clasificacion(std::string clas){
    clasificacion=clas;
};

void Contenido::agregar_categoria(std::string cat){
    categorias[categoria]=cat;
    categoria++;
};

void Contenido::set_tipo(std::string tip){
    tipo=tip;
};
/*
 * muestra_categoria muestra las categorias que
 * tienen las peliculas o series
 */
void Contenido::muestra_categoria(){
    for(int i=0; i<=categoria; i++){
        std::cout<<i+1<<".- "<<categorias[i]<<std::endl;
    }
};
/*
 * resumen muestra todas las partes de la pelicula o serie que
 * se va a pedir
 */

std::string Contenido::resumen(){
    std::stringstream aux;

    aux<<"Tipo: "<<tipo<<std::endl<<"Nombre: "<<nombre<<std::endl<<"Sinopsis: "<<sinopsis<<std::endl<<"Clasificacion: "<<clasificacion<<std::endl<<"Categorias: "<<std::endl;
    for(int i=0; i<categoria; i++){
        aux<<i+1<<".- "<<categorias[i]<<std::endl;
    }
    return aux.str();
};


#endif // CONTENIDO_H_INCLUDED


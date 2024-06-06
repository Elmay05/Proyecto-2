#ifndef MIAVIE_H_INCLUDED
#define MIAVIE_H_INCLUDED
#include <iostream>
#include <string>
#include <sstream>
//bibiotecas con objetos a usar
#include "Contenido.h"
#include "Series_pelicuas.h"
/*
 *Proyecto Miavie clase Contenido
 *Omar Emilio Casillas Alday
 *A01712114
 *07/06/2024
 * Esta clase definida como tipo Miavie que contiene todas las operaciones
 * para hacer altas de peliculas y deries, mostrar el resumen de las que se
 * soliciten y agregar temporadas y capitulos a las series
 */

// Declaro objero Miavie
class Miavie{
    //Declaro las variables privadas de instancia
    private:
        Contenido *contenido[1000];//se define como apuntador para usar polimorfismo
        int conte;

    public:
        //Declaro constructor default
        Miavie():conte(0){};
        //Declaro metodos
        void agrega_serie(std::string,std::string,std::string);
        void agrega_pelicula(std::string,std::string,std::string,std::string);
        void mostrar_series();
        void mostrar_peliculas();
        void consulta_serie(int);
        void consulta_pelicula(int);
        void agrega_categoria_peli(int, std::string);
        void agrega_categoria_serie(int, std::string);
        void agrega_temporada(int,std::string);
        void agrega_episodio(int,int,int);
        //Destructor
        ~Miavie(){}
};
/*Agrega series a la lista
 */
void Miavie::agrega_serie(std::string nom,std::string sino,std::string cla){
    contenido[conte]= new Serie(nom,sino,cla);
    conte++;
};
/*Agrega peliculas a la lista
 */
void Miavie::agrega_pelicula(std::string nom,std::string sino,std::string cla,std::string dur){
    contenido[conte]=new Pelicula(nom,sino,cla,dur);
    conte++;
};
/*Muestra las series agregadas
 */
void Miavie::mostrar_series(){
    std::cout<<"Series:"<<std::endl;
    int num=1;
    for(int i=0;i<conte;i++){
        if (contenido[i]->get_tipo()=="Serie"){
            std::cout<<num<<".- "<<contenido[i]->get_nombre()<<std::endl;
            num++;
        }
    }
};
/*Muestra las peliculas agregadas
 */
void Miavie::mostrar_peliculas(){
    std::cout<<"Peliculas:"<<std::endl;
    int num=1;

    for(int i=0;i<conte;i++){
        if(contenido[i]->get_tipo()=="Pelicula"){
            std::cout<<num<<".- "<<contenido[i]->get_nombre()<<std::endl;
            num++;
        }
    }
};
/*Muestra los datos de la serie solicitada por el usiario
 */
void Miavie::consulta_serie(int ser){
    int num=0;
    bool encontrado=false;
    for(int i=0;i<conte;i++){
        if(contenido[i]->get_tipo()=="Serie"){
            num++;
            if(ser==num){
                std::cout<<contenido[i]->resumen();
                encontrado=true;
            }
        }
    }
    if(encontrado==false){
        std::cout<<"Numero invalido o no existe la serie"<<std::endl;
    }
};
/*Muestra los datos de la pelicula solicitada
 */
void Miavie::consulta_pelicula(int pel){
    int num=0;
    bool encontrado=false;
    for(int i=0;i<conte;i++){
        if(contenido[i]->get_tipo()=="Pelicula"){
            num++;
            if(pel==num){
                std::cout<<contenido[i]->resumen();
                encontrado=true;
            }
        }
    }
    if(encontrado==false){
        std::cout<<"Numero invalido o no existe la pelicula"<<std::endl;
    }
};
/*Agrega categoria a las peliculas existentes
 */
void Miavie::agrega_categoria_peli(int pel,std::string cat){
    int num=0;
    bool encontrado=false;
    for(int i=0;i<conte;i++){
        if(contenido[i]->get_tipo()=="Pelicula"){
            num++;
            if(pel==num){
                contenido[i]->agregar_categoria(cat);
                encontrado=true;
            }
        }
    }
    if(encontrado==false){
        std::cout<<"Numero invalido"<<std::endl;
    }
};

/*Agrega categorias a las series existentes
 */
void Miavie::agrega_categoria_serie(int ser,std::string cat){
    int num=0;
    bool encontrado=false;
    for(int i=0;i<conte;i++){
        if(contenido[i]->get_tipo()=="Serie"){
            num++;
            if(ser==num){
                contenido[i]->agregar_categoria(cat);
                encontrado = true;
            }
        }
    }
    if (encontrado==false){
        std::cout<<"Numero invalido"<<std::endl;
    }
};
/*Agrega temporada a las series existentes
 */
void Miavie::agrega_temporada(int ser,std::string tem){
    int num=0;
    bool encontrado=false;
    for(int i=0;i<conte;i++){
        if(contenido[i]->get_tipo()=="Serie"){
            num++;
            if(ser==num){
                contenido[i]->agrega_temporada(tem);
                encontrado = true;
            }
        }
    }
    if (encontrado==false){
        std::cout<<"No existe serie para ese numero"<<std::endl;
    }
};
/* Agrega episodio a las temporadas existentes de las
 * series existentes
 */
void Miavie::agrega_episodio(int ser, int tem, int ep){
    int num=0;
    bool encontrado=false;
    for(int i=0;i<conte;i++){
        if(contenido[i]->get_tipo()=="Serie"){
            num++;
            if(ser==num){
                if(tem<contenido[i]->get_temporada()){
                    contenido[i]->agrega_episodios(tem,ep);
                    encontrado=true;
                }
                else{
                    encontrado=true;
                    std::cout<<"No existe temporada"<<std::endl;
                }
            }
        }
    }
    if(encontrado==false){
        std::cout<<"No existe serie para ese numero"<<std::endl;
    }
};



#endif // MIAVIE_H_INCLUDED

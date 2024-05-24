#include <iostream>
#include <string>
#include "Contenido.h"

int main(){
    MIAvie miavieplus;
    bool continua=true;
    int opcion;
    int inf;
    std::string nom;
    std::string sino;
    std::string cla;
    std::string dur;
    int num;
    std::string et;
    int temp;
    int ep;


    while (continua){
        std::cout<<"Menu:"<<std::endl;
        std::cout<<"1.- Agregar serie"<<std::endl;
        std::cout<<"2.- Agregar pelicula"<<std::endl;
        std::cout<<"3.- Consultar series existentes"<<std::endl;
        std::cout<<"4.- Consultar peliculas existentes"<<std::endl;
        std::cout<<"5.- Informacion de serie o pelicula"<<std::endl;
        std::cout<<"6.- Agregar categoria"<<std::endl;
        std::cout<<"7.- Editar temporada/capitulos de serie"<<std::endl;
        std::cout<<"8.- Cerrar app"<<std::endl;
        std::cout<<"Elija una opcion:";

        std::cin>>opcion;

        if (opcion==1){
            std::cout<<"Inserte nombre de la serie: "<<std::endl;
            std::cin>>nom;
            std::cout<<"Inserte sinopsis de la serie: "<<std::endl;
            std::cin>>sino;
            std::cout<<"Inserte clasificacion de la serie: "<<std::endl;
            std::cin>>cla;
            miavieplus.agrega_serie(nom,sino,cla);

            std::cout<<"Se agrego la serie"<<std::endl;
        }
        else if (opcion==2){
            std::cout<<"Inserte nombre de la pelicula: "<<std::endl;
            std::cin>>nom;
            std::cout<<"Inserte sinopsis de la pelicula: "<<std::endl;
            std::cin>>sino;
            std::cout<<"Inserte clasificacion de la pelicula: "<<std::endl;
            std::cin>>cla;
            std::cout<<"Inserte duracion de la pelicula (ej. 00:00:00): "<<std::endl;
            std::cin>>dur;
            miavieplus.agrega_pelicula(nom,sino,cla,dur);

            std::cout<<"Se agrego la pelicula"<<std::endl;
        }
        else if (opcion==3){
            std::cout<<"Estas son las series:"<<std::endl;
            miavieplus.mostrar_series();
        }
        else if (opcion==4){
            std::cout<<"Estas son las peliculas:"<<std::endl;
            miavieplus.mostrar_peliculas();
        }
        else if (opcion==5){
            bool continua2=true;

            while (continua2){
                std::cout<<"Quiero conocer la informacion de:"<<std::endl;
                std::cout<<"1.- Pelicula"<<std::endl;
                std::cout<<"2- Serie"<<std::endl;
                std::cout<<"3- Regresar al menu anterior"<<std::endl;
                std::cout<<"Elija una opcion: ";
                std::cin>>inf;
                if (inf==1){
                    std::cout<<"Inserte el numero de pelicula: "<<std::endl;
                    std::cin>>num;
                    std::cout<<"Esta es la informacion de la pelicula:"<<std::endl;
                    miavieplus.consulta_pelicula(num-1);


                }
                else if (inf==2){
                    std::cout<<"Inserte el numero de Serie: "<<std::endl;
                    std::cin>>num;
                    std::cout<<"Esta es la informacion de la Serie:"<<std::endl;
                    miavieplus.consulta_serie(num-1);

                }
                else if (inf==3){
                    continua2=false;
                }
                else{
                    std::cout<<"Numero invalido"<<std::endl;
                }
            }

        }
        else if(opcion==6){
            bool continua2=true;
            while (continua2){
                std::cout<<"Quiero agregar categoria a:"<<std::endl;
                std::cout<<"1.- Pelicula"<<std::endl;
                std::cout<<"2- Serie"<<std::endl;
                std::cout<<"3- Regresar al menu anterior"<<std::endl;
                std::cout<<"Elija una opcion: ";
                std::cin>>inf;
                if(inf==1){
                    std::cout<<"Inserte el numero de pelicula: "<<std::endl;
                    std::cin>>num;
                    std::cout<<"Inserte la etiqueta: "<<std::endl;
                    std::cin>>et;
                    miavieplus.agrega_categoria_peli(num,et);
                    std::cout<<"Estiqueta agregada"<<std::endl;
                }
                else if(inf==2){
                    std::cout<<"Inserte el numero de serie: "<<std::endl;
                    std::cin>>num;
                    std::cout<<"Inserte la etiqueta: "<<std::endl;
                    std::cin>>et;
                    miavieplus.agrega_categoria_serie(num,et);
                    std::cout<<"Estiqueta agregada"<<std::endl;
                }
                else if(inf==3){
                    continua2=false;
                }
                else{
                    std::cout<<"Numero invalido"<<std::endl;
                }
            }
        }
        //editar serie
        else if(opcion==7){
            bool continua2=true;
            while (continua2){
                std::cout<<"Editar:"<<std::endl;
                std::cout<<"1.- Agregar temporada"<<std::endl;
                std::cout<<"2- Agregar episodios"<<std::endl;
                std::cout<<"3- Regresar al menu anterior"<<std::endl;
                std::cout<<"Elija una opcion: ";
                std::cin>>inf;
                if(inf==1){
                    std::cout<<"Inserte el numero de serie: "<<std::endl;
                    std::cin>>num;
                    std::cout<<"Inserte el titulo de la temporada: "<<std::endl;
                    std::cin>>et;
                    miavieplus.agrega_temporada(num,et);
                    std::cout<<"Temporada agregada"<<std::endl;
                }
                else if(inf==2){
                    std::cout<<"Inserte el numero de serie: "<<std::endl;
                    std::cin>>num;
                    std::cout<<"Inserte el numero de temporada al que agregara la cantidad de episodios: "<<std::endl;
                    std::cin>>temp;
                    std::cout<<"Inserte el numero de episodios: "<<std::endl;
                    std::cin>>ep;
                    miavieplus.agrega_episodio(num,temp,ep);
                    std::cout<<"Episodios agregados"<<std::endl;
                }
                else if(inf==3){
                    continua2=false;
                }
                else{
                    std::cout<<"Numero invalido"<<std::endl;
                }
            }
        }
        else if(opcion==8){
            std::cout<<"Vuelva pronto"<<std::endl;
            continua=false;
        }
        else {
            std::cout<<"Numero invalido"<<std::endl;
        }
    }


    return 0;

}
    //Agrega series

    //nombre: Demon_slayer
    //Sinopsis: Sinopsis_demon_slayer
    //clasificacion:B;

    //agregar categorias
    //categoria: Accion;
    //categoria: Fantacia;
    //categoria: Historico;
    //categoria: Shounen;

    //temporadas
    //nombre temporada1 :Kimetsu_no_Yaiba
    //capitulos: 26
    //nombre temporada2 :Tren_infinito
    //capitulos: 10
    //nombre temporada3 :Rumbo_a_la_aldea_de_los_herreros
    //capitulos: 18

    //nombre: La_casa_de_papel
    //Sinopsis: Sinopsis_casa_de_papel
    //clasificacion:16+;




    //agregar peliculas

    //nombre: LALALAND
    //sinopsis: Sinopsis_lalaland
    //clasificacion: PG-13
    //Duracion: 02:07:52

    //nombre: Sherk
    //sinopsis: Sinopsis_Sherk
    //clasificacion: PG
    //Duracion: 01:29:00




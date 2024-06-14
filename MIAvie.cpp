#include <iostream> //para imprimir
#include <string>
//Bibliotecas con objetos del proyecto
#include "Contenido.h"
#include "Miavie.h"
#include "Series_pelicuas.h"

/*
 *Proyecto Miavie clase Contenido
 *Omar Emilio Casillas Alday
 *A01712114
 *07/06/2024
 *Este proyecto trata sobre una problematica en la que ocupamos
 *crear una pagina de streaming, en esta se debe poder agregar
 *peliculas y series, tanto las series y peliculas deben tener
 *registrado su nombre, una sinopsis, clasificacion, y la categoria
 *(romance, accion, terror,etc). Para las peliculas a demas de lo
 *anterior, se le debe agregar una duracion y para las series se les
 *debe dar temporadas, estas temporadas tendrán el nombre de la
 *temporada y el numero de episodios que tiene
 */
void menu(){
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
}
void menu2(){
    std::cout<<"1.- Pelicula"<<std::endl;
    std::cout<<"2- Serie"<<std::endl;
    std::cout<<"3- Regresar al menu anterior"<<std::endl;
    std::cout<<"Elija una opcion: ";
}
void menu3(){
    std::cout<<"1.- Agregar temporada"<<std::endl;
    std::cout<<"2- Agregar episodios"<<std::endl;
    std::cout<<"3- Regresar al menu anterior"<<std::endl;
    std::cout<<"Elija una opcion: ";
}

int main(){
    Miavie miavieplus;
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
  //---------------------- agregando algunas series -----------------------------
    // Series
    miavieplus.agrega_serie("Demon slayer","Tanjirou Kamado es un chico "
                            "inteligente y de buen corazon que vive con "
                            "su familia y gana dinero vendiendo carbon. "
                            "Todo cambia cuando su familia es atacada y "
                            "asesinada por un demonio (oni).","B");
    miavieplus.agrega_categoria_serie(1,"Accion");
    miavieplus.agrega_categoria_serie(1,"Fantacia");
    miavieplus.agrega_categoria_serie(1,"Historico");
    miavieplus.agrega_categoria_serie(1,"Shounen");
    miavieplus.agrega_temporada(1,"Kimetsu no Yaiba");
    miavieplus.agrega_temporada(1,"Tren infinito");
    miavieplus.agrega_temporada(1,"Distrito Rojo");
    miavieplus.agrega_temporada(1,"Aldea de los Herreros");
    miavieplus.agrega_temporada(1,"Entrenamiento Pilar");
    miavieplus.agrega_episodio(1,0,26);
    miavieplus.agrega_episodio(1,1,7);
    miavieplus.agrega_episodio(1,2,11);
    miavieplus.agrega_episodio(1,3,11);
    miavieplus.agrega_episodio(1,4,3);


    miavieplus.agrega_serie("La casa de papel","Ocho ladrones toman rehenes"
                            " en la Fabrica Nacional de Moneda y Timbre de "
                            "España, mientras el lider de la banda manipula"
                            " a la policia para cumplir con su plan.","TV-MA");
    miavieplus.agrega_categoria_serie(2,"Crimen");
    miavieplus.agrega_categoria_serie(2,"Drama");
    miavieplus.agrega_categoria_serie(2,"Suspenso");
    miavieplus.agrega_categoria_serie(2,"Accion");
    miavieplus.agrega_temporada(2,"Parte 1");
    miavieplus.agrega_temporada(2,"Parte 2");
    miavieplus.agrega_temporada(2,"Parte 3");
    miavieplus.agrega_temporada(2,"Parte 4");
    miavieplus.agrega_temporada(2,"Parte 5");
    miavieplus.agrega_episodio(2,0,13);
    miavieplus.agrega_episodio(2,1,9);
    miavieplus.agrega_episodio(2,2,8);
    miavieplus.agrega_episodio(2,3,8);
    miavieplus.agrega_episodio(2,4,10);


    miavieplus.agrega_serie("BRIDGERTON","Mientras las debutantes anhelan ser"
                            " los diamantes mas relucientes del baile, una"
                            " discreta gema con una doble vida "
                            "descubre su propio brillo entre secretos y"
                            " sorpresas.","TV-MA");
    miavieplus.agrega_categoria_serie(3,"Drama romantico");
    miavieplus.agrega_categoria_serie(3,"Romance historico");
    miavieplus.agrega_categoria_serie(3,"Comedia dramatica");
    miavieplus.agrega_categoria_serie(3,"Drama familiar");
    miavieplus.agrega_temporada(3,"T 1");
    miavieplus.agrega_temporada(3,"T 2");
    miavieplus.agrega_temporada(3,"T 3");
    miavieplus.agrega_episodio(3,0,8);
    miavieplus.agrega_episodio(3,1,8);
    miavieplus.agrega_episodio(3,2,4);


    miavieplus.agrega_serie("SPY x FAMILY","Loid y Yor son un par de espias"
                            " con una doble vida, manteniendo sus identidades"
                            " ocultas incluso entre ellos mismos mientras "
                            "simulan ser la familia ideal. Sin embargo, su "
                            "hija adoptiva Anya, dotada de habilidades "
                            "telepaticas, conoce sus secretos mas profundos "
                            "sin que ellos lo sepan.","TV-14");
    miavieplus.agrega_categoria_serie(4,"Accion");
    miavieplus.agrega_categoria_serie(4,"Comedia");
    miavieplus.agrega_categoria_serie(4,"Shounen");
    miavieplus.agrega_temporada(4,"Parte 1");
    miavieplus.agrega_temporada(4,"Parte 2");
    miavieplus.agrega_episodio(4,0,12);
    miavieplus.agrega_episodio(4,1,13);


    // Peliculas
    miavieplus.agrega_pelicula("LALALAND","Este musical explora la alegria"
                               " y el dolor de perseguir los sueños por "
                               "medio de la historia de Mia, una aspirante"
                               " a actriz y Sebastian, un musico de jazz, "
                               "quienes luchan por sobrevivir en Los "
                               "Angeles, una ciudad conocida por aplastar "
                               "las esperanzas.","PG-13","02:07:52");


    miavieplus.agrega_pelicula("Madagascar","Cuatro amigos animales prueban"
                               " la vida salvaje cuando, luego de espacar de"
                               " su cautiverio en el zoologico de Central Park,"
                               " van a parar a la orilla de la isla de"
                               " Madagascar","PG","01:26:26");


    miavieplus.agrega_pelicula("Una pelicula de huevos","Un huevito llamado"
                               " Toto suena con llegar a ser un pollo, para"
                               " lo que debe escaparse con otro huevo y una"
                               " tira de tocino despues de ser vendidos en"
                               "un supermercado.","TV-PG","01:29:50");



    //-----------------------------------------------------------------------------




    while (continua){
        menu();
        std::cin>>opcion;
        std::cout<<std::endl;
        std::cin.ignore();

        switch(opcion){
            case 1:
                std::cout<<"Inserte nombre de la serie: "<<std::endl;
                std::getline(std::cin, nom);
                std::cout<<"Inserte sinopsis de la serie: "<<std::endl;
                std::getline(std::cin, sino);
                std::cout<<"Inserte clasificacion de la serie: "<<std::endl;
                std::getline(std::cin, cla);
                miavieplus.agrega_serie(nom,sino,cla);

                std::cout<<"Se agrego la serie"<<std::endl;
                break;

            case 2:
                std::cout<<"Inserte nombre de la"
                " pelicula: "<<std::endl;
                std::getline(std::cin, nom);
                std::cout<<"Inserte sinopsis de"
                " la pelicula: "<<std::endl;
                std::getline(std::cin, sino);
                std::cout<<"Inserte clasificacion"
                " de la pelicula: "<<std::endl;
                std::getline(std::cin, cla);
                std::cout<<"Inserte duracion de "
                "la pelicula (ej. 00:00:00): "<<std::endl;
                std::cin>>dur;
                miavieplus.agrega_pelicula(nom,sino,cla,dur);

                std::cout<<"Se agrego la pelicula"<<std::endl;
                break;

            case 3:
                std::cout<<std::endl;
                std::cout<<"Estas son las series:"<<std::endl;
                miavieplus.mostrar_series();
                std::cout<<std::endl;
                break;

            case 4:
                std::cout<<std::endl;
                std::cout<<"Estas son las peliculas:"<<std::endl;
                miavieplus.mostrar_peliculas();
                std::cout<<std::endl;
                break;

            case 5:{
                bool continua2=true;
                while (continua2){
                    std::cout<<std::endl;
                    std::cout<<"Quiero conocer "
                    "la informacion de:"<<std::endl;
                    menu2();
                    std::cin>>inf;
                    std::cout<<std::endl;
                    switch(inf){
                        case 1:
                            miavieplus.mostrar_peliculas();
                            std::cout<<"Inserte el numero "
                            "de pelicula: "<<std::endl;
                            std::cin>>num;
                            std::cout<<std::endl;
                            std::cout<<"Esta es la informacion"
                            " de la pelicula:"<<std::endl;
                            miavieplus.consulta_pelicula(num);
                            break;
                        case 2:
                            miavieplus.mostrar_series();
                            std::cout<<"Inserte el numero"
                            " de Serie: "<<std::endl;
                            std::cin>>num;
                            std::cout<<std::endl;
                            std::cout<<"Esta es la informacion"
                            " de la Serie:"<<std::endl;
                            miavieplus.consulta_serie(num);
                            break;
                        case 3:
                            continua2=false;
                            break;
                        default:
                            std::cout<<"Numero invalido"<<std::endl;
                    }

                }
                break;
            }

            case 6:{
                bool continua2=true;
                while (continua2){
                    std::cout<<std::endl;
                    std::cout<<"Quiero agregar "
                    "categoria a:"<<std::endl;
                    menu2();
                    std::cin>>inf;
                    std::cout<<std::endl;
                    switch(inf){
                        case 1:
                            miavieplus.mostrar_peliculas();
                            std::cout<<"Inserte el numero "
                            "de pelicula: "<<std::endl;
                            std::cin>>num;
                            std::cin.ignore();
                            std::cout<<"Inserte la"
                            " etiqueta: "<<std::endl;
                            std::getline(std::cin, et);
                            miavieplus.agrega_categoria_peli(num,et);
                            std::cout<<"Estiqueta"
                            " agregada"<<std::endl;
                            break;
                        case 2:
                            miavieplus.mostrar_series();
                            std::cout<<"Inserte el numero"
                            " de serie: "<<std::endl;
                            std::cin>>num;
                            std::cin.ignore();
                            std::cout<<"Inserte la "
                            "etiqueta: "<<std::endl;
                            std::getline(std::cin, et);
                            miavieplus.agrega_categoria_serie(num,et);
                            std::cout<<"Estiqueta "
                            "agregada"<<std::endl;
                            break;

                        case 3:
                            continua2=false;
                            break;
                        default:
                            std::cout<<"Numero "
                            "invalido"<<std::endl;

                    }
                }
                break;
            }
            case 7:{
                bool continua2=true;
                while (continua2){
                    std::cout<<std::endl;
                    std::cout<<"Editar:"<<std::endl;
                    menu3();
                    std::cin>>inf;
                    std::cout<<std::endl;
                    miavieplus.mostrar_series();

                    switch(inf){
                        case 1:
                            std::cout<<"Inserte el"
                            " numero de serie: "<<std::endl;
                            std::cin>>num;
                            std::cin.ignore();
                            std::cout<<"Inserte el titulo"
                            " de la temporada: "<<std::endl;
                            getline(std::cin,et);
                            miavieplus.agrega_temporada(num,et);
                            std::cout<<"Temporada agregada"<<std::endl;
                            break;
                        case 2:
                            std::cout<<"Inserte el numero"
                            " de serie: "<<std::endl;
                            std::cin>>num;
                            std::cout<<"Inserte el numero"
                            " de temporada al que agregara la "
                            "cantidad de episodios: "<<std::endl;
                            std::cin>>temp;
                            std::cout<<"Inserte el numero "
                            "de episodios: "<<std::endl;
                            std::cin>>ep;
                            miavieplus.agrega_episodio(num,temp-1,ep);
                            std::cout<<"Episodios "
                            "agregados"<<std::endl;
                            break;
                        case 3:
                            continua2=false;
                            break;
                        default:
                            std::cout<<"Numero invalido"<<std::endl;
                    }
                }
                break;

            }

            case 8:
                std::cout<<"Vuelva pronto"<<std::endl;
                continua=false;
                break;

            default:
                std::cout<<"Numero invalido"<<std::endl;
        }
    }
    return 0;


}

#ifndef CONTENIDO_H_INCLUDED
#define CONTENIDO_H_INCLUDED
#include <iostream>
#include <string>
// Declaracion de clase Madre
class Contenido{
    protected:
        //Declaro variables de instancia
        std::string nombre;
        std::string sinopsis;
        std::string clasificacion;
        std::string categorias[100];
        int categoria;
    public:
        //Declaracion de los constructores
        Contenido():nombre(""),sinopsis(""),clasificacion(""),categoria(0){};
        Contenido(std::string nom,std::string sino,std::string cla):nombre(nom),sinopsis(sino),clasificacion(cla),categoria(0){};
        //Declaracion los metodos que va a tener el objeto
        std::string get_nombre(){return nombre;}
        std::string get_sinopsis(){return sinopsis;}
        std::string get_clasificacion(){return clasificacion;}
        void muestra_categoria();
        void set_nombre(std::string);
        void set_sinopsis(std::string);
        void set_clasificacion(std::string);
        void agregar_categoria(std::string);
        void resumen();
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
void Contenido::muestra_categoria(){
    for(int i=0; i<=categoria; i++){
        std::cout<<i+1<<".- "<<categorias[i]<<std::endl;
    }
}
void Contenido::resumen(){
    std::cout<<"Nombre: "<<nombre<<std::endl<<"Sinopsis: "<<sinopsis<<std::endl<<"Clasificacion: "<<clasificacion<<std::endl<<"Categorias: "<<std::endl;
    for(int i=0; i<categoria; i++){
        std::cout<<i+1<<".- "<<categorias[i]<<std::endl;
    }
};

class Pelicula:public Contenido{
    private:
        std::string duracion;
    public:
        Pelicula():Contenido(),duracion("00:00:00"){};
        Pelicula(std::string nom,std::string sino,std::string cla,std::string dur):Contenido(nom,sino,cla),duracion(dur){};
        std::string get_duracion();
        void set_duracion(std::string);
        void resumen();
};
std::string Pelicula::get_duracion(){
    return duracion;
};
void Pelicula::set_duracion(std::string dur){
    duracion=dur;
};
void Pelicula::resumen(){
    std::cout<<"Nombre: "<<nombre<<std::endl<<"Sinopsis: "<<sinopsis<<std::endl<<"Clasificacion: "<<clasificacion<<std::endl<<"Categorias: "<<std::endl;
    for(int i=0; i<categoria; i++){
        std::cout<<i+1<<".- "<<categorias[i]<<std::endl;
    }
    std::cout<<"Duracion: "<<duracion<<std::endl<<std::endl;
};
class Serie:public Contenido{
    private:
        std::string temporadas[100];
        int temporada;
        int episodios[100];

    public:
        Serie():Contenido(),temporada(0){};
        Serie(std::string nom,std::string sino,std::string cla):Contenido(nom,sino,cla),temporada(0){};
        int get_temporada(){return temporada;}
        void agrega_temporada(std::string);
        void agrega_episodios(int, int);
        void resumen();


};
void Serie::agrega_temporada(std::string tem){
    temporadas[temporada]=tem;
    temporada++;
};
void Serie::agrega_episodios(int tem, int ep){
    if (temporada==0){
        std::cout<<"Primero tienes que agregar una temporada"<<std::endl;
    }
    else{
        episodios[tem-1]=ep;
    }

};
void Serie::resumen(){
    std::cout<<"Nombre: "<<nombre<<std::endl<<"Sinopsis: "<<sinopsis<<std::endl<<"Clasificacion: "<<clasificacion<<std::endl<<"Categorias: "<<std::endl;
    for(int i=0;i<temporada;i++){
        std::cout<<"Temporada"<<i+1<<": "<<temporadas[i]<<std::endl;
        std::cout<<"Episodios: "<<episodios[i]<<std::endl;
    }

    for(int i=0; i<categoria; i++){
        std::cout<<i+1<<".- "<<categorias[i]<<std::endl<<std::endl;;
    }


};

class MIAvie{
    private:
        Serie *series[1000];
        Pelicula *peliculas[1000];
        int serie;
        int pelicula;
    public:
        MIAvie():serie(0),pelicula(0){};
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
};

void MIAvie::agrega_serie(std::string nom,std::string sino,std::string cla){
    series[serie]= new Serie(nom,sino,cla);
    serie++;
};

void MIAvie::agrega_pelicula(std::string nom,std::string sino,std::string cla,std::string dur){
    peliculas[pelicula]=new Pelicula (nom,sino,cla,dur);
    pelicula++;
};

void MIAvie::mostrar_series(){
    std::cout<<"Series:"<<std::endl;
    for(int i=0;i<serie;i++){
        std::cout<<i+1<<".- "<<series[i]->get_nombre()<<std::endl;
    }

};

void MIAvie::mostrar_peliculas(){
    std::cout<<"Peliculas:"<<std::endl;
    for(int i=0;i<pelicula;i++){
        std::cout<<i+1<<".- "<<peliculas[i]->get_nombre()<<std::endl;
    }
};

void MIAvie::consulta_serie(int ser){
    if(ser<serie){
        series[ser]->resumen();
    }
    else{
        std::cout<<"Numero invalido o no existe la serie"<<std::endl;
    }
};
void MIAvie::consulta_pelicula(int pel){
    if(pel<pelicula){
        peliculas[pel]->resumen();
    }
    else{
        std::cout<<"Numero invalido o no existe la pelicula"<<std::endl;
    }
};

void MIAvie::agrega_categoria_peli(int pel,std::string cat){
    if(pel-1<pelicula){
        peliculas[pel-1]->agregar_categoria(cat);
    }
    else{
        std::cout<<"Numero invalido"<<std::endl;
    }
};
void MIAvie::agrega_categoria_serie(int ser,std::string cat){
    if(ser-1<serie){
        series[ser-1]->agregar_categoria(cat);
    }
    else{
        std::cout<<"Numero invalido"<<std::endl;
    }
};

void MIAvie::agrega_temporada(int ser,std::string tem){
    if(ser-1<serie){
        series[ser-1]->agrega_temporada(tem);
    }else{
        std::cout<<"No existe serie para ese numero"<<std::endl;
    }

};

void MIAvie::agrega_episodio(int ser, int tem, int ep){
    if(ser-1<serie){
        if(tem-1<series[ser-1]->get_temporada()){
            series[ser-1]->agrega_episodios(tem-1,ep);
        }else{
            std::cout<<"No existe temporada"<<std::endl;
        }

    }
    else{
        std::cout<<"No existe serie para ese numero"<<std::endl;
    }
};




#endif // CONTENIDO_H_INCLUDED

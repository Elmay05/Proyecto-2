# Proyecto-2
# Proyecto 
Este proyecto trata de crear una pagina de streaming llamada " MIAvie +" en la que:

-En la plataforma se puedan crear series y peliculas las cuales se agregan en su lista respectiva, de igual manera, una funcion para mostrar todas las series o todas las peliculas.

-Para cada serie y pelicula se guardará el nombre, una sinopsis, clasificacion, y la categoria (romance, accion, terror,etc).

-Para las peliculas, se le dará una duracion. 

-Para las series se les dará temporada (en este se registrará el nombre de la temporada) y numero de episodios (Estos se irán guardando por temporadas, por eso es una lista y no un numero simple).

# Correcciones readme
Este proyecto está pensado para crear una pagina de streaming llamada " MIAvie +" 
## Problema 
Para este proyecto tenemos una problematica en la que ocupamos crear una pagina de streaming, en esta se debe poder agregar peliculas y series, tanto las series y peliculas deben tener registrado su nombre, una sinopsis, clasificacion, y la categoria (romance, accion, terror,etc). Para las peliculas a demas de lo anterior, se le debe agregar una duracion y para las series se les debe dar temporadas, estas temporadas tendrán el nombre de la temporada y el numero de episodios que tiene
## Funcionamiento
Para realizarlo ocupamos hacer:

* Clase MIAvie_Plus en la que se tendrán 2 listas, una de series en las que se agregarán objetos de clase series y otra de peliculas en las que se agregarán objetos de clase peliculas.

Cosas en comun entre las Peliculas y Series, entonces ocupamos: 
* Clase Madre para estas 2 llamada Contenido en la que guardemos el nombre, sinopsis, clasificacion, categoria 
* Clase Pelicula hay que agregarle una duración 
* Clase Serie hay que ponerle una lista para las temporadas y una lista para los episodios.
#### Nota: En la clase MIAvie_Plus hay que implementar una funcion para mostrar series y peliculas y una funcion para consultar los datos de alguna serie o alguna pelicula 
## Consideraciones
* El promgrama no funcionará si se quieren consultar los datos de una serie o pelicula que no han sido agregados
* El programa no funcionará si se quiere el nombre de cada capitulo de temporada ya que este solo guarda el numero de capitulos que tiene
* Si en las opciones se selecciona una letra, el programa fallará
* No se deben utilizar numeros negativos
# Correcciones archivos
Separé las clases series y peliculas en un archivo.h llamado series_peliculas.h, dejé la clase contenido en otro archivo y la clase Miavieplus la puse en un archivo con el mismo nombre.h
# Correcciones diseño
Puse espacios entre las lineas de texto en el archivo.cpp para que las lineas de codigo no excedan los 80 caracteres, de igual manera cambié que al agregar datos en las series o peliculas, estas se impriman para que no tengan que regresar a buscar el numero de esta, si no que se imprimieran y ya ahora si se pida el numero de serie o pelicula solicitada,
por ultimo, en la parte agregar serie, lo que hacia era reescribir las series en las que ya existian, entonces una serie de 1 temporada de 4 capiulos, al "agregar 6" hacia que la temporada tubiera ahora 6 capitulos, ahora si las suma, de 4 al "agregar 6" ahora muestra 10 capitulos en esa temporada


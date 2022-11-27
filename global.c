#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Estructura para el registro de peliculas
struct peliculas_lista {
  char nombre[100];
  char genero[100];
  char duracion[100];
  int calificacion;
  char director[100];
};
struct peliculas_lista pelicula[11];

// // Funcion para agregar peliculas
// int agregar(int lugar) {
//   printf("Ingresa el nombre de la pelicula\n");
//   scanf("%s", &pelicula[lugar].nombre);
//   printf("\nIngresa el genero de la pelicula\n");
//   scanf("%s", &pelicula[lugar].genero);
//   printf("\nIngresa la duracion de la pelicula\n");
//   scanf("%s", &pelicula[lugar].duracion);
//   printf("\nIngresa una calificacion del 1 al 10\n");
//   scanf("%d", &pelicula[lugar].calificacion);
//   printf("\nIngresa el nombre del director de la pelicula\n");
//   scanf("%s", &pelicula[lugar].director);
//   printf("\nPelicula registrada con exito\n");
//   return 0;
// }

// // Funcion para eliminar pelicula
// int eliminar(int lugar) {
//   int seguro;
//   printf("\n¿Seguro que desea eliminar la pelicula\n1.Si\n2.No\n");
//   scanf("%d", &seguro);
//   if (seguro == 1) {
//     memset(pelicula[lugar].nombre, 0, 100);
//     memset(pelicula[lugar].genero, 0, 100);
//     memset(pelicula[lugar].duracion, 0, 100);
//     pelicula[lugar].calificacion = 0;
//     memset(pelicula[lugar].director, 0, 100);
//     printf("\nLa pelicula fue eliminada de la lista\n");
//     return 0;
//   } else {
//     printf("\nLa pelicula no fue eliminada\n");
//     return 0;
//   }
// }

// // Funcion para editar peliculas
// int editar(int lugar) {
//   printf("Ingresa el nombre de la pelicula\n");
//   scanf("%s", &pelicula[lugar].nombre);
//   printf("\nIngresa el genero de la pelicula\n");
//   scanf("%s", &pelicula[lugar].genero);
//   printf("\nIngresa la duracion de la pelicula\n");
//   scanf("%s", &pelicula[lugar].duracion);
//   printf("\nIngresa una calificacion del 1 al 10\n");
//   scanf("%d", &pelicula[lugar].calificacion);
//   printf("\nIngresa el nombre del director de la pelicula\n");
//   scanf("%s", &pelicula[lugar].director);
//   printf("\nPelicula registrada con exito\n");
//   return 0;
// }

// // Funcion para mostrar todoas las peliculas
// int lista() {
//   printf("\nListado de peliculas\n");
//   for (int i = 0; i <= 10; i++) {
//     if (pelicula[i].nombre != " ") {
//       printf("%s  %s  %s  %d  %s\n", pelicula[i].nombre, pelicula[i].genero,
//              pelicula[i].duracion, pelicula[i].calificacion,
//              pelicula[i].director);
//     }
//   }
//   return 0;
// }

int main() {
  int final = 0;
  int contador = 0;
  int opcion;
  int edicion = 0;
  int elimina;
  while (final == 0) {
    printf("Que desea hacer?\n 1.Ingresar pelicula\n 2.Eliminar pelicula\n "
           "3.Modificar pelicula\n 4.Mostrar peliculas\n 5.Salir\n");
    scanf("%d", &opcion);
    switch (opcion) {
    case 1:
      printf("si entro\n");
        agregar(contador);
        contador ++;

      break;

    case 2:
      lista();
      printf("\n¿Que pelicula desea eliminar?\n");
      scanf("%i", &elimina);
      eliminar(elimina);
      break;

    case 3:
      lista();
      printf("\n¿Que pelicula desea modificar?\n");
      scanf("%d", &edicion);
      editar(edicion);
      break;

    case 4:
      lista();
      break;

    case 5:
      final = 1;
      break;
    }
  }
}
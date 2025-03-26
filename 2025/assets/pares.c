#include <stdio.h>

int esPar(int numero);

void losPares(int numeros[], int tamanio, int pares[]){
    int i, j = 0;
    for (i = 0; i < tamanio; i++) {
      if ( esPar(numeros[i]) ) { 
        pares[j] = numeros[i];
        j = j + 1;
      }
    }
  }

int esPar(int numero){
  return numero % 2 == 0;
}
  
// Expresividad: que nuestro código sea legible
// Enfque TOP-DOWN: llamar a la función antes de codearla, pensar primero la estrategia
// refactor: cambiar código para que haga lo mismo (pero MEJOR)
// Declaratividad: menos detalles algorítmicos: me acerco más a QUE quiero y no COMO lo obtengo.

void main(){
  int nros[10] = {1,2,3,4,5,6,7,8,9,10};
  int respuesta[10] = {0,0,0,0,0,0,0,0,0,0};
  losPares(nros, 10, respuesta);
  for (int i=0; i < 10; i++) {
    printf("%d\n", respuesta[i]);
  }
}



// Para probar:
// compilar
// hacer un main
// llamar a la función con parámetros
// imprimir los resultados
// verificar que lo que se imprime es lo que yo quiero
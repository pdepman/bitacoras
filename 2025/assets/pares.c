#include <stdio.h>

void bobEsponja(int a[], int b, int c[]){
    int d, e = 0;  for (d = 0; d < b; d++) { if (a[d] % 2 == 0) { c[e] = a[d]; e = e + 1; } }
  }
  
void main(){
  int nros[10] = {1,2,3,4,5,6,7,8,9,10};
  int respuesta[10] = {0,0,0,0,0,0,0,0,0,0};
  bobEsponja(nros, 10, respuesta);
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
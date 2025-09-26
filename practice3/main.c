//
// main.c
// Programa principal que llama a los ejercicios de lógica básica
//

#include <stdio.h>
#include "ejercicios.h"

int main(void) {
    // Llamamos a cada ejercicio
    ejercicio1();
    printf("\n"); // Separador visual entre ejercicios
    ejercicio2();
    printf("\n");
    ejercicio3();
    printf("\n");

    return 0; // Fin del programa
}

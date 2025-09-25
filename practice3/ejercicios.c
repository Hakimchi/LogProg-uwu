//
// ejercicios.c
// Implementación de los ejercicios de lógica básica
//

#include "ejercicios.h"
#include <stdio.h>

// =====================
// Ejercicio 1 – Clasificación de calificación
// =====================
void ejercicio1(void) {
    float calif = 0.0;

    printf("Introduce porfi un número panita (0-10): ");
    scanf("%f", &calif);

    // Validación de rango
    if (calif < 0 || calif > 10) {
        printf("La calificación introducida es ILOGICA\n");
    } 
    else if (calif == 0) {
        printf("La calificación es NEUTRA\n");
    } 
    else if (calif < 6) {
        printf("La calificación es REPROBATORIA\n");
    } 
    else {
        printf("La calificación es APROBATORIA\n");
    }
}

// =====================
// Ejercicio 2 – Determinar si un número es par, impar o neutro
// =====================
void ejercicio2(void) {
    int numero;

    printf("Introduce porfi un número panita: ");
    scanf("%d", &numero);

    if (numero == 0) {
        printf("El número es NEUTRO\n");
    } 
    else if (numero % 2 == 0) {
        printf("El número es PAR\n");
    } 
    else {
        printf("El número es IMPAR\n");
    }
}

// =====================
// Ejercicio 3 – Ver múltiplos de un número
// =====================
void ejercicio3(void) {
    int numero;

    printf("Introduce porfi un número panita: ");
    scanf("%d", &numero);

    printf("Resultados de múltiplos:\n");

    if (numero % 2 == 0) {
        printf("- Múltiplo de 2\n");
    }
    if (numero % 3 == 0) {
        printf("- Múltiplo de 3\n");
    }
    if (numero % 5 == 0) {
        printf("- Múltiplo de 5\n");
    }
    if (numero % 11 == 0) {
        printf("- Múltiplo de 11\n");
    }
}

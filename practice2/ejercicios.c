//
// ejercicios.c
// Implementación de los ejercicios de la práctica
//

#include "ejercicios.h"
#include <stdio.h>
#include <math.h>

// =====================
// Ejercicio 1 – Don Erick y su terreno
// =====================
void ejercicio1(void) {
    // Datos del problema
    int L = 20;                   // Lado base
    float COSTO_M2 = 9000.0;      // Costo por metro cuadrado

    // Calculamos el área del terreno: un rectángulo más un triángulo encima
    float areaRectangulo = 2 * L * L;       // Área del rectángulo
    float areaTriangulo = 0.5 * L * L;      // Área del triángulo
    float areaTotal = areaRectangulo + areaTriangulo;

    // Calculamos el costo total
    float total = areaTotal * COSTO_M2;

    // Mostrar resultados
    printf("=== Ejercicio 1 – Don Erick ===\n");
    printf("Área del terreno: %.2f m²\n", areaTotal);
    printf("Debe pagar: $%.2f\n\n", total);
}

// =====================
// Ejercicio 2 – Lety y las figuras de chocolate
// =====================
void ejercicio2(void) {
    float L = 2.5;             // Lado de la figura
    int cantidadPiezas = 100;  // Cantidad de piezas
    float chocolatePorCM = 10; // gramos por cm²

    // Calculamos áreas de la figura
    float areaCuadrado = pow(L, 2);          // Área del cuadrado central
    float areaTriangulos = 4 * ((L*L)/2);    // Área de los 4 triángulos
    float areaTotalFigura = areaCuadrado + areaTriangulos;

    float areaCirculo = M_PI * pow(L/2, 2);  // Área del círculo recortado
    float areaShuriken = areaTotalFigura - areaCirculo; // Área final de chocolate

    // Calculamos chocolate necesario
    float chocolatePorPieza = areaShuriken * chocolatePorCM; // gramos por pieza
    float totalChocolate = chocolatePorPieza * cantidadPiezas; // total en gramos
    float totalKG = totalChocolate / 1000.0;                 // total en kilogramos

    // Mostrar resultados
    printf("=== Ejercicio 2 – Lety ===\n");
    printf("Chocolate necesario para 100 piezas: %.2f g\n", totalChocolate);
    printf("Equivalente en kilogramos: %.2f kg\n\n", totalKG);
}

// =====================
// Ejercicio 3 – Leo y los juguetes de madera
// =====================
void ejercicio3(void) {
    int L = 1;                   // Medida básica
    const int ANCHO = 60;        // Ancho del tablón en cm
    const int ALTO = 120;        // Alto del tablón en cm

    // Área de cada figura (combinando rectángulos y círculos)
    float areaFigura = pow(L,2) + 0.5*pow(L,2) + 0.25*pow(L,2) + 2*M_PI*pow(0.5*L,2);

    // Medidas aproximadas de la figura para calcular cuántas entran en el tablón
    float alturaFigura = 2 * L;
    float baseFigura = 3 * L;

    // Área del tablón completo
    float areaTablon = ANCHO * ALTO;

    // Número de figuras completas que se pueden cortar
    int numFiguras = (int)(areaTablon / (alturaFigura * baseFigura));

    // Área efectiva utilizada en el tablón
    float areaEfectiva = numFiguras * areaFigura;

    // Mostrar resultados
    printf("=== Ejercicio 3 – Leo ===\n");
    printf("Número de figuras posibles: %d\n", numFiguras);
    printf("Área de cada figura: %.2f cm²\n", areaFigura);
    printf("Área efectiva usada en el tablón: %.2f cm²\n\n", areaEfectiva);
}

//
//  Excersices1.c
//  PracticaC1
//
//  Created by Hakeem Espejel on 10/09/25.
//

#include "Excersices1.h" // Incluye las funciones que vamos a definir
#include <stdio.h>        // Permite mostrar mensajes en pantalla
#include <math.h>         // Permite hacer operaciones matemáticas avanzadas como raíz cuadrada y potencias

// Función ejercicio1
// Calcula una operación matemática y muestra el resultado
int ejercicio1(void) {
    
    // a = (√(5² + 12²) - 7) / (3*2 + 4) + (3/2)*4
    // sqrt() = raíz cuadrada, pow(x, y) = x elevado a la y
    double a = (sqrt(pow(5, 2) + pow(12, 2)) - 7) / (3.0 * 2 + 4) + (3.0 / 2) * 4;
    
    // Muestra el resultado con 2 decimales
    printf("Primer resultado: %.2f\n", a);
    
    return 0; // Indica que la función terminó correctamente
}

// Función ejercicio2
// Realiza otra operación matemática y muestra el resultado
int ejercicio2(void){
    
    // b = ((2³ + 3²)/(4+1)) + √49
    int b = (((pow(2, 3) + pow(3, 2))/(4+1))+sqrt(49));
    
    // Muestra el resultado como número entero
    printf("Segundo resultado: %d\n", b);
                
    return 0;
}

// Función ejercicio3
// Realiza cálculos combinando multiplicaciones, divisiones y sumas
int ejercicio3(void){
    
    // c = ((6*4 - 8)/(2² + 2)) + (10/2)
    int c = ((((6*4)-(8))/(pow(2, 2)+2))+(10/2));
    
    printf("Tercer resultado: %d\n", c);
                
    return 0;
}

// Función ejercicio4
// Calcula la distancia entre dos puntos y suma un valor adicional
int ejercicio4(void){
    
    // d = √((8-3)² + (6-2)²) + (20/4)
    int d = (sqrt((pow((8-3), 2))+(pow((6-2), 2))))+(20/4);
    
    printf("Cuarto resultado: %d\n", d);
                
    return 0;
}

// Función ejercicio5
// Combina multiplicaciones, sumas, divisiones y raíz cuadrada
int ejercicio5(void){
    
    // e = ((3*5 + 4*2)/2²) + √16
    int e = (((3*5)+(4*2))/(pow(2,2)))+(sqrt(16));
    
    printf("Quinto resultado: %d\n", e);
                
    return 0;
}

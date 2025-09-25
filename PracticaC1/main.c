//
//  main.c
//  PracticaC1
//
//  Created by Hakeem Espejel on 10/09/25.
//

#include <stdio.h>      // Biblioteca que permite mostrar mensajes en pantalla
#include <math.h>       // Biblioteca que permite hacer operaciones matemáticas avanzadas
#include "Excersices1.h" // Archivo donde están definidas funciones llamadas ejercicio1, ejercicio2, etc.

int main(void) {
    
    // Definimos una variable 'a' y le asignamos el resultado de una operación matemática
    // Luego mostramos ese resultado en pantalla con printf
    float a = (1-7)/12*5+3 ;
    printf("El valor de la primera sera: %.6f\n", a);
    
    // Variable 'b' guarda el resultado de calcular la raíz cuadrada de 25, multiplicarla y sumarle 2
    // %.6f indica que se mostrarán 6 números después del punto decimal
    float b = sqrt(25)*9/3.0+2;
    printf("El valor de la segunda será: %.6f\n", b);
    
    // Variable 'c' calcula la raíz cúbica de 27, suma 5 y resta 5*2
    float c = pow(27,1/3)+5-5*2;
    printf("El valor de la tercera será: %.6f\n", c);
    
    // Variable 'd' realiza una operación con números negativos, raíz cuadrada y división
    float d = -4+sqrt(4*4+3*3)/2;
    printf("El valor de la cuarta será: %.6f\n", d);
    
    // Variable 'e' realiza varias divisiones encadenadas
    float e = 1.0/2/2/4;
    printf("El valor de la quinta será: %.6f\n", e);
    
    // Aquí llamamos a cinco funciones distintas que están definidas en otro archivo
    // Cada una hace ejercicios adicionales que también se mostrarán en pantalla
    ejercicio1();
    ejercicio2();
    ejercicio3();
    ejercicio4();
    ejercicio5();
    
    return 0; // Indica que el programa terminó correctamente
}


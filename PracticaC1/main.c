//
//  main.c
//  PracticaC1
//
//  Created by Hakeem Espejel on 10/09/25.
//

#include <stdio.h>
#include <math.h>
#include "Excersices1.h"

int main(void) {
    
    float a = (1-7)/12*5+3 ;
    printf("El valor de la primera sera: %.6f\n", a);
    
    float b = sqrt(25)*9/3.0+2;
    printf("El valor de la segunda será: %.6f\n", b);
    
    float c = pow(27,1/3)+5-5*2;
    printf("El valor de la tercera será: %.6f\n", c);
    
    float d = -4+sqrt(4*4+3*3)/2;
    printf("El valor de la cuarta será: %.6f\n", d);
    
    float e = 1.0/2/2/4;
    printf("El valor de la quinta será: %.6f\n", e);
    
    ejercicio1();
    ejercicio2();
    ejercicio3();
    ejercicio4();
    ejercicio5();
    
    return 0;
}




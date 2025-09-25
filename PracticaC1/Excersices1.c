//
//  Excersices1.c
//  PracticaC1
//
//  Created by Hakeem Espejel on 10/09/25.
//

#include "Excersices1.h"
#include <stdio.h>
#include <math.h>

int ejercicio1(void) {
    
    double a = (sqrt(pow(5, 2) + pow(12, 2)) - 7) / (3.0 * 2 + 4) + (3.0 / 2) * 4;
    printf("Primer resultado: %.2f\n", a);
    
    return 0;
}

int ejercicio2(void){
    
    int b = (((pow(2, 3) + pow(3, 2))/(4+1))+sqrt(49));
    printf("Segundo resultado: %d\n", b);
                
    return 0;
}

int ejercicio3(void){
    
    int c = ((((6*4)-(8))/(pow(2, 2)+2))+(10/2));
    printf("Tercer resultado: %d\n", c);
                
    return 0;
}

int ejercicio4(void){
    
    int d = (sqrt((pow((8-3), 2))+(pow((6-2), 2))))+(20/4);
    printf("Cuarto resultado: %d\n", d);
                
    return 0;
}

int ejercicio5(void){
    
    int e = (((3*5)+(4*2))/(pow(2,2)))+(sqrt(16));
    printf("Quinto resultado: %d\n", e);
                
    return 0;
}

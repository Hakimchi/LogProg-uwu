//
//  ejercicios.c
//  Ejercicios de bifurcacion
//
//  Created by Hakeem Espejel on 02/10/25.
//

#include "ejercicios.h"
#include <stdio.h>
#include <ctype.h>

//============ EJERCICIO 1 ==============
//1. Escribir un algoritmo que salude al usuario de acuerdo a su edad. El saludo difiere con respecto a la etapa de la edad en los seres humanos:
//  - Infancia: Desde el nacimiento hasta los 11 años
//  - Adolescencia: Desde los 12 hasta los 18 años
//  - Juventud: Desde los 19 hasta los 26 años
//  - Adultez: Desde los 27 hasta los 59 años
//  - Vejez: Desde los 60 años en adelante

void ejercicio1(void){
    
    int edad;
    
    printf("Dame tu edad porfi\n");
    scanf("%d", &edad);
    
    if (edad <= 11 ) {
        printf("Hola, estas en tu infancia y tienes %d\n", edad);
    }
    
    else if (edad <= 18){
        printf("Hola, estas en tu adolescencia y tienes %d\n", edad);
    }
    
    else if (edad <= 26){
        printf("Hola, estas en tu juventud y tienes %d\n", edad);
    }
    
    else if (edad <= 59){
        printf("Hola, estas en tu adultez y tienes %d\n", edad);
    }
    
    else
        printf("Hola, estas en tu vejez y tienes %d\n", edad);
}

//============ EJERCICIO 2 ==============
//2. Los alumnos de un curso se han dividido en dos grupos A y B de acuerdo al sexo y el nombre. El grupo A esta formado por las mujeres con un nombre anterior a la M y los hombres con un nombre posterior a la N y el grupo B por el resto. Escribir un programa que pregunte al usuario la inicial de su nombre y sexo, y muestre por pantalla el grupo que le corresponde.

void ejercicio2(void){
    
    char sexo; //nunca antes del matrimonio

    char inicialNombre;
    
    printf("Dame tu sexo porfi (h/m)\n");
    scanf(" %c",&sexo);
    
    printf("Dame la inicial de tu nombre porfi\n");
    scanf(" %c",&inicialNombre);
    
    if (tolower(sexo) == 'm') {
        
        if(tolower(inicialNombre) <= 'm' ){
            printf("Perteneces al grupo A\n");
        }
        else{
            printf("Perteneces al grupo B\n");
        }
        
    } else {
        
        if (tolower(inicialNombre) >= 'n'){
            
            printf("Perteneces al grupo A\n");
            
        }else{
            
            printf("Perteneces al grupo B\n");
        }
    }
}


//============= EJERCICIO 3 ============
//3. Escribir un programa para una empresa que tiene salas de juegos para todas las edades y quiere calcular de forma automática el precio que debe cobrar a sus clientes por entrar. El programa debe preguntar al usuario la edad del cliente y mostrar el precio de la entrada. Si el cliente es menor de 4 años puede entrar gratis, si tiene entre 4 y 18 años debe pagar $200 y si es mayor de 18 años, $500.

void ejercicio3(void){
    
    int edad;
    
    printf("Dime cuantos años tienes pibe\n");
    scanf("%d", &edad);
    
    if(edad < 4){
        printf("Tu entrada es gratis hermano\n");
    } else{
        if (edad < 18) {
            printf("El precio de tu entrda sera de 200 pejecoins hermano\n");
        } else {
            printf("Tu pagas todo pa', el precio de tu entrada sera de 500 pejecoins hermano\n");
        }
    }
}

//============ EJERCICIO 4 ==============

//4. Dados 5 números por parte del usuario, indicar cual es el mayor de ellos.

void ejercicio4(void){
    
    int numero1;
    int numero2;
    int numero3;
    int numero4;
    int numero5;
    
    int numeroMayor;
    
    printf("Dame un numero porfi\n");
    scanf("%d", &numero1);
    
    printf("Dame otro numero porfi (llevamos dos)\n");
    scanf("%d", &numero2);
    
    printf("Dame otro numero porfi (llevamos tres)\n");
    scanf("%d", &numero3);
    
    printf("Dame otro numero porfi (llevamos cuatro)\n");
    scanf("%d", &numero4);
    
    printf("Dame otro numero porfi (llevamos cinco)\n");
    scanf("%d", &numero5);
        
    numeroMayor = numero1;
    
    if (numero2 > numeroMayor) {
        numeroMayor = numero2;
    }
    if (numero3 > numeroMayor) {
        numeroMayor = numero3;
    }
    if (numero4 > numeroMayor) {
        numeroMayor = numero4;
    }
    if (numero5 > numeroMayor) {
        numeroMayor = numero5;
    }
    
    printf("El numero mayor será el %d\n", numeroMayor);
}

//
//  main.c
//  CasoPractico1
//
//  Created by Hakeem Espejel on 25/09/25.
//

#include <stdio.h>

int main(void) {
    
    //Declaracion de Variables
    
    int cantCarroceria = 0;
    int cantMotores = 0;
    int cantLlantas = 0;
    int cantAdornos = 0;
    int cantAutos = 0;
    
    float precFinCarroceria = 0.0;
    float precFinMotor = 0.0;
    float precFinLlantas = 0.0;
    float precFinAdornos = 0.0;
    float precTot = 0.0;
    
    float descTot = 0.0;
    
    //Declaracion de constantes
    
    float precCarroceria = 20.0;
    float precMotor = 15.0;
    float precLlantas = 1.0;
    float precAdornos = 1.5;
    
    float desc1 = 0.05;
    float desc2 = 0.10;
    
    float dolar = 18.95;
    
    //Creación de logica
    
    printf("Dame la cantidad de carrocerias\n", cantCarroceria);
    scanf("%d", &cantCarroceria);
    
    printf("Dame la cantidad de motores\n", cantMotores);
    scanf("%d", &cantMotores);
    
    printf("Dame la cantidad de llantas\n", cantLlantas);
    scanf("%d", &cantLlantas);
    
    printf("Dame la cantidad de adornos\n", cantAdornos);
    scanf("%d", &cantAdornos);
    
    if (cantCarroceria >= 500) {
            precFinCarroceria = precCarroceria * cantCarroceria * (1.0f - desc2) * dolar;
        } else if (cantCarroceria >= 100) {
            precFinCarroceria = precCarroceria * cantCarroceria * (1.0f - desc1) * dolar;
        } else {
            precFinCarroceria = precCarroceria * cantCarroceria * dolar;
        }

    if (cantMotores >= 500) {
            precFinMotor = precMotor * cantMotores * (1.0f - desc2) * dolar;
        } else if (cantMotores >= 100) {
            precFinMotor = precMotor * cantMotores * (1.0f - desc1) * dolar;
        } else {
            precFinMotor = precMotor * cantMotores * dolar;
        }
    
    precFinLlantas = precLlantas*cantLlantas*dolar;
    precFinAdornos = precAdornos*cantAdornos*dolar;
    
    printf("El precio con descuento de las carrocerias sera de: %.2f\n", precFinCarroceria);
    printf("El precio con descuento de los motores sera de: %.2f\n", precFinMotor);
    
    precTot = precFinCarroceria + precFinMotor + precFinLlantas + precFinAdornos;
    
    printf("El precio total a pagar sera de: %.2f\n", precTot);
    
    // Calculo de carritos posibles
    cantCarroceria =  cantCarroceria / 1;
    cantMotores = cantMotores / 1;
    cantLlantas = cantLlantas / 4;
    cantAdornos = cantAdornos / 2;

    cantAutos = cantMotores;
    if (cantCarroceria < cantAutos) {
        cantAutos = cantCarroceria;
    }
    if (cantLlantas < cantAutos) {
        cantAutos = cantLlantas;
    }
    if (cantAdornos < cantAutos) {
        cantAutos = cantAdornos;
    }

        printf("Cantidad de carritos posibles: %d\n", cantAutos);
    
    return 0;
}

/**********************************************************
 *    ----       Universidad Sergio Arboleda      ----
 * Fecha: 5/08/2022
 * Autor: Roxanyffer Andreina Velasco Contreras
 * Materia: Computación Paralela y Distribuida
 * Tema: Introducción a la programación en C
 **********************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "Ejercicios_lib.h"

 
    /****************************************************
     * EJERCICIO 1
     * Objetivo: Calcular el producto de dos enteros
     ****************************************************/
    void ejercicio1(){
        int num1, num2, result;
        printf("\n** Bienvenido estimado usuario **\n"); 
        printf("** Este programa le proporciona el resultado de dos enteros **\n");
        printf("\nIngrese el primer número entero: ");
        scanf("%d", &num1);

        printf("Ingrese el segundo número entero: ");
        scanf("%d", &num2);

        result = num1*num2;

        printf("\nEl producto de los dos números enteros ingresados es: %i\n", result);
    }

     /*****************************************************************************************
     * EJERCICIO 2
     * Objetivo: Calcular los años, semanas y días de un número
     *****************************************************************************************/
    void ejercicio2(){
        int daysI, days, year = 365, years, weeks;

        printf("\n** Bienvenido estimado usuario **\n"); 
        printf("** Este programa le proporciona los años, semanas y días de un número determinado de días **\n");
        
        printf("\nIngrese el número de días: ");
        scanf("%d", &daysI);

        years = daysI/year;
        weeks = (daysI%year)/7;
        days =  (weeks)%30;

        printf("\nEl resultado de los días ingresados es: ");
        printf("\nAños: %d", years);
        printf("\nSemanas: %d", weeks);
        printf("\nDías: %d\n", days);    
    }

     /*****************************************************************************************
     * EJERCICIO 3
     * Objetivo: Calcular la distancia entre dos puntos
     *****************************************************************************************/
    void ejercicio3(){
        int x1, x2, y1, y2;
        float result; 
            
        printf("\n** Bienvenido estimado usuario **\n"); 
        printf("** Este programa calcula la distancia entre dos puntos **\n");
        
        printf("\nIngrese un valor para x1: ");
        scanf("%d", &x1);

        printf("\nIngrese un valor para y1: ");
        scanf("%d", &y1);

        printf("\nIngrese un valor para x2: ");
        scanf("%d", &x2);

        printf("\nIngrese un valor para y2: ");
        scanf("%d", &y2);

        result = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
        printf("La distancia entre %d,%d y %d,%d es: %f", x1, y1, x2, y2, result);
    }

     /*****************************************************************************************
     * EJERCICIO 4
     * Objetivo: Calcular los primeros 10 números naturales
     *****************************************************************************************/
    void ejercicio4(){
        int num;
        printf("\n** Bienvenido estimado usuario **\n"); 
        printf("** Este programa calcula los primeros 10 números naturales **\n");

        num = 1;  
        printf("\nLos primeros 10 números naturales son: ");
        while (num <= 10) {       
            printf("%d ", num);   
            num++;                  
            }
    }

    /*****************************************************************************************
     * EJERCICIO 5
     * Objetivo: Muestra un patrón como triángulo rectángulo usando un asterísco
     *****************************************************************************************/
    void ejercicio5(){
        int cant, triangulo=1;
        
        printf("\n** Bienvenido estimado usuario **\n"); 
        printf("** Este programa muestra un patrón como triángulo rectángulo usando un asterísco **\n");
        printf("\nIngrese la cantidad de líneas del triángulo (Máx 14): ");
        scanf("%d", &cant);

        if (cant<=14){
            printf("\n");
            for(int i=1; i<=cant; i++){
                for(int j=1; j<=triangulo; j++){
                    printf("*");
                }
                printf("\n");
                triangulo = triangulo+1; 
            }

        } else {
            printf("\nLa cantidad de líneas del triangulo no puede ser mayor a 14, por favor intente nuevamente...\n");
        }
    }

    /*****************************************************************************************
     * EJERCICIO 6
     * Objetivo: Imprimir matriz de "1", de tamaño NxN
     *****************************************************************************************/
     void ejercicio6(){
        int tam;
        printf("\n** Bienvenido estimado usuario **\n"); 
        printf("** Este programa imprime una matriz de '1', de tamaño NxN **\n");
        printf("\nIngrese el tamaño de la matriz (Máx 7): ");
        scanf("%d", &tam);

            if (tam<=7){
                for(int i=0; i<tam; i++){
                    for(int j=0;j<tam; j++){
                    printf(" 1");
                    }
            printf("\n");
                }
        } else {
            printf("\nEl tamaño de la matriz debe ser siempre menor a 8, por favor intente nuevamente...\n");
        }
    }

    /*****************************************************************************************
     * EJERCICIO 7
     * Objetivo: Imprimir matriz de números aleatorios, de tamaño NxN
     *****************************************************************************************/
    void ejercicio7(){
        int tam;
        printf("\n** Bienvenido estimado usuario **\n"); 
        printf("** Este programa imprime una matriz de números aleatorios, de tamaño NxN **\n");
        printf("\nIngrese el tamaño de la matriz (Máx 7): ");
        scanf("%d", &tam);
        int matriz[tam][tam];

            if (tam<=7){
                for(int i=0; i<tam; i++){
                    for(int j=0;j<tam; j++){
                    printf(" %d", matriz[tam][tam]=1+rand()%(8+1));
                    }
            printf("\n");
                }
        } else {
            printf("\nEl tamaño de la matriz debe ser siempre menor a 8, por favor intente nuevamente...\n");
        }
    }

    /*****************************************************************************************
     * EJERCICIO 8
     * Objetivo: Imprimir 2 matrices de números aleatorios, de tamaño NxN y sumarlas
     *****************************************************************************************/
    void ejercicio8(){    
        int tam;
        printf("\n** Bienvenido estimado usuario **\n"); 
        printf("** Este programa imprime 2 matrices de números aleatorios, de tamaño NxN y las suma **\n");
        printf("\nIngrese el tamaño de las matrices (Máx 7): ");
        scanf("%d", &tam);
        int matrizA[tam][tam], matrizB[tam][tam], matrizC[tam][tam];

            if (tam<=7){
                printf(" MATRIZ A\n");    
                for(int i=0; i<tam; i++){
                    for(int j=0;j<tam; j++){
                    matrizA[i][j]=1+rand()%(8+1);
                    printf(" %d", matrizA[i][j]);
                    }            
            printf("\n");
                }

                printf("\n");
                printf(" MATRIZ B\n");  
                for(int i=0; i<tam; i++){
                    for(int j=0;j<tam; j++){
                    matrizB[i][j]=1+rand()%(8+1);
                    printf(" %d", matrizB[i][j]);
                    }
            printf("\n");
                }

            printf("\n");
            printf(" MATRIZ A + B\n");  
            for(int i=0; i<tam; i++){
            for(int j=0;j<tam; j++){
                matrizC[i][j]= matrizA[i][j] + matrizB[i][j];
                printf(" %d", matrizC[i][j]);
            }
            printf("\n");
        }
        
        } else {
            printf("\nEl tamaño de las matrices debe ser siempre menor a 8, por favor intente nuevamente...\n");
        }
    }

    /*****************************************************************************************
     * EJERCICIO 9
     * Objetivo: Imprimir 2 matrices de números aleatorios, de tamaño NxN y restarlas
     *****************************************************************************************/
    void ejercicio9(){
        int tam;
        printf("\n** Bienvenido estimado usuario **\n"); 
        printf("** Este programa imprime 2 matrices de números aleatorios, de tamaño NxN y las resta **\n");
        printf("\nIngrese el tamaño de las matrices (Máx 7): ");
        scanf("%d", &tam);
        int matrizA[tam][tam], matrizB[tam][tam], matrizC[tam][tam];

            if (tam<=7){
                printf(" MATRIZ A\n");    
                for(int i=0; i<tam; i++){
                    for(int j=0;j<tam; j++){
                    matrizA[i][j]=1+rand()%(8+1);
                    printf(" %d", matrizA[i][j]);
                    }            
            printf("\n");
                }

                printf("\n");
                printf(" MATRIZ B\n");  
                for(int i=0; i<tam; i++){
                    for(int j=0;j<tam; j++){
                    matrizB[i][j]=1+rand()%(8+1);
                    printf(" %d", matrizB[i][j]);
                    }
            printf("\n");
                }

            printf("\n");
            printf(" MATRIZ A - B\n");  
            for(int i=0; i<tam; i++){
            for(int j=0;j<tam; j++){
                matrizC[i][j]= matrizA[i][j] - matrizB[i][j];
                printf(" %d", matrizC[i][j]);
            }
            printf("\n");
        }
        
        } else {
            printf("\nEl tamaño de las matrices debe ser siempre menor a 8, por favor intente nuevamente...\n");
        }
    }
    /*****************************************************************************************
     * EJERCICIO 10
     * Objetivo: Imprimir 2 matrices de números aleatorios, de tamaño NxN y multiplicarlas
     *****************************************************************************************/   
    void ejercicio10(){
        int tam;
        printf("\n** Bienvenido estimado usuario **\n"); 
        printf("** Este programa imprime 2 matrices de números aleatorios, de tamaño NxN y las multiplica **\n");
        printf("\nIngrese el tamaño de las matrices (Máx 7): ");
        scanf("%d", &tam);
        int matrizA[tam][tam], matrizB[tam][tam], matrizC[tam][tam];

            if (tam<=7){
                printf(" MATRIZ A\n");    
                for(int i=0; i<tam; i++){
                    for(int j=0;j<tam; j++){
                    matrizA[i][j]=1+rand()%(8+1);
                    printf(" %d", matrizA[i][j]);
                    }            
            printf("\n");
                }

                printf("\n");
                printf(" MATRIZ B\n");  
                for(int i=0; i<tam; i++){
                    for(int j=0;j<tam; j++){
                    matrizB[i][j]=1+rand()%(8+1);
                    printf(" %d", matrizB[i][j]);
                    }
            printf("\n");
                }

            printf("\n");
            printf(" MATRIZ A * B\n");  
            for(int i=0; i<tam; i++){
            for(int j=0;j<tam; j++){
                matrizC[i][j]= matrizA[i][j] * matrizB[i][j];
                printf(" %d", matrizC[i][j]);
            }
            printf("\n");
        }
        
        } else {
            printf("\nEl tamaño de las matrices debe ser siempre menor a 8, por favor intente nuevamente...\n");
        }
    }

    void menu(){
    int opcion;
    do
    {
    	printf( "\n");
        printf( "\n\t | MENÚ DE OPCIONES | ");
        printf( "\n  |1| Calcular el producto de dos enteros ");
        printf( "\n  |2| Convertir días en años, semanas y días ");
        printf( "\n  |3| Calcular la distancia entre dos puntos ");
        printf( "\n  |4| Mostrar los 10 primeros números naturales ");
        printf( "\n  |5| Mostrar patrón como triángulo ractángulo usando (*) ");
        printf( "\n  |6| Imprimir una matriz de '1' de tamaño NxN ");
        printf( "\n  |7| Imprimir una matriz de números aleatorios enteros de tamaño NxN ");
        printf( "\n  |8| Impresión y suma de dos matrices de tamaño NxN ");
        printf( "\n  |9| Impresión y resta de dos matrices de tamaño NxN ");
        printf( "\n  |10| Impresión y multiplicación de dos matrices de tamaño NxN ");
        printf( "\n  |11| Salir " );
        printf( "\n\n   Digite el número de la opción (1-11): ");
        scanf( "%d", &opcion );

        switch (opcion)
        {
            case 1: 
                ejercicio1();
                    break;

            case 2: 
                ejercicio2();
                    break;

            case 3: 
                ejercicio3();
                    break;

            case 4: 
                ejercicio4();
                    break;

            case 5: 
                ejercicio5();
                    break;

            case 6: 
                ejercicio6();
                    break;
                                        
            case 7: 
                ejercicio7();
                    break;
                                
            case 8: 
                ejercicio8();
                    break;
                         
            case 9: 
                ejercicio9();
                    break;
                                        
            case 10: 
                ejercicio10();
                    break;
         }

    } while (opcion != 11);
    }






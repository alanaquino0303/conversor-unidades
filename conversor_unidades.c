#include <stdio.h>
#include <stdlib.h>

void convertirTemperatura();
void convertirLongitud();
void convertirPeso();

int main() {
    int opcion;

    do {
        printf("\nCONVERSOR DE UNIDADES\n");
        printf("1. Convertir temperatura.\n");
        printf("2. Convertir longitud.\n");
        printf("3. Convertir peso.\n");
        printf("0. Salir.\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);

        switch(opcion) {
            case 1:
                convertirTemperatura();
                break;
            case 2:
                convertirLongitud();
                break;
            case 3:
                convertirPeso();
                break;
            case 0:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opción no válida. Intente nuevamente.\n");
        }
    } while(opcion != 0);

    return 0;
}

void convertirTemperatura() {
    int opcion;
    double temp, resultado;

    printf("\nCONVERSOR DE TEMPERATURA\n");
    printf("1. Celsius a Fahrenheit.\n");
    printf("2. Fahrenheit a Celsius.\n");
    printf("3. Celsius a Kelvin.\n");
    printf("4. Kelvin a Celsius.\n");
    printf("Seleccione una opción: ");
    scanf("%d", &opcion);

    printf("Ingrese el valor: ");
    scanf("%lf", &temp);

    switch(opcion) {
        case 1:
            resultado = (temp * 9 / 5) + 32;
            printf("%.2lf °C = %.2lf °F\n", temp, resultado);
            break;
        case 2:
            resultado = (temp - 32) * 5 / 9;
            printf("%.2lf °F = %.2lf °C\n", temp, resultado);
            break;
        case 3:
            resultado = temp + 273.15;
            printf("%.2lf °C = %.2lf K\n", temp, resultado);
            break;
        case 4:
            resultado = temp - 273.15;
            printf("%.2lf K = %.2lf °C\n", temp, resultado);
            break;
        default:
            printf("Opción no válida.\n");
    }
}

void convertirLongitud() {
    int opcion;
    double valor, resultado;

    printf("\nCONVERSOR DE LONGITUD\n");
    printf("1. Metros a Pies.\n");
    printf("2. Pies a Metros.\n");
    printf("3. Centímetros a Pulgadas.\n");
    printf("4. Pulgadas a Centímetros.\n");
    printf("Seleccione una opción: ");
    scanf("%d", &opcion);

    printf("Ingrese el valor: ");
    scanf("%lf", &valor);

    switch(opcion) {
        case 1:
            resultado = valor * 3.28084;
            printf("%.2lf m = %.2lf ft\n", valor, resultado);
            break;
        case 2:
            resultado = valor / 3.28084;
            printf("%.2lf ft = %.2lf m\n", valor, resultado);
            break;
        case 3:
            resultado = valor / 2.54;
            printf("%.2lf cm = %.2lf in\n", valor, resultado);
            break;
        case 4:
            resultado = valor * 2.54;
            printf("%.2lf in = %.2lf cm\n", valor, resultado);
            break;
        default:
            printf("Opción no válida.\n");
    }
}

void convertirPeso() {
    int opcion;
    double valor, resultado;

    printf("\nCONVERSOR DE PESO\n");
    printf("1. Kilogramos a Libras.\n");
    printf("2. Libras a Kilogramos.\n");
    printf("3. Onzas a Gramos.\n");
    printf("4. Gramos a Onzas.\n");
    printf("Seleccione una opción: ");
    scanf("%d", &opcion);

    printf("Ingrese el valor: ");
    scanf("%lf", &valor);

    switch(opcion) {
        case 1:
            resultado = valor * 2.20462;
            printf("%.2lf kg = %.2lf lb\n", valor, resultado);
            break;
        case 2:
            resultado = valor / 2.20462;
            printf("%.2lf lb = %.2lf kg\n", valor, resultado);
            break;
        case 3:
            resultado = valor * 28.3495;
            printf("%.2lf oz = %.2lf g\n", valor, resultado);
            break;
        case 4:
            resultado = valor / 28.3495;
            printf("%.2lf g = %.2lf oz\n", valor, resultado);
            break;
        default:
            printf("Opción no válida.\n");
    }
}
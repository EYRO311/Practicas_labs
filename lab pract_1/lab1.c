#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void print_action_time(char* action_name, clock_t start_time) {
    double elapsed_time = ((double)(clock() - start_time)) / CLOCKS_PER_SEC;
    printf("Tiempo de %s: %.6f segundos\n", action_name, elapsed_time);
}

int main() {
    int elementos[1000];

    // Crear arreglo
    clock_t start_time = clock();
    srand(time(NULL));
    for (int i = 0; i < 1000; ++i) {
        elementos[i] = rand() % 1000 + 1;
    }
    print_action_time("creación del arreglo", start_time);

    // Imprimir elementos
    for (int i = 0; i < 1000; ++i) {
        printf("%d\n", elementos[i]);
    }

    // Función de búsqueda
    int busqueda;
    printf("Ingresa un número a buscar: ");
    scanf("%d", &busqueda);
    start_time = clock();
    for (int i = 0; i < 1000; ++i) {
        if (elementos[i] == busqueda) {
            printf("¡Sí está!\n");
            break;
        }
        else {
            printf("¡No está!\n");
            break;
        }
    }
    print_action_time("búsqueda", start_time);

    // Ordenar arreglo
    int n = sizeof(elementos) / sizeof(elementos[0]);
    start_time = clock();
    for (int i = 0; i < n-1; ++i) {
        for (int j = 0; j < n-i-1; ++j) {
            if (elementos[j] > elementos[j+1]) {
                int temp = elementos[j];
                elementos[j] = elementos[j+1];
                elementos[j+1] = temp;
            }
        }
    }
    print_action_time("ordenamiento", start_time);

    // Imprimir arreglo ordenado
    for (int i = 0; i < 1000; ++i) {
        printf("%d\n", elementos[i]);
    }

    // Función de búsqueda después de ordenar
    printf("Ingresa un número a buscar: ");
    scanf("%d", &busqueda);
    start_time = clock();
    for (int i = 0; i < 1000; ++i) {
        if (elementos[i] == busqueda) {
            printf("¡Sí está!\n");
            break;
        }
        else {
            printf("¡No está!\n");
            break;
        }
    }
    print_action_time("búsqueda después de ordenamiento", start_time);

    return 0;
}

#include <stdio.h>
#include "hesaplayici.h"

int carp(int a, int b) {
    return a * b;
}

int bol(int a, int b) {
    if (b == 0) {
        printf("S�f�ra b�lme hatas�!\n");
        return 0;
        printf("Bu sat�r asla �al��maz.\n"); // Dead code
    }
    return a / b;
}

void pointer_hatasi() {
    int *ptr = NULL;
    *ptr = 5;  // NULL pointer dereference
}

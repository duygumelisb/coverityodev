#include <stdio.h>
#include <stdlib.h>
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

void uninitialized_kullanim() {
    int z;
    printf("Z de�i�keni: %d\n", z); // Ba�lat�lmam�� de�i�ken kullan�m�
}

void dizi_tasimasi() {
    int dizi[3] = {1, 2, 3};
    dizi[5] = 10; // Array out-of-bounds
}

void double_free_hatasi() {
    int *p = (int *)malloc(4 * sizeof(int));
    free(p);
    free(p); // Double free hatas�
}

void sonsuz_dongu() {
    while (1) {
        printf("Bu d�ng� sonsuza kadar d�ner!\n");
        break; // infinite loop de�il ama ama� g�sterim � istersen break'i kald�rabilirsin
    }
}


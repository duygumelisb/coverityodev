#include <stdio.h>
#include <stdlib.h>
#include "hesaplayici.h"

int carp(int a, int b) {
    return a * b;
}

int bol(int a, int b) {
    if (b == 0) {
        printf("Sýfýra bölme hatasý!\n");
        return 0;
        printf("Bu satýr asla çalýþmaz.\n"); // Dead code
    }
    return a / b;
}

void pointer_hatasi() {
    int *ptr = NULL;
    *ptr = 5;  // NULL pointer dereference
}

void uninitialized_kullanim() {
    int z;
    printf("Z deðiþkeni: %d\n", z); // Baþlatýlmamýþ deðiþken kullanýmý
}

void dizi_tasimasi() {
    int dizi[3] = {1, 2, 3};
    dizi[5] = 10; // Array out-of-bounds
}

void double_free_hatasi() {
    int *p = (int *)malloc(4 * sizeof(int));
    free(p);
    free(p); // Double free hatasý
}

void sonsuz_dongu() {
    while (1) {
        printf("Bu döngü sonsuza kadar döner!\n");
        break; // infinite loop deðil ama amaç gösterim › istersen break'i kaldýrabilirsin
    }
}


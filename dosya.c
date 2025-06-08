#include <stdio.h>
#include <stdlib.h>
#include "dosya.h"

void dosya_yaz() {
    FILE *f = fopen("veri.txt", "w");
    fprintf(f, "Bu veri dosyaya yazýldý.\n");
    // fclose(f); // HATA: resource leak
}

void bellek_sizintisi() {
    int *dizi = (int *)malloc(10 * sizeof(int));
    dizi[0] = 42;
    // free(dizi); // HATA: memory leak
}

void guvensiz_giris() {
    char ad[10];
    printf("Adýnýzý girin: ");
    scanf("%s", ad); // HATA: unchecked return value
}


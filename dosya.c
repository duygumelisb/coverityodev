#include <stdio.h>
#include <stdlib.h>
#include "dosya.h"

void dosya_yaz() {
    FILE *f = fopen("veri.txt", "w");
    fprintf(f, "Bu veri dosyaya yaz�ld�.\n");
    // fclose(f);  // HATA: Dosya kapat�lmad� � resource leak
}

void bellek_sizintisi() {
    int *dizi = (int *)malloc(10 * sizeof(int));
    dizi[0] = 42;
    // free(dizi); // HATA: Bellek serbest b�rak�lmad� � memory leak
}

void guvensiz_giris() {
    char ad[10];
    printf("Ad�n�z� girin: ");
    scanf("%s", ad);  // HATA: return de�eri kontrol edilmiyor
}


#include <stdio.h>
#include "hesaplayici.h"
    
#include "dosya.h"
int main() {

    int x = 10;
    int y = 0;

    printf("Çarpým: %d\n", carp(x, 3));
    printf("Bölüm: %d\n", bol(x, y)); // y = 0, sýfýra bölme
    pointer_hatasi(); // NULL pointer hatasý

    dosya_yaz();
    bellek_sizintisi();
    guvensiz_giris();


    return 0;
}

#include <stdio.h>
#include "hesaplayici.h"
#include "dosya.h"

int main() {
    int x = 10;
    int y = 0;

    printf("�arp�m: %d\n", carp(x, 3));
    printf("B�l�m: %d\n", bol(x, y)); 
    pointer_hatasi(); 

    dosya_yaz();
    bellek_sizintisi();
    guvensiz_giris();

   
    uninitialized_kullanim();
    dizi_tasimasi();
    double_free_hatasi();
    sonsuz_dongu();

    return 0;
}


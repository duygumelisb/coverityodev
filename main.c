#include <stdio.h>
#include "hesaplayici.h"
    
#include "dosya.h"
int main() {

    int x = 10;
    int y = 0;

    printf("�arp�m: %d\n", carp(x, 3));
    printf("B�l�m: %d\n", bol(x, y)); // y = 0, s�f�ra b�lme
    pointer_hatasi(); // NULL pointer hatas�

    dosya_yaz();
    bellek_sizintisi();
    guvensiz_giris();


    return 0;
}

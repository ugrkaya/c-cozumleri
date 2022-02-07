/******************************************************************************
BOLUM 12 SORU 13
author: https://github.com/ugrkaya

*******************************************************************************/

#include <stdio.h>

int main()
{
    char dizi[13] = "Galat asaray";
    puts(dizi);
    printf("Karakter dizisindeki bosluklar haric birbirinden farklı elemanlar:\n");
    
    int i,j,sonuc;
    printf("%c",dizi[0]);
    for (i=1; i<12; i++) {
    for (j=1; j<=i; j++) {
    if (dizi[i] != dizi[i-j] && dizi[i] != 32) // 32 bosluk karakterinin ascii tablosundaki decimal değeri
    sonuc = 1;
    else {
        sonuc = 0; 
        break;
        }
        
    }
    if (sonuc)
    printf("%c",dizi[i]);
    }
return 0;
}
/******************************************************************************

BOLUM 12 SORU 1
author: https://github.com/ugrkaya

*******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void reverse(char dizi[], char sonuc[]);

int main()
{
    char dizi[11]={"Galatasaray"};
    char sonuc[11];
    printf("Dizinin içeriği:");
    puts(dizi);
    reverse(dizi,sonuc);
    printf("Tersten yazilmis hali:");
    puts(sonuc);
    

    return 0;
}

void reverse(char dizi[], char sonuc[]) {
    
    int uzunluk;
    int i;
    uzunluk = strlen(dizi);
    
    for(i=uzunluk ; i>=0 ; i--){
       
      sonuc[uzunluk-i] = dizi[i-1];
    }
    sonuc[11] = '\0';
    return;
    
}
}
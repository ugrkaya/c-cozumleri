/*
BOLUM 12 SORU 6
author: https://github.com/ugrkaya

*******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int strIsEqualIgnoreCase(char dizi[], char dizi1[]);

int main()
{
    char dizi[]={"TURKIYE"};
    char dizi1[]={"turkiye"};
    char dizi2[]={"istanbul"};
    int sonuc,sonuc2;
    
    printf("3 adet diziyi sirasiyle yazdir:\n");
    puts(dizi);
    puts(dizi1);
    puts(dizi2);
    printf("\n");
    printf("ilk ve ikinci diziyi karşılaştır:\n");
    sonuc = strIsEqualIgnoreCase(dizi,dizi1);
    if(sonuc)
    printf("Diziler esittir.\n");
    else printf("Diziler esit degildir.\n");
    printf("ilk ve ucuncu diziyi karşılaştır:\n");
    sonuc = strIsEqualIgnoreCase(dizi,dizi2);
    if (sonuc2) 
    printf("Diziler esittir.\n");
    else printf("Diziler esit degildir.\n");
    return 0;
}


int strIsEqualIgnoreCase(char dizi[], char dizi1[]){
    
    int i,uzunluk1,uzunluk2,sonuc;
    
    uzunluk1 = strlen(dizi);
    uzunluk2 = strlen(dizi1);
    
    if(uzunluk1 != uzunluk2)
    return 0;
    
    for(i=0; i<uzunluk1; i++) {
    dizi[i] = tolower(dizi[i]);
    dizi1[i] = tolower(dizi1[i]);
    if (dizi[i]==dizi1[i])
    sonuc = 1;
    else sonuc = 0; break;
    }
    return sonuc;
    
}

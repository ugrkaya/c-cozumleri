/*
BOLUM 12 SORU 7
author: https://github.com/ugrkaya

*******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int strIsEqualIgnoreCase(char dizi[], char dizi1[]);

int main()
{
    char dizi[]={"Galatasaray"};
    char dizi1[]={"GALATASARAY"};
    char dizi2[]={"trabzonspor"};
    printf("1. Dizi:");
    puts(dizi);
    printf("2. Dizi:");
    puts(dizi1);
    printf("3. Dizi:");
    puts(dizi2);
    int sonuc,sonuc1;
    sonuc = strcmpi(dizi,dizi1);  /* strrev fonksiyonu ANSI standartında değildir. GCC derleyicisi tarafından desteklenmektedir.
    Gönderilen 2 dizi büyük kücük fark etmeksizin birbirine eşit mi diye bakar. Eşitse 0 değilse 1 döndürür.*/
    sonuc1 = strcmpi(dizi,dizi2);
    if (sonuc)
    printf("1. ve 2. dizi esit degidir.\n");
    else     printf("1. ve 2. dizi esittir.\n");
    if (sonuc1)
    printf("1. ve 3. dizi esit degidir.\n");
    else     printf("1. ve 3. dizi esittir.\n");
    return 0;
}



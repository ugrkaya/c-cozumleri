/******************************************************************************

BOLUM 12 SORU 2
author: https://github.com/ugrkaya

*******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void srtToUpper(char dizi[]);

int main()
{
    char dizi[]={"galatasaray"};
    
    printf("Dizinin içeriği:");
    puts(dizi);
    srtToUpper(dizi);
    printf("Buyuk harflere cevirlmis hali:");
    puts(dizi);
    

    return 0;
}

void srtToUpper(char dizi[]) {
    
    int uzunluk;
    int i;
    uzunluk = strlen(dizi);
    
    for(i=0; i<=uzunluk; i++)
    dizi[i] = toupper(dizi[i]);
    
    return;
    
}

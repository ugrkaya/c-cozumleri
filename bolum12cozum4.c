/******************************************************************************

BOLUM 12 SORU 4
author: https://github.com/ugrkaya

*******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void srtToLower(char dizi[]);

int main()
{
    char dizi[]={"TURKEY"};
    
    printf("Dizinin içeriği:");
    puts(dizi);
    srtToLower(dizi);
    printf("Kucuk harflere cevirlmis hali:");
    puts(dizi);
    

    return 0;
}

void srtToLower(char dizi[]) {
    
    int uzunluk;
    int i;
    uzunluk = strlen(dizi);
    
    for(i=0; i<=uzunluk; i++)
    dizi[i] = tolower(dizi[i]);
    
    return;
    
}

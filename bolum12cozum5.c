/*
BOLUM 12 SORU 5
author: https://github.com/ugrkaya

*******************************************************************************/

#include <stdio.h>
#include <string.h>


int main()
{
    char dizi[]={"TURKIYE"};
    
    printf("Dizinin icerigi:");
    puts(dizi);
    strlwr(dizi); // Bu fonksiyon standart kütüphanelerde bulunmaz. GCC derleyicisinin string kütüphanesinde bulunur.
    printf("Kucuk harflere cevirlmis hali:");
    puts(dizi);
    

    return 0;
}



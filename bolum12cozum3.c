/******************************************************************************

BOLUM 12 SORU 3
author: https://github.com/ugrkaya

*******************************************************************************/

#include <stdio.h>
#include <string.h>


int main()
{
    char dizi[]={"turkey"};
    
    printf("Dizinin icerigi:");
    puts(dizi);
    strupr(dizi); // bu fonksiyon standart kütüphanelerde bulunmaz. GCC derleyicisinin string kütüphanesinde bulunur.
    printf("Buyuk harflere cevirlmis hali:");
    puts(dizi);
    

    return 0;
}


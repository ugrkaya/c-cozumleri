/*
BOLUM 12 SORU 8
author: https://github.com/ugrkaya

*******************************************************************************/

#include <stdio.h>
#include <string.h>


int main()

{
    char dizi[]={"turkiye"};
    
    printf("Dizinin icerigi: ");
    puts(dizi);
    strrev(dizi);		/* strrev fonksiyonu ANSI standartında değildir. GCC derleyicisi tarafından desteklenmektedir.*/
    printf("Tersten yazilmis hali: ");
    puts(dizi);
    

    return 0;
}  
    

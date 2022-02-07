/*
BOLUM 11 SORU 3
author: https://github.com/ugrkaya
*/

	#include <stdio.h>

    int kareBul (int sayi);
    
    int main (int argc, const char * argv[])
    {
        int sayi;
        printf("Sayi giriniz:");
        scanf("%d",&sayi);
        printf("\nGirdiginiz sayinin karesi:%d",kareBul(sayi));
        
        return 0;
     }
    
    int kareBul(int sayi)
    {
        int karesi;
        karesi = sayi * sayi;
        return karesi;
    }
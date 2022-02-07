/******************************************************************************
author: https://github.com/ugrkaya
BOLUM 11 SORU 7
*******************************************************************************/

#include <stdio.h>

int asalMi(int);


int main()
{
    int sayi;
    printf("0'dan buyuk bir tane tam sayi giriniz:");
    scanf("%d",&sayi);
    if (sayi>0) {
    
    if (asalMi(sayi)==1) {
    printf("%d sayisi, asal sayi degildir.",sayi); 
    }
    else {
    printf("%d sayisi, asal sayidir.",sayi);
    }
    }
    else {
    printf("Yanlis sayi girisi, tekrar deneyin.");
    }
    return 0;
}


int asalMi(int sayi)
{
    if (sayi==1) 
    {
        return 0;
    }
    else 
    {
        int i;
        for (i=2; i<sayi; i++)
        {
            if (sayi%i==0) {
            return 1;
            break;
            } else continue;
        }
        return 0;
    }
}
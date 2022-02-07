/******************************************************************************

   BOLUM 11 CEVAP 8
   author: https://github.com/ugrkaya
*******************************************************************************/

#include <stdio.h>

int asalMi(int);


int main(int argc, char *argv[])
{
    int sayi;
    printf("2'den buyuk bir tam sayi giriniz:");
    scanf("%d",&sayi);
    if (sayi<=2) {
    printf("Yanlis sayi girdiniz. Tekrar deneyin.");
    }
    else  {
    printf("Girdiginiz sayiya kadar olan tum asal sayilar:");
    int i;
    for (i=2; i<=sayi; i++) {
    if (asalMi(i)==0)
    printf("%d,",i);
    }
    }
    return 0;
}

int asalMi(int sayi)
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

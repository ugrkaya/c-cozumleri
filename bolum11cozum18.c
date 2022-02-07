 /******************************************************************************
BOLUM 11
SORU 18 CEVABI
author: https://github.com/ugrkaya
*******************************************************************************/

#include <stdio.h>

long faktoriyelHesaplaIteratif(long sayi);



int main()
{   
    int i=-5;
    printf("Faktoriyelini hesaplamak istediginiz sayiyi giriniz:\n");
  //  for(i=0; i<10; i++) {
        printf("%d!=%ld\n", i, faktoriyelHesaplaIteratif(i));
   // }
 }
   long faktoriyelHesaplaIteratif(long sayi) {
       if (sayi<0) 
       return -1;
       else {
       if (sayi==0 || sayi==1)
       return 1;
       long i, sonuc = 1;
       for(i=1; i<=sayi; i++)
       sonuc = sonuc * i;
       return sonuc; }
   }

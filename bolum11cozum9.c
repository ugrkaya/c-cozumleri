/******************************************************************************

          BOLUM 11 SORU 9
author: https://github.com/ugrkaya
*******************************************************************************/

#include <stdio.h>

int topla (int dizi[], int elemanSayisi);


int main(int argc, char *argv[])
{
    int i,elemanSayisi;
    printf("Dizinin eleman sayisini giriniz:");
    scanf("%d",&elemanSayisi);
    int dizi[elemanSayisi];
    for(i=0; i<elemanSayisi; i++)
    {
        printf("Dizinin %d. elemanini giriniz:",i);
        scanf("%d",&dizi[i]);
    }
   
    printf("Dizideki tum elemanlarin toplam:%d",topla(dizi,elemanSayisi));
    
}


int topla (int dizi[], int elemanSayisi)
{
    int j;
    int toplam = 0;
    for(j=0; j<elemanSayisi; j++)
    {
        toplam = toplam + dizi[j];
    }
    
    return toplam;
}
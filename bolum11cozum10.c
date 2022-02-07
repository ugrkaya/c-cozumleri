/******************************************************************************
author: https://github.com/ugrkaya
BOLUM 11 SORU 10
*******************************************************************************/
#include <stdio.h>
int enKucukElemaniBul(int dizi[], int elemanSayisi);
int enBuyukElemaniBul (int dizi[], int elemanSayisi);


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
   
    //printf("Dizideki en buyuk eleman:%d",enBuyukElemaniBul(dizi[elemanSayisi],elemanSayisi));
    printf("\nDizideki en kucuk eleman:%d",enKucukElemaniBul(dizi,elemanSayisi));
    printf("\nDizideki en buyuk eleman:%d",enBuyukElemaniBul(dizi,elemanSayisi));



    return 0;
}

int enKucukElemaniBul (int dizi[], int elemanSayisi)
{
    int j,z,swap;
    for(j=1; j<elemanSayisi; j++)
    {
        if(dizi[0]>dizi[j])
        {
            swap = dizi[j];
            dizi[j]=dizi[0];
            dizi[0]=swap;
        } else continue;
    }

    return dizi[0];

}

int enBuyukElemaniBul (int dizi[], int elemanSayisi) 
{
    int j,z,swap;
    for(j=1; j<elemanSayisi; j++)
    {
        if(dizi[0]<dizi[j])
        {
            swap = dizi[j];
            dizi[j]=dizi[0];
            dizi[0]=swap;
        } else continue;
    }

    return dizi[0];
   
}
/******************************************************************************
BOLUM 11 SORU 11
author: https://github.com/ugrkaya
*******************************************************************************/
#include <stdio.h>
int enKucukNinciEleman(int dizi[], int elemanSayisi, int n);

int main(int argc, char *argv[])
{ 
    int i,elemanSayisi,n;
    printf("Dizinin eleman sayisini giriniz:");
    scanf("%d",&elemanSayisi);
    int dizi[elemanSayisi];
    for(i=0; i<elemanSayisi; i++)
    {
        printf("Dizinin %d. elemanini giriniz:",i);
        scanf("%d",&dizi[i]);
    }
    printf("\nDizinin en kucuk kacinci elemanini bulmak istiyorsunuz:");
    scanf("%d",&n);
    //printf("Dizideki en buyuk eleman:%d",enBuyukElemaniBul(dizi[elemanSayisi],elemanSayisi));
    printf("\nDizideki en kucuk %d. elemani:%d",n,enKucukNinciEleman(dizi,elemanSayisi,n));



    return 0;
}

int enKucukNinciEleman(int dizi[], int elemanSayisi, int n)
{
    int j,z,swap,k;
   for (k=0; k<n; k++){
    for(j=0; j<elemanSayisi; j++)
    {
        if(dizi[j]>dizi[j+1])
        {
            swap = dizi[j+1];
            dizi[j+1]=dizi[j];
            dizi[j]=swap;
        } else continue; 
    }

   
   }

 return dizi[n-1];
}


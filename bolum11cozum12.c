/******************************************************************************
BOLUM 12. SORU 12 CEVABI.
author: https://github.com/ugrkaya
*******************************************************************************/
#include <stdio.h>
int tumElemanToplami(int dizi[][5], int satir, int sutun);


int main()
{
    int satir;
    int sutun = 5;
    printf("Dizinin satir sayisini giriniz.");
    scanf("%d",&satir);
    int dizi[satir][5];
    
    printf("Dizinin sutun sayisi 5 olarak belirlenmistir.\n");
    
    int i,j;
    for(i=0; i<satir; i++)
    {
        for(j=0; j<5; j++) 
        {
            printf("Dizinin [%d][%d] indisli elemanini giriniz:",i,j);
            scanf("%d",&dizi[i][j]);
        }
    }
    
    printf("Dizinin tüm elemanlarinin toplami:%d",tumElemanToplami(dizi,satir,sutun));
    return 0;
}

int tumElemanToplami(int dizi[][5], int satir, int sutun) 
{
    int toplam=0;
    int j,i;
    satir = sutun = 5;
    for(j=0; j<sutun; j++) {
    for(i=0; i<satir; i++) 
    {
        
        toplam = dizi[i][j] + toplam;    }
}

    return toplam;
}
/******************************************************************************
BOLÜM 11
BÖLÜM SONU SORULARI, 13.SORU CEVABI
author: https://github.com/ugrkaya
*******************************************************************************/

#include <stdio.h>


int toplam(int dizi[][5], int satir,int sutun, int a);

int main()
{
    int dizi[5][5] = {{1,2,3,4,5},{6,7,8,9,10},{10,11,12,13,14},{5,5,5,5,5},{1,1,1,0,0}};
    printf("dizi[5][5] = {{1,2,3,4,5},{6,7,8,9,10},{10,11,12,13,14},{5,5,5,5,5},{1,1,1,0,0}\n");
    printf("1.satir toplami=%d\n",toplam(dizi,1,5,0));
    printf("2.satir toplami=%d\n",toplam(dizi,2,5,0));
    printf("3.satir toplami=%d\n",toplam(dizi,3,5,0));
    printf("4.satir toplami=%d\n",toplam(dizi,4,5,0));
    printf("5.satir toplami=%d\n",toplam(dizi,5,5,0));
    
    printf("1.sutun toplami=%d\n",toplam(dizi,5,1));
    printf("2.sutun toplami=%d\n",toplam(dizi,5,2));
    printf("3.sutun toplami=%d\n",toplam(dizi,5,3));
    printf("4.sutun toplami=%d\n",toplam(dizi,5,4));
    printf("5.sutun toplami=%d\n",toplam(dizi,5,5));
    

    return 0;
}

int toplam(int dizi[][5], int satir,int sutun, int a) 

    // a değişkeni satirin mi sütunun mu hesaplanacağını belirliyor
    // satir için 0, sütun için 1 değerini kontrol edeceğiz
    {
        if (a==0) {
        int toplam=0;
        int i,j;
        for(i=satir-1; i<satir; i++){
        for(j=0; j<sutun; j++){
        toplam = toplam + dizi[i][j];
        }
        }
        return toplam;
        }
 
        else if (a==1) {
        int toplam=0;
        int i,j;
        for(i=0; i<satir; i++){
        for(j=sutun-1; j<sutun; j++){
        toplam = toplam + dizi[i][j];
        }
        }
        return toplam;
        }
    
    }
       
    
    
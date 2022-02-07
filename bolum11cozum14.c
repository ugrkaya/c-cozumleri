/******************************************************************************
BOLÜM 11
BÖLÜM SONU SORULARI, 14.SORU CEVABI
author: https://github.com/ugrkaya
*******************************************************************************/

#include <stdio.h>


int enBuyukBul(int dizi[5][5],int satir,int sutun,int a);

int main()
{
    int dizi[5][5] = {{1,2,5,3,4},{6,7,8,9,10},{10,11,12,13,10},{20,21,22,23,24},{6,7,8,9,10}};
    int dizi2[5][5] = {{1,2,5,3,4},{6,7,8,9,10},{10,11,12,13,10},{20,21,22,23,24},{6,7,8,9,10}};
    printf("dizi[5][5] = {{1,2,3,4,5},{6,7,8,9,10},{10,11,12,13,14},{20,21,22,23,24},{6,7,8,9,10}}\n");
    printf("1.satir en buyuk elemani=%d\n",enBuyukBul(dizi,1,5,0));
    printf("2.satir en buyuk elemani=%d\n",enBuyukBul(dizi,2,5,0));
    printf("3.satir en buyuk elemani=%d\n",enBuyukBul(dizi,3,5,0));
    printf("4.satir en buyuk elemani=%d\n",enBuyukBul(dizi,4,5,0));
    printf("5.satir en buyuk elemani=%d\n",enBuyukBul(dizi,5,5,0));
    putchar(10);
    printf("1.sutun en buyuk elemani=%d\n",enBuyukBul(dizi2,5,1,1));
    printf("2.sutun en buyuk elemani=%d\n",enBuyukBul(dizi2,5,2,1));
    printf("3.sutun en buyuk elemani=%d\n",enBuyukBul(dizi2,5,3,1));
    printf("4.sutun en buyuk elemani=%d\n",enBuyukBul(dizi2,5,4,1));
    printf("5.sutun en buyuk elemani=%d\n",enBuyukBul(dizi2,5,5,1));
    

    return 0;
}

int enBuyukBul(int dizi[5][5],int satir,int sutun,int a) 
{
	 // a değişkeni satirin mi sütunun mu hesaplanacağını belirliyor
    // satir için 0, sütun için 1 değerini kontrol edeceğiz
	// satirlarda en büyük elemani ararken dizinin elemanlari yer değiştiği için, sütunda arama yaparken dizinin dizi2 isimli kopyasindan faydalandik.
	if (a==0)
	{
		int i=0;
		for(i=1; i<5; i++) {
		if(dizi[satir-1][0]<dizi[satir-1][i])
		{
            dizi[satir-1][0] = dizi[satir-1][i];
		}
		
		else continue;
		
	
		}
	
	    return dizi[satir-1][0];
	}

	if(a==1)
	{
		int j=0;
		for(j=1; j<5; j++){
		if(dizi[0][sutun-1]<dizi[j][sutun-1])
		{
			dizi[0][sutun-1] = dizi[j][sutun-1];
		
		} else continue; 
	}
        
        return dizi[0][sutun-1];
}

}
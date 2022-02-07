/******************************************************************************
BOLÜM 11
BÖLÜM SONU SORULARI, 16.SORU CEVABI
author: https://github.com/ugrkaya
*******************************************************************************/

#include <stdio.h>


int diyagonelMin(int dizi[5][5],int diyagonel1); // diyagonel1 değeri sıfır 1 ise soldan sağa, 0 ise sağdan sola çaprazı hesaplayacak.

int main()
{
    int dizi[5][5] = {{1,2,5,3,4},{6,7,8,9,10},{10,11,12,13,10},{20,21,22,23,24},{6,7,8,9,10}};
    int dizi2[5][5] = {{1,2,5,3,4},{6,7,8,9,10},{10,11,12,13,10},{20,21,22,23,24},{6,7,8,9,10}};
    // satirlarda en büyük elemani ararken dizinin elemanlari yer değiştiği için, sütunda arama yaparken dizinin dizi2 isimli kopyasindan faydalandik.
    printf("dizi[5][5] = {{1,2,5,3,4},{6,7,8,9,10},{10,11,12,13,10},{20,21,22,23,24},{6,7,8,9,10}}");
    putchar(10);
    printf("Soldan sağa diyagonelin en kucuk elemani:%d",diyagonelMin(dizi,1));
    putchar(10);
    printf("Sağdan sola diyagonelin en kucuk elemani:%d",diyagonelMin(dizi2,0));
    

    return 0;
}

int diyagonelMin(int dizi[5][5],int diyagonel1)  
    {
        if(diyagonel1==1){
        int i,j;
        i =j = 0;
        for(i=0; i<5; i++) 
        {
            for(j=0; j<5; j++)
            {
                if(i==j){
                    if(dizi[0][0]>dizi[i][j]) {
                        dizi[0][0] = dizi[i][j];
                        
                    } else continue;
                } 
              
            }
        }
        return dizi[0][0];
        }
        if(diyagonel1==0){ 
            if(dizi[0][4]>dizi[1][3])
            dizi[0][4] = dizi[1][3];
            if(dizi[0][4]>dizi[2][2])
               dizi[0][4] = dizi[2][2];
             if(dizi[0][4]>dizi[3][1])
             dizi[0][4] = dizi[3][1];
             if(dizi[0][4]>dizi[4][0])
             dizi[0][4] = dizi[4][0];
             return dizi[0][4];

        }
        
    }
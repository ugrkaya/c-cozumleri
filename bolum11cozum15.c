/******************************************************************************
BOLÜM 11
BÖLÜM SONU SORULARI, 15.SORU CEVABI
author: https://github.com/ugrkaya
*******************************************************************************/

#include <stdio.h>


int diyagonelTopla(int dizi[5][5],int diyagonel1); // diyagonel1 değeri sıfır 1 ise soldan sağa, 0 ise sağdan sola çaprazı hesaplayacak.

int main()
{
    int dizi[5][5] = {{1,2,5,3,4},{6,7,8,9,10},{10,11,12,13,10},{20,21,22,23,24},{6,7,8,9,10}};
    printf("dizi[5][5] = {{1,2,5,3,4},{6,7,8,9,10},{10,11,12,13,10},{20,21,22,23,24},{6,7,8,9,10}}");
    putchar(10);
    printf("Soldan sağa diyagonelin toplami:%d",diyagonelTopla(dizi,1));
    putchar(10);
    printf("Sağdan sola diyagonelin toplami:%d",diyagonelTopla(dizi,0));
    

    return 0;
}

int diyagonelTopla(int dizi[5][5],int diyagonel1)  
    {
        if(diyagonel1==1){
        int i,j,toplam;
        i=j=toplam = 0;
        for(i=0; i<5; i++) 
        {
            for(j=0; j<5; j++)
            {
                if(i==j)
                toplam = toplam + dizi[i][j];
                else continue;
            }
        }
        return toplam;    
        }
        if(diyagonel1==0)
        {
            
            int toplam = 0;
            toplam = dizi[0][4] + dizi[1][3] + dizi[2][2] + dizi[3][1] + dizi[4][0] ;
            
            return toplam;
        }
        
    }
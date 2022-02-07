/******************************************************************************
BOLUM 11
SORU 17 CEVABI
author: https://github.com/ugrkaya
*******************************************************************************/

#include <stdio.h>

void matrisSirala(int matris[3][3]);




int main()
{   
    int matris[3][3] = {{12,11,7},{10,15,16},{3,2,1}};
    int i,j;
    printf("Matris sirasiz hali:\n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
        printf("%d ",matris[i][j]);
    }
    
    putchar(10);
 }
   int a,b;
    printf("Matris buyukten kucuge sirali hali:\n");
    matrisSirala(matris);
    for(a=0; a<3; a++){
        for(b=0; b<3; b++){
            printf("%d ",matris[a][b]);
        }
        
        putchar(10);
    }
    


    return 0;
}


void matrisSirala(int matris[3][3])  

{
    int i,j,g,s;
	for(g=0; g<3; g++) {
		for(s=0; s<3; s++) {
			for(i=0; i<3; i++) {
				for(j=0; j<3; j++)
					if (matris[g][s] > matris[i][j]) {
					int gecici;
					gecici = matris[g][s];
					matris[g][s] = matris[i][j];
					matris[i][j] = gecici;
					}
					else continue;
			}
		}
	}
}
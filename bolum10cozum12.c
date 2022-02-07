/* bolum 10 soru 12
author: https://github.com/ugrkaya
*/
#include <stdio.h>




int main(int argc, char *argv[])
{   
    int i,j;
    int dizi[5][5];
    i = j = 0;
    int k,l;
    k = l = 0;
    
    for (i=0; i<5; i++){
        for(j=0; j<5; j++){
            switch(j){
                case 0: dizi[i][j] = 1;
                break;
                case 1: dizi[i][j] = 0;
                break;
                case 2: dizi[i][j] = 1;
                break;
                case 3: dizi[i][j] = 0;
                break;
                case 4: dizi[i][j] = 1;
                break;
                
            }
        }
    }
	
	for (k=0; k<5; k++){
	    for(l=0; l<5; l++){
	        printf("%d ",dizi[k][l]);
	    }
     printf("\n");
	}


return 0;
}

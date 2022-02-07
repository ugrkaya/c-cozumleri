/*bolum 10 soru 9
author: https://github.com/ugrkaya
*/


#include <stdio.h>




int main(int argc, char *argv[])
{   
    int i,j;
    int dizi[5][5];
    i = j = 0;
    
    
    
	for (i=0; i<5; i++){
	    for(j=0; j<5; j++){
	        if (i==j){
	            
	            dizi[i][j] = 1;
	        }
	            else {
	                
	                dizi[i][j]=0;
	                
	            }
	    printf("dizi[%d][%d]=%d\n",i,j,dizi[i][j]);

	    } 
	    
	}
    return 0;
}

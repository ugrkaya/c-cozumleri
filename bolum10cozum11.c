/* BOLUM 10 SORU 11
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
        for(j=0; j<5; j++){ if(i==1 && j==3 || i==1 && j==1 || i==3 && j==1 || i==3 && j==3){
            dizi[i][j] = 0;
            
        }  else {
           dizi[i][j] = 1;
                
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



#include <stdio.h>




int main(int argc, char *argv[])
{   
    int i,j;
    int dizi[5][5];
    i = j = 0;
    int k,l;
    k = l = 0;
    
    for (j=0; j<5; j++){
	    if (j > 0 && j < 5){
	        for(i=0; i<5; i++){ if(i==j || i>j){
	            if (j==1){ dizi[i][j]=2; } else if (j==2){ dizi[i][j]=3; } else if(j==3) { dizi[i][j] =4;} else if(j==4){ dizi[i][j]=5; }
	        } else {
	        dizi[i][j] = 0; }
	    }
	    
	    }
	     else {
	       for(i=0; i<5; i++) {
	        
	            dizi[i][j] = 1;
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

/* BOLUM 9 SORU 13
author: https://github.com/ugrkaya
*/


#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[])
{
	int sayi = 0;
	int j = 0;
	int i = 0;
	printf("Sayi giriniz:");
	fflush(stdin);
	scanf("%d",&sayi);
	if (sayi % 2 == 1) {

	    
	}
		else {
			sayi = sayi - 1;
			
	}
	for (i=sayi; i >0; i--){
	for (j = 0; j < i; j++){
	if (i%2==1){
	printf("*");
    }
	else {
		break;
	}
	}
	printf("\n");
	}
	
	
	
	printf("\nProgram sonlandi.");
	getchar();
	return 0;
}
/* BOLUM 9 SORU 14
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
	for (i=sayi; i >0; i--)	{
	if (i%2==0){ continue; }

	for (j = 0; j < i; j++){
	
	printf("*");
    
	}
	printf("\n");
	}
	
	
	
	printf("\nProgram sonlandi.");
	getchar();
	return 0;
}
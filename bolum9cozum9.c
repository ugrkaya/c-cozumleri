/* bolum 9 soru 9
author: https://github.com/ugrkaya
*/


#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[])
{
	int sayi = 0;
	int j = 0;
	int i = 0;
	int k,l;
	k = l = 0;
	printf("Sayi giriniz:");
	fflush(stdin);
	scanf("%d",&sayi);
	for (i = 0; i < sayi; i++){
	for (j = 0; j <= i; j++){
	printf("*");
	}
	printf("\n");
	}
	for (k = sayi-1;  k >0; k--){
	for (l = 0; l < k; l++){
	printf("*");
	}
	printf("\n");
	}
	
	printf("\nProgram sonlandi.");
	getchar();
	return 0;
}
 
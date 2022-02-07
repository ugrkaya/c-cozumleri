/* BOLUM 9 SORU 8
author: https://github.com/ugrkaya
*/
#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[])
{
	int sayi = 0;
	int j = 0;
	int i = 1;
	int k = 1;
	printf("Sayi giriniz:");
	fflush(stdin);
	scanf("%d",&sayi);
	j = sayi;
	while (k<=sayi) {
		while(i<=j){
		printf("*");
		i++;
		}
		i = 1;
		j >= 1 ? j-- : j;
		printf("\n");
		k++;
	}		
	
	
	printf("\nProgram sonlandi.");
	getchar();
	return 0;
}
 
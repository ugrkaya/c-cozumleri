/* BOLUM 10 SORU 4
author: https://github.com/ugrkaya
*/


#include <stdio.h>




int main(int argc, char *argv[])
{
	int sayilar[10] = {25,22,17,19,47,3,98,5,124,10};
	int i;
	int k;
	printf("Sayi gir:");
	scanf("%d", &k);
	printf("Girilen sayidan buyuk olan dizi elamanlari:");
	for (i=0; i<10; i++){
	
	if (sayilar[i]>k){
	printf("%d,", sayilar[i]); 
	}
	
	}
	printf("Program sonlandi.");
	getchar();
	return 0;
}

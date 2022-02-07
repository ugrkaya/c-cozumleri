/* BOLUM 10 SORU 2
author: https://github.com/ugrkaya
*/

#include <stdio.h>




int main(int argc, char *argv[])
{
	int dizi[5];
	int i;
	for(i=0; i<5; i++){
	printf("Dizinin %d.elemanini giriniz:",i+1);
	scanf("%d",&dizi[i]);
	}
	for (i=0; i<5; i++){
	if (dizi[i]%2==0){
		printf("\nDizinin cift elemanlari:%d", dizi[i]);
	}
	else {
		printf("\nDizinin tek elemanlari:%d", dizi[i]);
	}
	}
	printf("\nProgram sonlandi.");
	getchar();
	return 0;
}


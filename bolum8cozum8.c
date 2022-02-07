
/* bolum 8 soru 8
author: https://github.com/ugrkaya
*/




#include <stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
	int sayi1, sayi2;
	sayi1 = sayi2 = 0;
	char islem;
	int sonuc=0;
	fflush(stdin);
	printf("Arasinda bir adet bosluk olacak sekilde, iki adet tam sayi giriniz:");
	scanf("%d %d", &sayi1, &sayi2);
	fflush(stdin);
	printf("Yapmasinin istediginiz islemi (+,-,*,%%) giriniz:\n");
	islem = getch();
	

	if ( islem == '+' ) {
		sonuc = sayi1 + sayi2;
		printf("%d + %d = %d",sayi1,sayi2,sonuc);
	} else if ( islem == '-') {
			sonuc = sayi1 - sayi2;
		printf("%d - %d = %d",sayi1,sayi2,sonuc);
	} else if ( islem == '/'){
			sonuc = sayi1 / sayi2;
		printf("%d / %d = %d",sayi1,sayi2,sonuc);
		
	} else if ( islem == '*'){
			sonuc = sayi1 * sayi2;
		printf("%d * %d = %d",sayi1,sayi2,sonuc);
	
	} else if ( islem == '%' ){
			sonuc = sayi1 % sayi2;
		printf("%d %% %d = %d",sayi1,sayi2,sonuc);
	} else 
	
	printf("Tanimlanmamis bir operator girdiniz.");
	
	
	return 0;
}
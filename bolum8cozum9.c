/* bolum 8 soru 9
author: https://github.com/ugrkaya
*/

#include <stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
	int sayi1, sayi2;
	char islem;
	fflush(stdin);
	printf("1. sayiyi giriniz:");
	scanf("%d", &sayi1);
	fflush(stdin);
	printf("2. sayiyi giriniz:");
	scanf("%d", &sayi2);
	fflush(stdin);
	printf("Yapmak istediginiz islemi giriniz (+,-,/,*,%%):");
	islem = getchar();
	switch (islem) {
		case '+': printf("%d + %d = %d",sayi1,sayi2,sayi1+sayi2);
		break;
		case '-': printf("%d - %d = %d",sayi1,sayi2,sayi1-sayi2);
		break;
		case '/': printf("%d / %d = %d",sayi1,sayi2,sayi1/sayi2);
		break;
		case '*': printf("%d * %d = %d",sayi1,sayi2,sayi1*sayi2);
		break;
		case '%': printf("%d %% %d = %d",sayi1,sayi2,sayi1%sayi2);
		break;
		default : printf("Tanimlanmamis bir operator girdiniz."); 
		
	}
	
	
	
	return 0;
}

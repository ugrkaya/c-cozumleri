/* bolum 8 soru 12
author: https://github.com/ugrkaya
*/
#include <stdio.h>
#include <ctype.h>


int main(int argc, char *argv[])
{
	char islem;
	printf("g, G, t, T, b, B, f, F, harflerinden birini giriniz:");
	scanf("%c",&islem);
	islem = tolower(islem);
	switch (islem){
		case 'g' : printf("Galatasaray");
		break;
		case 't' : printf("Trabzonspor");
		break;
		case 'b' : printf("Besiktas");
		break;
		case 'f' : printf("Fenerbahce");
		break;
		default  : printf("Farkli bir harf girdiniz. Tekrar deneyin. Hadi Allaaaaaa emanet ben kapaniyom.");		
		break;
	}
	getchar();
	return 0;
}

/* bolum 10 soru 6
author: https://github.com/ugrkaya
*/




#include <stdio.h>
#include <stdlib.h>




int main(int argc, char *argv[])
{
	int sayilar[10] = {25,22,17,19,47,3,98,5,124,10};
	int i,k,bulundu;
	bulundu = 0;
	int hedef;
	int sayac = 1;
	
	printf("1 ile  10 arasında bir sayi giriniz:");
	fflush(stdin);
	scanf("%d", &hedef);
	if ( hedef < 11 && hedef >0 ){
		printf("Giris basarili."); if(hedef==10) { hedef = hedef - 1; }
	} else {
		printf("Yanlis sayi girdiniz. Tekrar deneyin:");
		}
	for (k=0; k<10; k++){
		for (i=1; i<10; i++){
		if (sayilar[k]>sayilar[i])
		 {
		     sayac = sayac + 1;
		   }
		   else {
		       continue;
		   } 
		    }
		if (sayac==hedef) break;
		else sayac = 1;
		continue;
	}

    printf ("\nSayilar dizisinin en buyuk [%d]. elemani:%d.",hedef, sayilar[k]);
	printf("\nProgram sonlandi.");
	getchar();
	return 0;
}
	
	

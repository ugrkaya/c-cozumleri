/* BOLUM 10 SORU 16
author: https://github.com/ugrkaya
*/

#include <stdio.h>




int main(int argc, char *argv[])
{	
	int sayi[4][4]={{12,2,3,4},{32,33,1,5},{11,10,9,8},{99,98,97,96}} ;
	int bulundu = 0;
	int aranan;
	int i,j;
	i = j = 0;
	printf("Dizi icerisinde aramak istediginiz sayiyi giriniz:");
	scanf("%d", &aranan);
	
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			if (sayi[i][j] == aranan) {
			     printf("Aradiginiz sayi dizinin sayi[%d][%d] indisli elemani icerisinde bulundu.",i,j);
			     bulundu = 1;
			     break; }
			   else {
			       continue;
			   }
			}
}
	if (bulundu == 0) {
	    printf("Aradiginiz sayi dizinin elemanlari icerisinde bulunamadi.");
	}
	
	return 0;
}
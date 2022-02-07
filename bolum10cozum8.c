/* BOLUM 10 SORU 8
/*bolum 10 soru 9
author: https://github.com/ugrkaya
*/





int main(int argc, char *argv[])
{
	int dizi[3][3]={{3,5,6},{4,2,3},{4,8,7}};
	int i,j;
	int toplam = 0;
	i = j = 0;
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("Eleman degerlerini giriniz. [%d][%d]=",i,j);
			scanf("%d",&dizi[i][j]);
		}
	}
	i = j = 0;
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			toplam = toplam + dizi[i][j]; 
		}
	
	printf("dizi[%d] satir toplami:%d\n",i,toplam);
		
	toplam = 0;
	    
	}
	
			
			
			
	printf("\nProgram sonlandi.");

	return 0;
}
	

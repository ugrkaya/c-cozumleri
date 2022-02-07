 /*
 
 BOLUM 11 SORU 2
 author: https://github.com/ugrkaya
 */
	
	
	#include <stdio.h>


    int bolunebiliyorMu(int, int);
    int obebBul(int,int);
    int okekBul(int,int);
	int minimum(int a,int b);
    
    int main(int argc, const char * argv[])
	{
    int sayi1,sayi2;
    printf("1. sayiyi giriniz:");
    scanf("%d",&sayi1);
    printf("2. sayiyi giriniz:");
    scanf("%d",&sayi2);
    
    int obeb = obebBul(sayi1,sayi2);
    int okek = okekBul(sayi1,sayi2);
    
    printf("obeb(%d,%d) = %d",sayi1,sayi2,obeb);
    printf("\nokek(%d,%d) = %d",sayi1,sayi2,okek);

    return 0;
}
    
	int minimum(int a,int b)
	{
        
        if(a>b){
            return b;
        } else {
            return a;
        }
    }
	
    int bolunebiliyorMu(int bolunen,int bolen)
    {
        if (bolunen%bolen==0)
        return 1;
        else
        return 0;
    }
    
    int obebBul(int sayi1,int sayi2)
    {
        int kucuksayi = minimum(sayi1,sayi2);
        int i;
        for (i=kucuksayi; i>0; i--)
        {
            if (bolunebiliyorMu(sayi1,i)==1 && bolunebiliyorMu(sayi2,i)==1)
            {
                return i;
            }
        }
                return 0;
        
    }
    
    int okekBul(int sayi1, int sayi2)
    {
        int buyuksayi;
        int kucuksayi = minimum(sayi1,sayi2);
        
        if (kucuksayi == sayi1)
            buyuksayi = sayi2;
        else
			buyuksayi = sayi1;
		
        if (bolunebiliyorMu(buyuksayi,kucuksayi))
        return buyuksayi;
        
        int i;
        for (i=buyuksayi*2;; i += buyuksayi)
        {
            if (bolunebiliyorMu(i,sayi1) == 1 && bolunebiliyorMu(i,sayi2) == 1)
            return i;
        }
    }
  
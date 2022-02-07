/*

BOLUM 11 SORU 6
author: https://github.com/ugrkaya

*/

	#include <stdio.h>
    #define pi 3.14
    double cevrehesapla(double);
    double alanhesapla(double);
    
    int main(void)
    {
        double yaricap;
        printf("Dairenin yari capini giriniz(cm):");
        scanf("%lf",&yaricap);
        printf("Dairenin cevresi:%.3fcm.",cevrehesapla(yaricap));
        printf("\nDairenin alani:%.3fcm.",alanhesapla(yaricap));
    
        return 0;
        
    }
    
    double cevrehesapla(double yaricap)
    {
        double cevrehesapla;
        cevrehesapla = 2 * pi * yaricap;
        return cevrehesapla;
    }
    double alanhesapla(double yaricap)
    {
        double alanhesapla;
        alanhesapla = pi * yaricap * yaricap;
        return alanhesapla;
    }
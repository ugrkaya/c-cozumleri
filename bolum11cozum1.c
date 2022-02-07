
/*

BOLUM 11 SORU 1
author: https://github.com/ugrkaya
*/

#include <stdio.h>
   
   
   int minimum(int a,int b);
   int maximum(int a, int b);
   double maximum1(double a,double b);
   double minimum1(double a,double b);


int main(int argc, char *argv[])
{	
    int sayi1,sayi2;
    double sayi1a,sayi2a;
	printf("1. tam sayiyi giriniz:");
	scanf("%d",&sayi1);
	printf("2. tam sayiyi giriniz:");
	scanf("%d",&sayi2);
    printf("Buyuk sayi:%d\nKucuk sayi:%d\n",maximum(sayi1,sayi2),minimum(sayi1,sayi2));
    printf("1. double tipindeki sayiyi giriniz:");
	scanf("%lf",&sayi1a);
	printf("1. double tipindeki sayiyi giriniz:");
	scanf("%lf",&sayi2a);
    printf("Buyuk sayi:%.10f\nKucuk sayi:%.10f",maximum1(sayi1a,sayi2a),minimum1(sayi1a,sayi2a));

	return 0;
}

    int minimum(int a,int b){
        
        if(a>b){
            return b;
        } else {
            return a;
        }
    }
    int maximum(int a,int b){
        if (a>b) {
            return a;
        } else { return b;
            
        }
    }
    double maximum1(double a,double b){
        if (a>b){
            return a;
        } else {
            return b;
        }
    }
    double minimum1(double a,double b){
        if (a>b){
            return b;
        } else {
            return a;
        }
    }
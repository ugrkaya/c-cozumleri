/******************************************************************************
bölüm 11 soru 22

author: https://github.com/ugrkaya
*******************************************************************************/

#include <stdio.h>

int fibonacci(int dizi[],int n);


int main()
{
    
    int n;
    printf("Fibonacci serisindeki kacinci elemani gormek istiyorsunuz:");
    scanf("%d",&n);
    int dizi [n];
    dizi[0]=1;
    dizi[1]=1;
    printf("%d. eleman: %d",n,fibonacci(dizi,n));
    

    return 0;
}

int fibonacci(int dizi[], int n) {
    
    int i;
    
    
    
    if(n==1 || n==2)
    return 1;
    
    
    
    for(i=0; i<n; i++)
    dizi[i+2] = dizi[i] + dizi[i+1];
    
    return dizi[n-1];
}
/******************************************************************************
bölüm 11 soru 24

author: https://github.com/ugrkaya
*******************************************************************************/

#include <stdio.h>

int treboniacci(int dizi[],int n);


int main()
{
    
    int n;
    printf("Fibonacci serisindeki kacinci elemani gormek istiyorsunuz:");
    scanf("%d",&n);
    int dizi [n];
    dizi[0]=1;
    dizi[1]=1;
    dizi[2]=1;
    printf("%d. eleman: %d",n,treboniacci(dizi,n));
    

    return 0;
}

int treboniacci(int dizi[], int n) {
    
    int i;
    
    
    
    if(n==1 || n==2 || n==3)
    return 1;
    
    
    
    for(i=0; i<n; i++)
    dizi[i+3] = dizi[i] + dizi[i+1] + dizi[i+2];
    
    return dizi[n-1];
}
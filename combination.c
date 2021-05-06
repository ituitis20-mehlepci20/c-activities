#include <stdio.h>

double comb(int n, int r){
    int ust = 1;
    int alt = 1;

    for(int i = r; i > 0; i--){ 
        ust = ust * n;
        n--;
    }

    for(int i = 0; r > i; r--){
        alt = alt * r;
    }

    double sonuc = ust / alt;
    return sonuc;
    
}

int main(){
    int a = 1, b = 1;
    printf("Hangi sayilarin c(a,b) seklinde kombinasyonunu bulmak istiyorsunuz?\nSirasi ile yaziniz\n");
    scanf("%d%d",&a,&b);
    
    printf("%lf",comb(a,b));
    return 0;
}
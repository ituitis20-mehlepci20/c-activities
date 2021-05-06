#include <stdio.h>

//girilen sayıların toplamını ve ortalamasını bulur

int main(){

    int n = 0;
    double toplam = 0;
    double ortalama = 0;    
    printf("Kac tane sayinin toplamini ve ortalamasini bulmak istiyorsunuz?\n");
    scanf("%d",&n);

    int sayilar[n];

    printf("Sayilarinizi tek tek girin\n");
    
    for(int i = 0; i < n; i++) {
        scanf("%d",&sayilar[i]);
        toplam = toplam + sayilar[i];
    }

    printf("toplam %.2lf\n",toplam);

    ortalama = toplam / n;

    printf("ortalama %.2lf",ortalama);

    return 0;
} 
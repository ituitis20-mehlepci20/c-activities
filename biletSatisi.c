//basit bir bilet satış simülasyonu gerçekleştirir

#include <stdio.h>

int main(){
    int biletSayi = 100;
    char onay;
    int miktar = 0;

    for(;biletSayi>0;){
        printf("Bilet almak istiyor musunuz? (y/n)\n");
        scanf(" %c",&onay);

        if(onay == 'y' || onay == 'Y'){
            printf("Kac tane almak istiyorsunuz?\n");
            scanf("%d",&miktar);

            biletSayi = biletSayi - miktar;

            printf("kalan bilet sayisi = %d\n",biletSayi);

        }

        else if(onay == 'n' || onay == 'N'){
            printf("Iyi gunler dileriz");
            break;
        }

        else{
            printf("Lutfen gecerli bir harf giriniz\n");
        }
    }

    return 0;
}
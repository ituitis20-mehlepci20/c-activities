//kullanicinin girdigi sayilardan en buyuk olanini bulur

#include <stdio.h>

void buyuk(int sayilar[], int boyut)
{
    int n=0;
    for(int i=0;i<boyut;i++){
        if(n<sayilar[i]){
            n=sayilar[i];
        }
    }
    printf("en buyuk sayi: %d",n);
}

int main()
{
    int boyut;
    printf("kac sayi gireceksiniz: ");
    scanf("%d",&boyut);
    int sayilar[boyut];
    for(int i=0; i<boyut; i++){
        printf("sayi gir: ");
        scanf("%d",&sayilar[i]);
    }
    buyuk(sayilar,boyut);
    return 0;
}


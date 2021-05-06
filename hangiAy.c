#include <stdio.h>

//basit bir switch case örneği, girilen sayının hangi aya ve mevsime denk geldiğini bastırıyor

int main() {
    int ay;
    printf("Lutfen kacinci ay oldugunu tamsayi olarak yaziniz\n");
    scanf("%d",&ay);

    switch (ay){
        case 1 : printf("Bulundugunuz ay Ocak ve mevsim Kis"); break;
        case 2 : printf("Bulundugunuz ay Subat ve mevsim Kis"); break;
        case 3 : printf("Bulundugunuz ay Mart ve mevsim Ilkbahar"); break;
        case 4 : printf("Bulundugunuz ay Nisan ve mevsim Ilkbahar"); break;
        case 5 : printf("Bulundugunuz ay Mayis ve mevsim Ilkbahar"); break;
        case 6 : printf("Bulundugunuz ay Haziran ve mevsim Yaz"); break;
        case 7 : printf("Bulundugunuz ay Temmuz ve mevsim Yaz"); break;
        case 8 : printf("Bulundugunuz ay Agustos ve mevsim Yaz"); break;
        case 9 : printf("Bulundugunuz ay Eylul ve mevsim Sonbahar"); break;
        case 10 : printf("Bulundugunuz ay Ekim ve mevsim Sonbahar"); break;
        case 11 : printf("Bulundugunuz ay Kasim ve mevsim Sonbahar"); break;
        case 12 : printf("Bulundugunuz ay Aralik ve mevsim Kis"); break;
        default : printf("Yanlis ya da eksik deger girdiniz");
    }
    return 0;
}


//ürün adedine göre toplam fiyat çıkartır

#include <stdio.h>

int main(){
    int urunAdedi = 0;
    double fiyat = 0.0;
    
    printf("Kac adet urun alacaksiniz?\n");
    scanf("%d",&urunAdedi);

    /*
    0-100 5tl
    100-200 3tl
    200-300 1.75tl
    300-400 1tl
    400+ 0.5tl 
    olduğunu varsayıyoruz*/


    if(urunAdedi > 0 && urunAdedi <=100){
        fiyat = 5.0; 
    }

    else if(urunAdedi > 100 && urunAdedi <=200){
        fiyat = 3.0; 
    }

    else if(urunAdedi > 200 && urunAdedi <=300){
        fiyat = 1.75; 
    }

    else if(urunAdedi > 300 && urunAdedi <=400){
        fiyat = 1.0;
    }

    else {
        fiyat = 0.5;
    }

    double toplamFiyat = urunAdedi * fiyat;

    printf("%d kadar urun icin urun basina %.2lf odeyeceksiniz ve toplam borcunuz %.2lf olacak", urunAdedi, fiyat, toplamFiyat);

    return 0;
    
}
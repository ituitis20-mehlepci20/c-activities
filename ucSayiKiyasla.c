//girilen üç sayıyı büyükten küçüğe sıralar
    //NOT: Bu kodun geliştirilmiş versiyonu da var, örnek amaçlı bunu da koymak istedim

#include <stdio.h>

int main() {
    int a, b, c, kucuk, orta, buyuk;

    printf("Kıyaslamak istediğiniz üç(3) adet tamsayı giriniz \n");
    scanf("%d %d %d",&a,&b,&c);

    if(a>b && a>c){
      buyuk = a;
      if(b>c){
          orta = b;
          kucuk = c;
      }

      else{
          orta = c;
          kucuk = b;
      }
    }
    
    if(b>a && b>c){
      buyuk = b;
      if(a>c){
          orta = a;
          kucuk = c;
      }

      else{
          orta = c;
          kucuk = a;
      }
    }

    if(c>b && c>a){
      buyuk = c;
      if(b>a){
          orta = b;
          kucuk = a;
      }

      else{
          orta = a;
          kucuk = b;
      }
    }

    printf("Sayilarinizin buyukten kucuge siralamasi %d > %d > %d seklindedir", buyuk, orta, kucuk );
    return 0;
}
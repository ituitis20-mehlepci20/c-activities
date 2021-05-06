/*1'den 10'a kadar olan kapılar var, bu kapıların hepsi kapalı
önce 1'in katı olanlar açılıyor, sonra ikinin katı olanlar kapatılıyor
10'un katına kadar aç kapa işlemi sürdürülüyor
en sonda hangi kapılar açıksa, onlar için 1 diğerleri için 0 bastırıyor*/

#include <stdio.h>

int main(){
 
    int kapi[10] = {};

    for(int i = 1; i<=10; i++){
        
        for(int m=0; m<10; m++){
            int kalan = (m + 1) % i;
            if (kalan == 0){
                
                if(kapi[m] == 0){
                kapi[m] = 1;
                }
                else{
                    kapi[m] = 0;
                }
            }
       
        }
    }

    for(int i = 0; i<10; i++){
        printf("%d",kapi[i]);
    }
        
    return 0;
}
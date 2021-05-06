//girilen iki sayının EBOB'unu bulur

#include <stdio.h>

int main(){
    int sayiBuyuk = 0;
    int sayiKucuk = 0;
    int kalan = 0;
    int EBOB = 0;
    
    printf("Sirasi ile buyuk ve kucuk sayilari giriniz\n");
    scanf("%d%d",&sayiBuyuk,&sayiKucuk);

    do{
        kalan = sayiBuyuk % sayiKucuk;

        if(kalan == 0){
            EBOB = sayiKucuk;
        }

        else{
            sayiBuyuk = sayiKucuk;
            sayiKucuk = kalan;
        }
    }
    
    while(kalan != 0);

    printf("EBOBunuz %d",EBOB);

    return 0;
}   



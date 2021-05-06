//girilen sayının tersini bulur => 345 ~ 543 gibi

#include <stdio.h> 

int basamak(int sayi){
    
    int bas = 0;
        
        while( sayi > 0){
            sayi = sayi / 10;
            bas++;
        }
    

    return bas;
}

void sayiN(int m, int sayi){

    int sayiTers[m];

    for(int i = 0; m > i; i++){
        sayiTers[i] = sayi % 10;
        sayi = sayi / 10;
    }

    for(int k = 0; k < m; k++){
        printf("%d",sayiTers[k]);
    }


}


int main(){

    int sayi;
    
    printf("tersini bulmak istediginiz sayiyi giriniz\n");
    scanf("%d",&sayi);

    sayiN(basamak(sayi),sayi);
    
    return 0;
}
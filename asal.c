#include <stdio.h>

//fonksiyon sayinin asal olup olmadığını buluyor, int main 1000'e kadar olan asalları bastırıyor

int asalMi(int sayi){

    int kalan = 0;
    int top = 0;

    if(sayi == 1){
        return 1;
    }
    
    else if(sayi < 1){
        return 1;
    }

    else {
        for(int i = 1; i < sayi; i++){
            kalan = sayi % i;

            if(kalan == 0){
                top++;
            }

            kalan = 0;
        }   
    }

    if(top == 1){

        return 0;

    }

    else{
        return 1;
    }

}

int main(){

    for(int sayi = 1; sayi<1000; sayi++){

        if(asalMi(sayi) == 0){
            printf("%d\n",sayi);
        }

    }

    return 0;
}
//1'den 10000'e kadar olan sayılardan perfect number olanları bastırır

#include <stdio.h>

void perfectNumber(){

    int sayi;
    
    
    for(sayi = 2; sayi < 10000; sayi++){
        
        int toplam = 0;
        for(int i = 1; i < sayi; i++){
            if((sayi % i) == 0 ){
                toplam += i;
            } 
        }
        
        if(toplam == sayi){
                printf("%d\n",sayi);
            }  
    }
    
    

}


int main(){

    perfectNumber();
    return 0;
}
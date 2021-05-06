#include <stdio.h>

int fibo(int n){

    int sayi = 0;

    if(n == 1){
        sayi = 0;
    }

    else if(n == 2){
        sayi = 1;
    }

    else{
        sayi = fibo(n-1) + fibo (n-2);
    }

    return sayi;
}

int main(){

    int hangi = 0;

    printf("Fibonacci serisinin kacinci elemanini ogrenmek istersiniz?\n");
    scanf("%d",&hangi);
    hangi ++;

    printf("%d",fibo(hangi));

}
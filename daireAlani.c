//yaklaşık olarak dairenin alanını hesaplar

#include <stdio.h>

#define pi 3.14

int main(){
   double yaricap = 0.0;

    printf("Dairenin yaricapini giriniz = ");
    scanf("%lf",&yaricap);

    double alan = yaricap * yaricap * pi;


    printf("Dairenin Alani = %lf", alan);
    return 0;
}


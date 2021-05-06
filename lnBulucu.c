/*internetten bulduğum ln hesaplama formülünü bastıran koddur
    NOT: Bulduğum formülü doğru bastırıyor ancak formülün kendisi yanlış olduğu için yanlış ln değerini bastırıyor
    
    Formül şu şekilde:
        ln(x+1) = (x^1)/1 - (x^2)/2 + (x^3)/3 - (x^4)/4 ..... diye gidiyor
        n değeri, sağ tarafta kaç tane eleman ile bulacağımızı hesaplıyor
        dediğim gibi, kod yukarıdaki formüle göre çalışıyor ancak formül yanlış
    
    */

#include <stdio.h>

double ln(double x, int n){
   
    if(n>1){
        
        double a = x;
        double b = x;
        
        for(int i = 1; i < n; i++){
        b = a*(-b);
        }
        
        
        b = b / n;

        double sonuc = b + ln(x,(n-1)); 
        return sonuc;
    }

    else if(n == 1){
        return x;

    }

    else {
        return 0;
    }
     

}

int main(){
    double x = 0, n = 0;
    printf("Please enter a x value to calculate ln(x + 1)\n");
    scanf("%lf",&x);
    printf("Please enter a n value\n");
    scanf("%lf",&n);

    printf("Your result is ln(%.0lf + 1) = %lf\n",x,ln(x,n));

    return 0;
    
}
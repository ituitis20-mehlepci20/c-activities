//basit bir notlandırma sistemi kodlanmıştır

#include <stdio.h>

int main(){
    
    double not = 0.0;
    
    /*
    100-90 AA
    90-80 BA
    80-70 BB
    70-60 CB
    60-50 CC
    50-0 FF */

    printf("Lutfen notunuzu girin\n");
    scanf("%lf",&not);

    if(not<=100 && not>=90){
        printf("Harf Notunuz AA");
    }
    
    else if(not<90 && not>=80){
        printf("Harf Notunuz BA");
    }

    else if(not<80 && not>=70){
        printf("Harf Notunuz BB");
    }

    else if(not<70 && not>=60){
        printf("Harf Notunuz CB");
    }

    else if(not<60 && not>=50){
        printf("Harf Notunuz CC");
    }

    else if(not<50 && not>=0){
        printf("Harf Notunuz FF");
    }

    else {
        printf("Lütfen geçerli bir not giriniz");
    }
}
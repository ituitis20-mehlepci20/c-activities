// girilen sayının perfect olup olmadığını bulur

#include <stdio.h>

int main(){

    int number,i,kalan;
    int top = 0;
   
    printf("enter a positive integer you want to figure out if it's perfect or not\n");
    scanf("%d",&number);

    for(i=1; i<number; i++) {
        kalan = number % i;

        if (kalan == 0){
            top = top + i;
        } 

    }
    
    if (top == number ) {
    printf("%d is a perfect number", number);
    }

    else{
        printf("%d is not a perfect number",number);
    }

    return 0;

}


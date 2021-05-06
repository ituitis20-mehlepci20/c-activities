#include <stdio.h>

int main(){

    int num;
    int carpim = 1;
    
    printf("Enter an integer\n");
    scanf("%d",&num);

    while(num>0){
        carpim = num * carpim;
        num--;
    }

    printf("%d",carpim);
    return 0;
}
//çarpım tablosunu bastırır

#include <stdio.h>

int main(){
    

    for(int i = 1;i<=10;i++){
        printf("\n");
        for(int j = 1;j<=10;j++){

            printf("%d X %d = %d\n",i, j, i*j);
        }
    }
    return 0;
}
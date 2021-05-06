#include <stdio.h>

//kullanıcının oluşturduğu array'den kullanıcının seçtiği elemanı siler

int main(){

    int num = 0, remove = 0;
    

    printf("How many elements does the array have?\n");
    scanf("%d",&num);

    printf("Enter %d elements\n",num);

    int dizi[num];
    
    for(int i = 0; i < num; i++){
        scanf("%d",&dizi[i]);
    }

    printf("your array is :\n");
    for(int i = 0; i < num; i++){
        printf("element:%d is %d\n",i+1,dizi[i]);
    }

    printf("\n Which element would you like to remove?\n");
    scanf("%d",&remove);

    remove--;

    for(;remove < num; remove++){
        dizi[remove] = dizi[remove + 1];
    }

    printf("your new array is :\n");
    for(int i = 0; i < num - 1; i++){
        printf("element:%d is %d\n",i+1,dizi[i]);
    }
    
    return 0;
}
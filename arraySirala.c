#include <stdio.h>

//arraydeki değerleri büyükten küçüğe sıralar

int main(){
    int arr[10]={1,2,3,4,4,7,7,8,9,10},tmp;
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            if (arr[i]>arr[j]){
                tmp=arr[i];
                arr[i]=arr[j];
                arr[j]=tmp;
            }
        }
    }
    for(int i=0; i<10; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
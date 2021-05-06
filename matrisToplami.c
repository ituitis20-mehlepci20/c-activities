//kullanıcı tarafından girilen iki matrisin toplamı olan matrisi bulur
    //girilen matrisler aynı boyutta olmalıdır

#include <stdio.h>

int main(){

    int satir,sutun;
    printf("Matris boyutlarini satir ve sutun olarak giriniz\n");
    scanf("%d%d",&satir,&sutun);

    int matris1[satir][sutun];
    int matris2[satir][sutun];

    for(int i = 0; satir > i; i++){
         
         for(int k = 0; sutun > k; k++){

            printf("1. Matrisin %d. satir ve %d. sutunundaki elemanı giriniz\n",i,k);
            scanf("%d",&matris1[i][k]);

        }
    }

    for(int i = 0; satir > i; i++){
         
         for(int k = 0; sutun > k; k++){

            printf("2. Matrisin %d. satir ve %d. sutunundaki elemanı giriniz\n",i,k);
            scanf("%d",&matris2[i][k]);

        }
    }

    int matrisTop[satir][sutun];
    for(int i = 0; satir > i; i++){
         
         for(int k = 0; sutun > k; k++){

            matrisTop[i][k] = matris1[i][k] + matris2[i][k];
            printf("%d\n",matrisTop[i][k]);
        }
    }

    return 0;

}


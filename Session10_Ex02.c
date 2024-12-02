#include <stdio.h>
int main(){
    int mang[5]= {2, 1, 5, 4, 3};
    int bienNho;
    printf("mang chua duoc sap xep la: ");
    for(int i = 0; i < 5; i++){
        printf("%d ", mang[i]);
    }
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5 - i - 1; j++){
            if(mang[j] > mang[j + 1]){
                bienNho = mang[j];
                mang[j] = mang[j + 1];
                mang[j + 1] = bienNho;
            }
        }
    }
    printf("\nmang da duoc sap xep la: ");
    for(int i = 0; i < 5; i++){
        printf("%d ", mang[i]);
    }
    return 0;
}
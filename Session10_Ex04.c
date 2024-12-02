#include <stdio.h>
int main(){
    int mang[5]= {2, 1, 5, 4, 3};
    int bienNho;
    printf("mang chua duoc sap xep la: ");
    for(int i = 0; i < 5; i++){
        printf("%d ", mang[i]);
    }
    for(int i = 0; i < 5; i++){
        int min_idx = i; 
        for(int j = i + 1; j < 5; j++){
            if(mang[min_idx] > mang[j]){
                min_idx = j;
            }
        }
        bienNho = mang[min_idx];
        mang[min_idx] = mang[i];
        mang[i] = bienNho;
    }
    printf("\nmang da duoc sap xep la: ");
    for(int i = 0; i < 5; i++){
        printf("%d ", mang[i]);
    }
    return 0;
}
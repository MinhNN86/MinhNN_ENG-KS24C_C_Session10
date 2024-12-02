#include <stdio.h>
int main(){
    int mang[5]= {2, 1, 5, 4, 3};
    printf("mang chua duoc sap xep la: ");
    for(int i = 0; i < 5; i++){
        printf("%d ", mang[i]);
    }
    for(int i = 1; i < 5; i++){
        int min = mang[i];
        int j = i - 1;
        for ( j; j >= 0 && min < mang[j]; j--){
            mang[j + 1] = mang[j];
        }
        mang[j + 1] = min;
    }
    printf("\nmang da sap xep: ");
    for(int i = 0; i < 5; i++){
        printf("%d ", mang[i]);
    }
    return 0;
}
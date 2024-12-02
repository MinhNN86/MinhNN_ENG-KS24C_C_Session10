#include <stdio.h>
int main(){
    int phanTuNhap = 0;
    int check = 0;
    int mang[5]= {1,2,3,4,5};
    printf("nhap vao phan tu bat ky: ");
    scanf("%d", &phanTuNhap);
    printf("vi tri phan tu la: ");
    for(int i = 0; i < 5; i++){
        if(mang[i] == phanTuNhap){
            printf("%d ", i+1);
            check = 1;
        }
    }
    if(check == 0){
        printf("phan tu khong co trong mang");
    }
    return 0;
}
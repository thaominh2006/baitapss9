#include<stdio.h>

int main(){
	int arr[100]; 
    int currentLength = 0; 
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &currentLength);
    if (currentLength <= 0 || currentLength > 100) {
        printf("So phan tu khong hop le.\n");
        currentLength = 0;
    } else {
        printf("Nhap cac phan tu cua mang:\n");
        for (int i = 0; i < currentLength; i++) {
            printf("Phan tu thu [%d]: ", i+1);
            scanf("%d", &arr[i]);
        }
    }
    printf("Mang hien tai:\n");
    for (int i = 0; i < currentLength; i++) {
        printf("%d ", arr[i]);
    }
    int position;
    printf("\nNhap vi tri can xoa: ", currentLength );
    scanf("%d", &position);
    if (position < 0 || position > currentLength) {
        printf("Vi tri khong hop le.\n");
    } else {
        for (int i = position-1; i <= currentLength ; i++) {
            arr[i] = arr[i + 1];
        }
        currentLength--;
        printf("Phan tu da duoc xoa thanh cong.\n");
    }
    for (int i = 0; i < currentLength; i++) {
        printf("%d ", arr[i]);
    }
	return 0;
}

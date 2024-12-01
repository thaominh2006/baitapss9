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
    int position, value;
    printf("\nNhap vi tri can sua: ", currentLength);
    scanf("%d", &position);
    if (position < 0 || position > currentLength) {
        printf("Vi tri khong hop le.\n");
    } else {
        printf("Nhap gia tri moi: ");
        scanf("%d", &value);
        arr[position-1] = value;
        printf("ау sua phan tu thanh cong.\n");
    }
        for (int i = 0; i < currentLength; i++) {
        printf("%d ", arr[i]);
    }
	return 0;
}

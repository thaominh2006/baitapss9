#include<stdio.h>

int main(){
	int arr[100]; 
    int currentLength = 0; 
    int choice;

    do {
        printf("\nMENU\n");
        printf("1. Nhap vao mang\n");
        printf("2. Hien thi mang\n");
        printf("3. Them phan tu\n");
        printf("4. Sua phan tu\n");
        printf("5. Xoa phan tu\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban?: ");
        scanf("%d", &choice);

        if (choice == 1) {
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
        } else if (choice == 2) {
            if (currentLength == 0) {
                printf("Mang trong.\n");
            } else {
                printf("Mang hien tai:\n");
                for (int i = 0; i < currentLength; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
            }
        } else if (choice == 3) {
            if (currentLength >= 100) {
                printf("Mang da day, khong the them duoc phan tu.\n");
            } else {
                int value, position;
                printf("Nhap gia tri can them: ");
                scanf("%d", &value);
                printf("Nhap vi tri can them: ", currentLength);
                scanf("%d", &position);

                if (position < 0 || position > currentLength) {
                    printf("Vi tri khong hop le.\n");
                } else {
                    for (int i = currentLength; i > position; i--) {
                        arr[i] = arr[i - 1];
                    }
                    arr[position] = value;
                    currentLength++;
                    printf("Phan tu da duoc them thanh cong.\n");
                }
            }
        } else if (choice == 4) {
            if (currentLength == 0) {
                printf("Mang trong, khong the sua phan tu.\n");
            } else {
                int position, value;
                printf("Nhap vi tri can sua: ", currentLength);
                scanf("%d", &position);
                if (position < 0 || position > currentLength) {
                    printf("Vi tri khong hop le.\n");
                } else {
                    printf("Nhap gia tri moi: ");
                    scanf("%d", &value);
                    arr[position-1] = value;
                    printf("Da sua phan tu thanh cong.\n");
                }
            }
        } else if (choice == 5) {
            if (currentLength == 0) {
                printf("Mang trong, khong the xoa phan tu.\n");
            } else {
                int position;
                printf("Nhap vi tri can xoa: ", currentLength );
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
            }
        } else if (choice == 6) {
            printf("Thoat chuong trinh.\n");
        } else {
            printf("Lua chon khong hop le. Vui long chon lai.\n");
        }
    } while (choice != 6);

	return 0;
}

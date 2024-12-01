#include<stdio.h>

int main(){
	int arr[100];
    int currentLength = 0;
    int choice;

    do {
        // Hi?n th? menu
        printf("\nMENU\n");
        printf("1. Nhap so phan tu va gia tri cac phan tu\n");
        printf("2. In ra cac gia tri phan tu dang quan ly\n");
        printf("3. In ra gia tri cac phan tu chan va tinh tong\n");
        printf("4. In ra gia tri lon nhat va nho nhat trong mang\n");
        printf("5. In ra cac phan tu la so nguye to trong mang va tinh tong\n");
        printf("6. Nhap vao mot so va thong ke trong mang co bao nhieu phan tu do\n");
        printf("7. Them mot phan tu vao vi tri chi dinh\n");
        printf("8. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Nhap so phan tu cua mang: ", 100);
            scanf("%d", &currentLength);

            if (currentLength <= 0 || currentLength > 100) {
                printf("So phan tu khong hop le.\n");
                currentLength = 0;
            } else {
                printf("Nhap cac phan tu:\n");
                for (int i = 0; i < currentLength; i++) {
                    printf("Ph?n t? [%d]: ", i);
                    scanf("%d", &arr[i]);
                }
            }
        } else if (choice == 2) {
            if (currentLength == 0) {
                printf("Mang trong.\n");
            } else {
                printf("Cac phan tu trong mang:\n");
                for (int i = 0; i < currentLength; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
            }
        } else if (choice == 3) {
            if (currentLength == 0) {
                printf("Mang trong.\n");
            } else {
                int sumEven = 0;
                printf("Cac phan tu chan trong mang:\n");
                for (int i = 0; i < currentLength; i++) {
                    if (arr[i] % 2 == 0) {
                        printf("%d ", arr[i]);
                        sumEven += arr[i];
                    }
                }
                printf("\nTong cac phan tu chan la: %d\n", sumEven);
            }
        } else if (choice == 4) {
            if (currentLength == 0) {
                printf("Mang trong.\n");
            } else {
                int max = arr[0], min = arr[0];
                for (int i = 1; i < currentLength; i++) {
                    if (arr[i] > max) max = arr[i];
                    if (arr[i] < min) min = arr[i];
                }
                printf("Gia tri lon nhat: %d\n", max);
                printf("Gia tri nho nhat: %d\n", min);
            }
        } else if (choice == 5) {
            if (currentLength == 0) {
                printf("Mang trong.\n");
            } else {
                int sumPrime = 0;
                printf("Cac phan tu la so nguyen to:\n");
                for (int i = 0; i < currentLength; i++) {
                    int isPrime = 1; // gán =1 là s? nguyên t?
                    if (arr[i] <= 1) isPrime = 0;
                    for (int j = 2; j * j <= arr[i]; j++) {
                        if (arr[i] % j == 0) {
                            isPrime = 0;
                            break;
                        }
                    }
                    if (isPrime) {
                        printf("%d ", arr[i]);
                        sumPrime += arr[i];
                    }
                }
                printf("\nTong cac so nguyen to la: %d\n", sumPrime);
            }
        } else if (choice == 6) {
            if (currentLength == 0) {
                printf("Mang trong.\n");
            } else {
                int num, count = 0;
                printf("Nhap mot so: ");
                scanf("%d", &num);

                for (int i = 0; i < currentLength; i++) {
                    if (arr[i] == num) count++;
                }
                printf("So lan xuat hien cua so %d trong mang: %d\n", num, count);
            }
        } else if (choice == 7) {
            if (currentLength >= 100) {
                printf("Mang da day, khong the them phan tu.\n");
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
                    printf("Da them phan tu thanh cong.\n");
                }
            }
        } else if (choice == 8) {
            printf("Thoat chuong trinh.\n");
        } else {
            printf("Lua chon khong hop le. Vui long chon lai.\n");
        }
    } while (choice != 8);

	return 0;
}

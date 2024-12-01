#include<stdio.h>

int main(){
	    int arr[100][100];
    int rows = 0, cols = 0;
    int choice;

    do {
        printf("\n                  MENU                    \n");
        printf("1. Nhap kich co va gia tri cac phan tu cua mang\n");
        printf("2. In gia tri cac phan tu cua mang theo ma tran\n");
        printf("3. In gia tri cac phan tu la so le va tinh tong\n");
        printf("4. In ra cac phan tu nam tren duong bien va tinh tich\n");
        printf("5. In ra cac phan tu nam tren duong cheo chinh\n");
        printf("6. In ra cac phan tu nam tren duong cheo phu\n");
        printf("7. In ra dong co tong gia tri cac phan tu la lon nhat\n");
        printf("8. Thoat\n");
        printf("Lua chon cua ban la: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Nhap so hang: ");
            scanf("%d", &rows);
            printf("Nhap so cot: ");
            scanf("%d", &cols);

            if (rows <= 0 || cols <= 0 || rows > 100 || cols > 100) {
                printf("Kich co khong hop le.\n");
                rows = cols = 0;
            } else {
                printf("Nhap cac phan tu cua mang:\n");
                for (int i = 0; i < rows; i++) {
                    for (int j = 0; j < cols; j++) {
                        printf("arr[%d][%d] = ", i, j);
                        scanf("%d", &arr[i][j]);
                    }
                }
            }
        } else if (choice == 2) {
            if (rows == 0 || cols == 0) {
                printf("Mang chua duoc khoi tao.\n");
            } else {
                printf("Ma tran:\n");
                for (int i = 0; i < rows; i++) {
                    for (int j = 0; j < cols; j++) {
                        printf("%3d ", arr[i][j]);
                    }
                    printf("\n");
                }
            }
        } else if (choice == 3) {
            if (rows == 0 || cols == 0) {
                printf("Mang chua duoc khoi tao.\n");
            } else {
                int sum = 0;
                printf("Cac phan tu le trong mang:\n");
                for (int i = 0; i < rows; i++) {
                    for (int j = 0; j < cols; j++) {
                        if (arr[i][j] % 2 != 0) {
                            printf("%d ", arr[i][j]);
                            sum += arr[i][j];
                        }
                    }
                }
                printf("\nTong cac phan tu le: %d\n", sum);
            }
        } else if (choice == 4) {
            if (rows == 0 || cols == 0) {
                printf("Mang chua duoc khoi tao.\n");
            } else {
                int product = 1;
                printf("Cac phan tu tren duong bien:\n");
                for (int i = 0; i < rows; i++) {
                    for (int j = 0; j < cols; j++) {
                        if (i == 0 || i == rows - 1 || j == 0 || j == cols - 1) {
                            printf("%d ", arr[i][j]);
                            product *= arr[i][j];
                        }
                    }
                }
                printf("\nTich cac phan tu tren duong bien: %d\n", product);
            }
        } else if (choice == 5) {
            if (rows == 0 || cols == 0 || rows != cols) {
                printf("Mang khong phai ma tran vuong.\n");
            } else {
                printf("Cac phan tu tren duong cheo chinh:\n");
                for (int i = 0; i < rows; i++) {
                    printf("%2d ", arr[i][i]);
                }
                printf("\n");
            }
        } else if (choice == 6) {
            if (rows == 0 || cols == 0 || rows != cols) {
                printf("Mang khong phai ma tran vuong.\n");
            } else {
                printf("Cac phan tu tren duong cheo phu:\n");
                for (int i = 0; i < rows; i++) {
                    printf("%d ", arr[i][cols - i - 1]);
                }
                printf("\n");
            }
        } else if (choice == 7) {
            if (rows == 0 || cols == 0) {
                printf("Mang chua duoc khoi tao.\n");
            } else {
                int maxSum = 0, maxRow = 0;
                for (int i = 0; i < rows; i++) {
                    int sum = 0;
                    for (int j = 0; j < cols; j++) {
                        sum += arr[i][j];
                    }
                    if (sum > maxSum) {
                        maxSum = sum;
                        maxRow = i;
                    }
                }
                printf("Dong co tong lon nhat la dong %d voi tong = %d\n", maxRow, maxSum);
                printf("Cac phan tu cua dong do: ");
                for (int j = 0; j < cols; j++) {
                    printf("%d ", arr[maxRow][j]);
                }
                printf("\n");
            }
        } else if (choice == 8) {
            printf("Thoat chuong trinh.\n");
        } else {
            printf("Lua chon khong hop le. Vui long moi ban chon lai.\n");
        }
    } while (choice != 8);
    
	return 0;
}

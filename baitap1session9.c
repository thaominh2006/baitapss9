#include<stdio.h>

int main(){
	int n, lengthCu;
	int arr[100];
	printf("Moi nguoi dung nhap cac so phan tu vao trong mang: ");
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		printf("Nhap phan tu thu %d: \n", i+1);
		scanf("%d", &arr[i]); 
	}
	lengthCu=n;
	int position;
	int giaTri;
	printf("Moi nguoi dung nhap gia tri muon them vao mang: \n");
	scanf("%d", &position);
	printf("Moi nguoi dung nhap gia tri muon them vao: \n");
	scanf("%d", &giaTri);
	for(int i=lengthCu; i<position; i--){
		arr[i]=arr[i-1];
		lengthCu++;
	}
	arr[position-1]=giaTri;
	printf("\nMang sau khi them vao phan tu la:\n");
	for(int i=0; i<lengthCu; i++){
		printf("%d", arr[i]);
	}
	printf("\n");
	
	return 0;
}

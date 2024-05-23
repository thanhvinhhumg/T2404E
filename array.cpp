#include<stdio.h>
int main () {
//	int n;
//	printf("Nhap vao so phan tu cua mang: ");
//	scanf("%d", &n);
//	int arr[n];
//	// input
//	for (int i =0; i< n; i++) {
//		printf("Nhap vao phan tu thu %d:", i+1);
//		scanf("%d", &arr[i]);
//	}
//	//output
//	for(int i = 0; i<n; i++) {
//		printf("Phan tu thu %d : %d \n", i+1,arr[i]);
//	}
	
//	int n,m;
//	printf("Nhap vao so phan tu cua hang: ");
//	scanf("%d", &n);
//	printf("Nhap vao so phan tu cua cot: ");
//	scanf("%d", &m);
//	int arr1[n][m];
//	for (int i= 0; i< n; i++) {
//		for (int j=0; j<m; j++) {
//			printf("Nhap vao phan tu cot %d, hang: %d:", i+1, j+1);
//			scanf("%d", &arr1[i][j]);
//		}
//	}
//	for (int i= 0; i< n; i++) {
//		for (int j=0; j<m; j++) {
//			printf("Nhap vao phan tu cot %d, hang %d: %d\n", i+1, j+1, arr1[i][j]);
//		}
//	}
	
	
	
	
	/*
	1. Ðao nguoc mang 1 chieu
	2. Tinh tong duong cheo chinh mang hai chieu n hang , n cot
	3. Tim gia tri lon nhat, nho nhat cua hang mang hai chieu n hang, m cot
	4. Tim gia tri lon nhat, nho nhat cua cot mang hai chieu n hang, m cot
	*/
	
	//1
	int tmp, n = 6;
	int arr[6] = {1,2,3,4,5,6};
	printf("%d\n", n/2);
	for(int i = 0; i< n/2; i++ ) {
		tmp = arr[i];
		arr[i] = arr[n-i-1];
		arr[n-i-1] = tmp;
	}
	
	for(int i = 0; i<n; i++) {
		printf("Phan tu thu %d : %d \n", i+1,arr[i]);
	}
	
	
}

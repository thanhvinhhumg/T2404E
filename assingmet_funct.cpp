#include<stdio.h> 
#include<malloc.h>
void inputArr(int *a, int n);
void outputArr(int *a, int n);
int main() {
	int arr[5] = {1,2,3,4,5};
	int *a = arr;
//	inputArr(a, 5);
	outputArr(a, 5);
}

void inputArr(int *arr, int n) {
	for (int i =0; i< n ; i++) {
		scanf("%d", arr + i);
	}
}

void outputArr(int *arr, int n) {
	for (int i =0; i< n ; i++) {
		printf("Gia tri: %d \n", *(arr+1));
	}
}

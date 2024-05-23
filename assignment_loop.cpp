#include<stdio.h>
int main () {
	// tam giac vuong can trai
	int i,j;
	int n = 4;
	for (i=0; i<n; i++) {
		for(j =0; j<=i; j++) {
			printf("* ");
		}
		printf("\n");
	}
	
	// tam giac vuong can phai
	printf("\n\n");
	for (i = 0; i< n; i++) {
		for(j = 0; j< n-i-1; j++) {
			printf("  ");
		}
		for(j = 0; j<= i; j++) {
			printf("* ");
		}
		printf("\n");
	}
	
	// hinh vuong
	printf("\n\n");
	for (i=0; i< n; i++) {
		for (j =0; j< n; j++) {
			printf("* ");
		}
		printf("\n");
	}
	
	
	// GTLN, GTNN
	int n1, max, min, a1;
	printf("Nhap vao so luong phan tu: ");
	scanf("%d", &n1);
	printf("Nhap pha tu thu 1: ");
	scanf("%d",&a1);
	min = a1;
	max = a1;
	
	for(int i = 1; i< n1; i++) {
		int tmp;
		printf("Nhap pha tu thu %d: ", i+1);
		scanf("%d",&tmp);
		if ( tmp > max) {
			max = tmp;
		}
		if ( tmp < min) {
			min = tmp;
		}
	}
	printf("Gia tri max: %d , Gia tri min : %d", max, min);
	
	
}

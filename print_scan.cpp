#include<stdio.h>
int main () {
	// int
	int a;
	printf("Vui long nhap vao so nguyen a: ");
	scanf("%d", &a);
//	printf("Gia tri cua a: %d\n", a);
	
	// float
	float f;
	printf("Vui long nhap vao so f: ");
	scanf("%f", &f);
//	printf("Gia tri cua f: %f\n", f);
//	printf("Gia tri cua f: %.2f\n", f);
	
	
	getchar();
	char c;
	printf("vui long nhap vao ky tu bat ky: ");
	scanf("%c", &c);
//	printf("Ky tu c: %c\n", c);
//	putchar(c);
	printf("a: %d, f: %f, f: %.2f, c:  %c\n", a, f, f,c);
	
	//condition
	if (a > 10) {
		printf("gia tri a > 10");
	}
	
	switch(a) {
		case 1:
		case 2:
			printf("Gia pt bac hai");
			break;
		default:
			printf("lua chon k dung");
			break;	
	}
	
	
	
	
}

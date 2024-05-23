#include<stdio.h>
int main () {
//	for(int i=1 ; i <= 10 ; i+) {
//		
//	}
//	
//	for( ; ; ) {
//		printf("hello world \n");
//	}
//	int a = 0;
//	while(a < 10) {
//		printf("hello world \n");
//		if ( a == 4) {
//			break;
//		}
//		a++;
//	}

	
	int a;
	printf("Vui long chon so trong khoang 1 - 3\n");
	printf("1. Giai PT bac nhat\n");
	printf("2. Giai PT bac hai\n");
	printf("3. Giai PT bac ba\n");
	do {
		scanf("%d", &a);
	} while( a < 1 || a > 3);
	printf("Lua chon cua ban la:  %d",a);
	
	
}

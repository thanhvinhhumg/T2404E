#include<stdio.h>
#include<string.h>
#include<malloc.h>
void inputStr(char **a, int size, int length);
void outoutStr(char **a, int size);
void sortStr(char **a, int size, int length);
int main () {
	// con tro cua con tro
	char **a = (char **) malloc( 2 * sizeof(char *));
	inputStr(a, 2, 10);
	outoutStr(a,2);
	
}

void inputStr(char **a, int size, int length) {
	for(int i=0; i< size; i++) {
		// a[i] mot con tro
		a[i] = (char *) malloc(length * sizeof(char));
	}
	
	for(int i=0; i< size; i++) {
		printf("Nhap vao chuoi thu %d :", i+1);
		scanf("%s", a[i]);
	}
}

void outoutStr(char **a, int size) {
	for(int i= 0; i< size; i++) {
		printf("Chuoi thu %d : %s\n", i+1, a[i]);
	}
}

#include<stdio.h>
struct student {
	char name[50];
	int age;
	char address[50];
};

typedef struct student1 {
	char name[50];
	int age;
	char address[50];
} Student;

void printfStudent(struct student std);
int main() {
	struct student std1;
	printf("Vui long nhap ten sinh vien: ");
//	scanf("%s", std1.name);
	gets(std1.name);
	printf("Vui long nhap so tuoi: ");
	scanf("%d", &std1.age);
	printf("Vui long nhap dia chi: ");
	scanf("%s", std1.address);
	printfStudent(std1);
	Student std2 = {"Nguyen Van B", 30,"Ha Noi"};
	printf("Ten sinh vien std2 : %s", std2.name);
	
}

void printfStudent(struct student std) {
	printf("Ten sinh vien : %s\n", std.name);
	printf("Tuoi sinh vien : %d\n", std.age);
	printf("Dia chi sinh vien : %s\n", std.address);
}

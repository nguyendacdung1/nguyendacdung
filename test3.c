#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b, c, diemtong, diemtrngbinh;
	printf("nhap diem mon toan\n");
	scanf("%d",&a);
	printf("nhap diem mon van\n");
	scanf("%d",&b);
	printf("nhap diem mon anh");
	scanf("%d",&c);
	printf("diemtong: %d", (a+b+c));
	printf("diemtrungbinh: %d", (a+b+c)/3);
}

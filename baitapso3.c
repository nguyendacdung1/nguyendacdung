#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num;
	printf("Nhap vao so num1 =\n ");
	scanf("%d", &num);
	printf("nhap vao so num2 = \n");
	scanf("%d", &num);
	printf("Tong cua so do la :%d\n", num+num);
	printf("Hieu cua so do la :%d\n", num-num);
	printf("Tich cua so do la:%d\n", num*num);
	printf("Thuong cua so do la:%d\n", num/num);
	getch();
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b;
	printf("\nnhap vao so a: ");
	scanf("%d", &a);
	printf("\nnhap vao so b: ");
	scanf("%d", &b);
	if (a%b==0)
	printf("\n a chia het cho b", a, b);
	else
	printf("\n a khong chia het cho b", a, b);
	return 0;
}

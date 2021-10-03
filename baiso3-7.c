#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c;
	printf("\nNhap so thu nhat: ");
	scanf("%d", &a);
	printf("\nNhap so thu hai: ");
	scanf("%d", &b);
	c=a-b;
	if(c==a==b)
	printf("\nHieu bang gia tri<gia tri cua so da nhap vao>");
	else
	printf("\nHieu khong bang bat ki gia tri nao da nhap");
		
	return 0;
}

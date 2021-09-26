#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b, sum;
	printf ("\nNhap vao mot so: ");
	scanf("%d %d", &a, &b);
	sum = a*b;
	printf("\n sum =%d", sum);
	return 0;
}

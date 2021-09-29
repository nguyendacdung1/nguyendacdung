#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int top, bottom, height, S;
	printf("Nhap vao top\n ");
	scanf("%d", &top);
	printf("Nhap vao bottom\n");
	scanf("%d", &bottom);
	printf("Nhap vao height\n");
	scanf("%d", &height);
	S = (top+bottom)/2*height;
	printf("S la %d", S);
	
	return 0;
}

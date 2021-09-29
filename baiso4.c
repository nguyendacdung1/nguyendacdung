#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float C, F;
	printf("Nhap vao do C= ");
	scanf("%f",&C);
	F = C * 1.8 + 32;
	printf("%f do C bang %f do F\n", C, F);
	
	
	getch();
	return 0;
}

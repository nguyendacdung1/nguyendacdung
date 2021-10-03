#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num1, num2;
	printf("nhap so thu nhat: \n");
	scanf("%d", &num1);
	printf("nhap so thu hai: \n");
	scanf("%d", &num2);
	if(num1*num2==1000)
	printf("\ntich hai so bang 1000", num1, num2);
	else if (num1*num2>1000)
	printf("\ntich hai so lon hon 1000", num1, num2);
	else
	printf("\nnho hon 1000", num1, num2);
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num1, num2;
	num1=77;
	num2=90;
	if(num1==num2)
	printf("\nthe numbers are equal");
	else if (num1<num2)
	printf("\n the lanrger number is:%d", num2);
	else 
	printf("\n thr lanrger number is:%d", num1);
	return 0;
}

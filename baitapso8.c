#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	printf("Kieu int %d\n", sizeof(int));
	printf("So nguyen: 15\n");
	
	printf("Kieu float %d\n", sizeof(float));
	printf("So thuc kieu float: 3.456000\n");
	
	printf("Kieu double %d\n", sizeof(double));
	printf("So thuc kieu double: 3.456789\n");
	
	printf("Kieu char %d\n", sizeof(char));
	printf("Ki tu: E\n");
	
	printf("Kieu long int %d\n", sizeof(long int));
	
	printf("Kieu long double %d\n", sizeof(long double));
	return 0;
}

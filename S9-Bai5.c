#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,a,b;
	printf("nhap so:");
	scanf("%d", &i);
	
	for(a=i;a>0;a--)
	{
		printf("\n");
		for(b=0;b<a;b++) /* vong lap for ben trong*/
		printf("*");
	}
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x[7][7],i,n;
	int s=0;
	for(i=0;i<=6;i++)
	for(n=0;n<=6;n++)
	{
		printf("\nNhap vao mang x[%d][%d]: ", i,n);
		scanf("%d", &x[i][n]);
		s+=x[i][n];
	}
	printf("\nTong la: %d", s);
	
	

	
	return 0;
}

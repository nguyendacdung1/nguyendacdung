#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,x;
	int arr[7];
	for(i=0;i<7;i++)
	{
		printf("nhap thu %d cua mang: ",i+1);
		scanf("%d", &arr[i]);
	}
	for(i=0;i<7/2;i++)
	{
		x=arr[i];
		arr[i]=arr[6-i];
		arr[6-i]=x;
	}
	for(i=0;i<7;i++)
	{
		printf("%d\n",arr[i]);
	}
	return 0;
}

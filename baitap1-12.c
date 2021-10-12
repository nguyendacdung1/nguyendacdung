#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int max,min;
	int arr[10],i;
	for(i=0;i<10;i++)
	{
		printf("Gia tri %d cua mang: \n", i+1);
		scanf("%d", &arr[i]);
		if(i==0)
	{
		max==arr[i];
		min==arr[i];
	}
	else
	{
		if(arr[i]>max) max=arr[i];
		if(arr[i]<min) min=arr[i];
	}
	}
	printf("max: %d\n",max);
	printf("min: %d\n",min);
	return 0;
}

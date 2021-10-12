#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int max,min,sum,avg,i;
	int arr[10];
	for(i=0;i<10;i++)
	{
		printf("Nhap phan tu cua mang:%d", i);
		scanf("%d",&arr[i]);
		sum=sum+arr[i];
		if(i==0)
		{
			min==arr[i];
			max==arr[i];
		}
		else
		{
			if(arr[i]>max) max=arr[i];
			if(arr[i]<min) min=arr[i];
		}
	}
	printf("\nSo phan tu trong mang la: %d", i);
	avg=sum/(i);
	printf("Tong cua mang la: %d\n",sum);
	printf("trung binh cong: %d", avg);
	printf("min:%d", min);
	printf("max: %d",max);
		
	return 0;
}

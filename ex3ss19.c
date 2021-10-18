#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,j,arr[5]={23,90,9,25,16};
	char flag;
	/*Loop to compare each element of the unsorted part of the array*/
	for(i=0;i<5;i++)
	/*loop for each element in the sorted part of the array*/
	for(i=0, flag='n';j<i&&flag=='n';j++)
	{
		if(arr[j]>arr[i])
		{
			/*Invoke the function to insert the number*/
			insertnum(arr,i,j);
			flag='y';
		}
	}
	printf("\n\nThe sorted array\n");
	for(i=0;i<5;i++)
	printf("%d\t",arr[i]);
	return 0;
}
insertnum(int arrnum[],int x,int y)
{
	int temp;
	/*store the number to be inserted*/
	temp=arrnum[x];
	/*loop to pust the sorted part of the array down from the position*/
	for(;x>y;x--)
	arrnum[x]=arrnum[x-1];
	/*insert the number*/
	arrnum[x]=temp;
}

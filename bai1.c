#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b;
	char chon;
	printf("\nnhap so1:");
	scanf("%d",&a);
	printf("nhap so 2: ");
	scanf("%d",&b);
	printf("chon phep tinh:");
	fflusf(stdin);
	scanf("%c",&chon);
	switch(chon)
	{
		case '+':
			printf("tong:%d", tong(a,b));
			break;
		case '-':
			printf("hieu:%d",hieu(a,b));
			break;
		case '*':
			printf("tich:%d", tich(a,b));
			break;
		case '/':
			printf("thuong:%d", thuong(a,b));
			break;	
		default:
		   printf("khong dung");
		   break;			
	}
	return 0;
}
int tong(int a,int b){
	return a+b;
}
int hieu(int a,int b){
	return a-b;
}
int tich(int a,int b){
	return a*b;
}
int thuong(int a,int b){
	return a/b;
}

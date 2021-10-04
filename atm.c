#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int taikhoan,matkhau,chon;
	
	printf("chao mung ban den voi ngan hang cua toi\n");
	printf(" ten tai khoan: ");
	scanf("%d", &taikhoan);
	printf("mat khau: ");
	scanf("%d",&matkhau);
	if (taikhoan == 123){
		printf("tai khoan dung");
		if(matkhau == 345){
			printf("mat khau dung");
			
		
		}
		else{
			printf("mat khau khong dung");
		}
		
		
	}
	else{
		printf("tai khoan khong dung");
	}
	if(taikhoan==123,matkhau==345)
	printf("dangnhapthanhcong");
	printf("chon dich vu\n");
	printf("1 rut tien\n");
	printf("2 chuyen khoan\n");
	printf("3 xem so du\n");
	printf("4 ket thuc giao dich");
	switch(chon)
	{
	case 1:
		printf("nhap so tien rut\n");
		break;
	case 2:
	    printf("nhap so tien chuyen khoan\n");
		break;
	case 3:
	    printf("so du con lai\n");
		break;
	case 4:
	    printf("het thuc giao dich\n");
		break;			
	}

	
	return 0;
}

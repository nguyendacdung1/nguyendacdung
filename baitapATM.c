#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int taikhoan, matkhau;
	int tienhientai=1000000000;
	int chon;
	printf("\nChao mung den voi cay ATM di dong");
	printf("\nNhap tai khoan: ");
	scanf("%d", &taikhoan);
	printf("\nNhap mat khau: ");
	scanf("%d", &matkhau);
	if(taikhoan==123)
	{
		printf("\ntai khoan dung moi nhap mat khau");
		if(matkhau==3456)
		{
			printf("\nMat khau dung");
				if(taikhoan==123,matkhau==3456)
	{
		printf("\nDang nhap thanh cong");
		printf("\n1:RUT TIEN");
		printf("\n2:CHUYEN KHOAN");
		printf("\n3:KIEM TRA TIEN");
		printf("\n4:KET THUC DONG CUA GIAO DICH");
		printf("\nMoi ban chon dich vu");
		scanf("%d", &chon);
		switch(chon)
		{
			case 1:
				printf("nhap so tien rut:");
				break;
			case 2:
				printf("Nhap so tien chuyen khoan:");
				break;
			case 3:	
				printf("so du co trong tai khoanhien tai:%d",tienhientai);
				break;
			case 4:
				printf("ket thuc giao dich");
				break;
		}
	}
		}
		else
		printf("\nTai khoan hoac mat khau sai");
	}
	else
	printf("\nTai khoan hoac mat khau sai");

	return 0;
}

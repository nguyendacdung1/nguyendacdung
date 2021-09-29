#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int toan, li, hoa, diemtong, diemtrungbinh;
	
	printf("Nhap diem toan\n");
	scanf("%d", &toan);
	printf("nhap diem li\n");
	scanf("%d",&li);
	printf("Nhap diem hoa\n");
	scanf("%d", &hoa);
	printf("diemtong %d", toan+li+hoa);
	printf("diemtrungbinh %d", (toan+li+hoa)/3);
	return 0;
}

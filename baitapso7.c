#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float canh, chieudai, chieurong, bankinh, chuvi, dientich;
	printf("Nhap vao do dai canh\n ");
	scanf("%f", &canh);
	printf("Nhap vao chieudai\n");
	scanf("%f", &chieudai);
	printf("Nhap vao chieurong\n");
	scanf("%f", &chieurong);
	printf("Nhap vao bankinh\n");
	scanf("%f", &bankinh);
	printf("chu vi hinh vuong %f\n", chuvi=4*canh);
	printf("dien tich hinh vuong %f\n", dientich= canh*canh);
	printf("chu vi hinh chu nhat %f\n", chuvi=2*(chieudai+chieurong));
	printf("dien tich hinh chu nhat %f\n", dientich=chieudai*chieurong);
	printf("chu vi hinh tron %f\n", chuvi=2*bankinh*3.14);
	printf("dien tich hinh tron %f\n", dientich= bankinh*bankinh*3.14);
	return 0;
}

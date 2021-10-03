#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int diem;
	printf("\nNhap diem: ");
	scanf("%d", &diem);
	if(75<=diem)
	printf("xep loai A");
	else if (75>diem>=60)
	printf("xep loai B");
	else if (60>diem>=45)
	printf("xep loai C");
	else if (45>diem>=35)
	printf("xep loai D");
	else if(35>diem)
	printf("xep loai E");
	else

	return 0;
}

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int M1, M2, M3, TB;
	printf("\n Diem mon1: ");
	scanf("%d", &M1);
	printf("\n Diem mon2: ");
	scanf("%d", &M2);
	printf("\n Diem mon3: ");
	scanf("%d", &M3);
	printf("\ndiem trung binh:%d",TB=(M1+M2+M3)/3);
	if(90>=TB)
	printf("E+");
	else if(80<TB<90)
	printf("E");
	else if(70<TB<80)
	printf("A+");
	else if(60<TB<70)
	printf("A");
	else if (50<TB<60)
	printf("B+");
	else if(50<TB)
	printf("tach.");
	else

	return 0;
}

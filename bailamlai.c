#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int songuoi[10], i, chon, douong, tong=0;
	int cafe=25000, sinhto=30000, nuocloc=10000;
	int nuocthanh=40000, nuocdua=40000;
	printf("chao ban den voi quan\n");
	printf("cac ban co bao nhieu nguoi: \n");
	scanf("%d", &songuoi[10]);
	menu();
	for(i=0;i<songuoi[10];i++)
	{
		printf("\nnguoi thu %d chon: \n", i+1);
		scanf("%d", &chon);
		switch(chon)
		{
			case 1:
				printf("cafe:%d\n", cafe);
				tong+=cafe;
				break;
			case 2:
			    printf("sinh to:%d\n", sinhto);
			    tong+=sinhto;
				break;	
			case 3:
			    printf("nuoc loc:%d\n", nuocloc);
			    tong+=nuocloc;
				break;	
			case 4:
			    printf("nuoc thanh:%d\n", nuocthanh);
			    tong+=nuocthanh;
				break;
			case 5:
				printf("nuoc dua:%d\n", nuocdua);
				tong+=nuocdua;
				break;
			default:
			    printf("moi ban chon lai\n");
				break;				
		}	
	}
	printf("tong tien la: %d\n", tong);
	printf("tien thue 10%% la: %d \n", tong*10/100);
	printf("tong tien phai tra la:%d\n", tong+( tong*10/100));
	return 0;
}
menu()
{
	printf("moi ban xem menu\n");
    printf("cafe=25000, sinhto=30000, nuocloc=10000, nuocthanh=40000, nuocdua=40000");
}

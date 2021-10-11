#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,chon,douong,sum,khachhang[10];
	int capu=25000,trasua=25000,trachanh=10000,cafeden=20000,cafenau=20000;
	printf("Chao ban den voi quan cua toi\n");
	printf("cac ban co bao nhieu xac: ");
	scanf("%d",&khachhang[10]);
	for(i=0;i<khachhang[10];i++)
	{
		printf("khach hang %d uong:\n", i+1);
		scanf("%d", &chon);
		switch(chon)
	{
		case 1:
			printf("capu: %d\n",capu);
			sum+=25000;
			break;
		case 2:
		    printf("tra sua: %d\n",trasua);
		    sum+=25000;
			break;	
		case 3:
			printf("tra chanh: %d\n",trachanh);
			sum+=10000;
			break;
		case 4:
		    printf("caffee den: %d\n",cafeden);
		    sum+=20000;
			break;	
		case 5:
		    printf("caffee nau: %d\n",cafenau);
		    sum+=25000;
			break;	
		default:
		    printf("xin chon lai\n");
			break;		
	}
	printf("Tong tien don hang:%d\n", sum-1);
	printf("Tien thue 10%%: %d\n", (sum-1)*10/100);
	printf("Tong tien phai tra: %d\n",(sum-1)+(sum-1)*10/100);
	
	}
	

	return 0;
}

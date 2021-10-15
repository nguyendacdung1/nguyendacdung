#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int xeploai(int as,int lythuyet, int thuchanh);
int main(int argc, char *argv[]) {
	int as, lythuyet, thuchanh;
	int diemTB;
	char chon;
	do{
		printf("\nNhap vao diem AS: ");
		scanf("%d",&as);
		printf("\nNhap vao diem ly thuyet: ");
		scanf("%d",&lythuyet);
		printf("\nNhap vao diem thuc hanh: ");
		scanf("%d",&thuchanh);
		diemTB=xeploai(as,lythuyet,thuchanh);
		switch(chon)
		{
			case 0:
				printf("\nBan truot");
				break;
			case 1:
				printf("\nTrung binh");
				break;
			case 2:
				printf("\nKha");
				break;
			case 3:
				printf("\nGioi");
				break;			
		}
		printf("\nban muon xep loai tiep?");
		fflush(stdin);
		scanf("%c",&chon);
	}while(chon=='Y' || chon == 'N');
	if(chon!='Y'&&chon!='N');
	printf("\nKet thuc");
	return 0;
}
int xeploai(int as,int lythuyet,int thuchanh)
{
	int diemTB=(int)(as+lythuyet+thuchanh)/3;
	if(diemTB<40)
	return 0;
	else if(diemTB>=40 && diemTB<60)
	return 1;
	else if(diemTB>=60 && diemTB<80)
	return 2;
	else if(diemTB>=80)
	return 3;
}

   

    
	


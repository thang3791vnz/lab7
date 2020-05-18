#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int tong;
	int menu;
	char y, ans;
	tong = 0;
	do{
		printf("Nhap so theo menu de chon do uong \n");
		printf("Ca phe \nThuoc la \n");
		scanf("%d", &menu);
		ans = 'y';
		switch(menu)
		{
			case 1:
				printf("Ca phe");
				tong += 10000;
				break;
			case 2:
				printf("Thuoc la");
				tong += 20000;
				break;
		}
		printf("\nBan co muon tiep tuc ? (Y/N): \n");
		fflush(stdin);
		ans = getch();
	}
	while (ans == 'Y' || ans == 'y');
	printf("So tien can thanh toan : %d VND\n", tong);
	printf("!\t!\t!\n");
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b, c;
	printf("\nNhap diem a: ");
	scanf("%d", &a);
	
	printf("\nNhap diem b: ");
	scanf("%d", &b);
	
	printf("\nNhap diem c: ");
	scanf("%d", &c);
	
	if(a >= 4 && a <= 10)
	{
		if(a > 4)
		printf("\nDiem ly thuyet dat: ");
			else
		printf("\nDiem ly thuyet truot: ");
	}
	else
		printf("\nDiem ly thuyet khong hop ly: ");
	if(b >= 40 && b <=100)
	{
		if(b > 40)
		printf("\nDiem thuc hanh dat: ");
		else
		printf("\nDiem thuc hanh truot: ");
	}
	else
	printf("\nDiem thuc hanh khong hop ly");
	if(c >= 6 && c<= 15)
	{
		if(c > 6)
		printf("\nDiem bai tap dat: ");
		else
		printf("\nDiem bai tap truot: ");
	}
	else
	printf("\nDiem bai tap khong hop le");
	return 0;
}

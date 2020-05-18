#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i, j, k;
	printf("\nNhap vao so dong: ");
	scanf("%d", &k);
	printf("\nTruong hop a: \n");
	for(i = 0; i < k; i++)
	{
		for(j = 1; j <= i + 1; j++)
		{
			printf("%d", j);
		}
		printf("\n");
}
	return 0;
}

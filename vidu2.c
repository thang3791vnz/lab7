#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num = 0;
	printf("\nIn ra dong so: ");
	for(num; num <= 100; num +=5)
	{
		printf("%d\t", num);
	}
	return 0;
}

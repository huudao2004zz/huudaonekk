#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int cnt, cntl;
	cnt = cntl = 0;
	do 
	{
		printf("\nEnter a number : ");
		scanf("%d",&cnt);
		printf("no. is %d",cnt);
		cntl++;
	} while (cnt != 0);
	printf("\n The total numbers entered were %d", --cntl);
	return 0;
}

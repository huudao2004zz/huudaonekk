#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,min,max;
	printf("nhap so min : ");
	scanf("%d",&min);
	printf("nhap so max : ");
	scanf("%d",&max);
	for(i=min;i<=max;i++)
	if(i%2 == 0){
		printf("\tso chan la :");
		printf("%d",i);
		}
	else 
	printf("\tso le la :");
	printf("%d",i);

	return 0;
}

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num1;
	int num2;
	printf("enter two integers, and i will tell you\n");
	printf("the relationships they satisfy: ");
	scanf("%d%d", &num1, &num2);
	if ( num1 == num2 ) {
		printf("%d is equal to %d\n",num1,num2 );
		}
	if ( num1 != num2 ) {
		printf("%d is not equal to %d\n",num1,num2 );
		}
	if ( num1 < num2 ) {
		printf("%d is less than %d\n",num1,num2 );
	 }
	if ( num1 > num2) {
		printf("%d í greater than %d\n",num1,num2);
		}
	if (num1 <= num2 ) {
		printf("%d í greater than or equal to %d\n",num1,num2);
		}
	 
	return 0;
}

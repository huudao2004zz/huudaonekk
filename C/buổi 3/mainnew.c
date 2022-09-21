#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i=3;
    int c=2;
    int res;
	printf("i = %d\n", i);
	printf("c = %d\n", c);
	res = i-- +c;
	//res=i+c
	//i=i-1
	
	printf("%d\n",res);
	printf("i = %d\n", i);
	printf("c = %d\n", c);
	
	return 0;
}

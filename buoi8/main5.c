#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int hello();
int add(int num1, int num2);
int main(int argc, char *argv[]) {
	int kq;
	int a,b;
	printf("hello world\n");
	hello();
	kq = add(3,4);
	printf("ket qua la %d\n",kq);
	a =4;
	b =7;
	kq = add(a,b);
	printf("ket qua la %d\n",kq);
	kq = add(9,b);
	printf("ket qua la %d\n",kq);
	return 0;
	}
hello()
{
    printf("****************\n");	
    printf("****************\n");
	printf("****************\n");
    printf("****************\n");
	return 0;
}				
    int add(int num1, int num2){
    	int resul;
    	resul = num1 + num2 ;
    	return 0;
}

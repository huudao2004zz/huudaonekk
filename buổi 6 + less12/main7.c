#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int row,col;
printf("Enter the dimension of the matrix : ");
scanf("%d %d",&row,&col);
	printf("Enter the values of the matrix A and B : \n");
int i, j;
for(i=0;i<row;i++)
 for(j=0;j<col;j++)
 {
 print("A[%d,%d],B[%d,%d]:",row,col,row,col);
 scanf("%d %d",&A[i][j],&B[i][j]);
 }
	return 0;
}

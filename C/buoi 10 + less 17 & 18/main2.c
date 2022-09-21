#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int the_sum(int a,int b, int c){
    int sum = a+b+c;
    printf("tong ba mon la : %d\n",sum);
    float abc = (float) (sum)/3;
    printf("trung binh ba mon la : %f\n",abc);
return sum;
}

int main() {
	int a,b,c;
	char e;
do {
    printf("nhap diem toan : ");
    scanf("%d",&a);
    printf("nhap diem van : ");
    scanf("%d",&b);
    printf("nhap diem anh : ");
    scanf("%d",&c);
    int sum = the_sum(a,b,c);
    printf(" nhan y de dc tiep tuc\nnhan h de dung hoat dong \n ");
    fflush(stdin);
    scanf("%c",&e);
    if ( e == 'y');
}
while ( e != 'h');
    printf(" hen gap lai !");
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int the_sum(int a,int b, int c){
    int sum = a+b+c;
    printf("tong ba mon la : %d",sum);
return sum;
}
int the_avg(int a ,int b, int c){
    float avg = (float) (a + b + c)/3;
    printf("trung binh ba mon la : %d",avg);
return avg;
}
int main() {
	int a,b,c;
    printf("nhap diem toan : ");
    scanf("%d",&a);
    printf("nhap diem van : ");
    scanf("%d",&b);
    printf("nhap diem anh : ");
    scanf("%d",&c);
    int sum = the_sum(a,b,c);
    int avg = the_avg(a,b,c);
	return 0;
}

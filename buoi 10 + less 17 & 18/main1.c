#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
do
int find_sum ( int a, int b ,int c){
	int sum = a + b + c;
    printf("tong cua ba mon la :%d \n",sum);    
    return sum;
    }
int find_avg (int a, int b , int c ){
	float avg =(float) (a + b + c)/3;
	printf(" diem trung binh la :%f ",avg);
	return avg;    
	}
int main() {
	int toan,van,anh;
	printf("nhap diem toan : ");
	scanf("%d",&toan);
	printf("nhap diem van : ");
	scanf("%d",&van);
	printf("nhap diem tieng anh : ");
	scanf("%d",&anh);
	int sum = find_sum(toan,van,anh);
	int avg = find_avg(toan,van,anh);
	
while 
	return 0;
}

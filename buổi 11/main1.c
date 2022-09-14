#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int find_tong(int a, int b){
    int tong = a + b ;
    printf("tong la: %d\n",tong);
return tong;
}
int find_hieu(int a, int b){
	int hieu = a - b;
	printf("hieu la : %d\n",hieu);
return hieu;
}
int find_tich(int a, int b){
    int tich = a * b ;
    printf("tich la :%d\n",tich);
return tich;
}
int find_thuong(int a, int b){
	float thuong = (float) a / b;
	printf("thuong la:%f\n",thuong);
	if (b == 0 ){
		printf("vo ly");
		}
return thuong;
	}
int main(int argc, char *argv[]) {
	int a,b;
	printf("nhap so thu nhat : ");
	scanf("%d",&a);
	printf("nhao so thu hai : ");
	scanf("%d",&b);
	int tong = find_tong(a,b);
	int hieu = find_hieu(a,b);
	int tich = find_tich(a,b);
	int thuong = find_thuong(a,b);
	
	return 0;
}

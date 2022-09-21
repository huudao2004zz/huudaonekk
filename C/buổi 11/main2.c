#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int a,b,c,d; 
void  nhap(){
	printf("nhap so thu nhat : ");
	scanf("%d",&b);
	printf("nhap so thu hai : ");
	scanf("%d",&c);
} 
int find_tong(int a, int b){
    int tong = a + b ;
}
int find_hieu(int a, int b){
	int hieu = a - b;
}
int find_tich(int a, int b){
    int tich = a * b ;
}
float  find_thuong(int a, int b){
	float thuong = (float) a / b;
	if (b == 0 ){
		printf("vo ly\n");
	}
}

int main() {

do
{
	printf("tinh toan\n0:nhap so\n1:tinh tong\n2:tinh hieu\n3:tinh tich\n4:tinh thuong\n");
	printf("nhap lua chon cua ban : \n");
	scanf("%d",&a);
	switch (a)  {
		case 0:
			nhap(); 
			break; 
		case 1 :
			printf("tong la %d\n",	find_tong(b,c));
			break;
		case 2 :
			printf("hieu la %d\n",find_hieu(b,c));
			break;
		case 3 :
			printf("tich la %d\n",find_tich(b,c));
			break;
		case 4 :
			printf("thuong la %f\n",find_thuong(b,c));
			break;
	}
	if(a != 0){
		printf("ban co muon tiep tuc tinh toan ?\n5:tiep tuc\n6:ket thuc\n");
		printf("nhap lua chon cua ban : ");
		scanf("%d",&d);	
	} 
	
}
    while ( d != 6);
    
	printf("tam biet!");			
	return 0;
}

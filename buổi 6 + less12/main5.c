#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n;
	int num[100];
	int l;
	int desnum[100],k;
	int i,j,temp;
 
	printf("Enter the total number of marks to be entered: ");
	scanf("%d",&n);//So phan tu cua mang
 
 	//Nhap gia tri cho mang
	for(l=0;l<n;l++){
		printf("Enter the marks of student %d: ", l+1);
		scanf("%d",&num[l]);
	}
 	//Sao chep mang sang mang moi mang desnum = mang num
	for(k=0;k<n;k++){
	 	desnum[k] = num[k];
	}
	//Thuat toan sap xep 
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(desnum[i] < desnum[j]){
				temp= desnum[i];
				desnum[i] = desnum[j];
				desnum[j] = temp;
			}
		}
	}

	//In ra mang da duoc sap xep
	for(i=0;i<n;i++){
		printf("\n Number at [%d] is %d", i, desnum[i]);
	}
	
	return 0;
}



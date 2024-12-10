#include <stdio.h>
// Ham khai_bao dung de nhap kich thuoc va cac phan tu cua manh hai chieu 
void khai_bao(int arr[100][100] , int *n,int *m){ // int *n ,*m la tham so con tro  
	printf("Nhap so cot :");
	scanf("%d", n);
	printf("Nhap so hang:");
	scanf("%d", m);
	//Vong lap de nhap tung phan tu cua mang 
	for(int i=0; i< *n; i++){
		for(int j=0; j< *m ;j++){
			printf("Nhap phan tu thu [%d][%d]: ",i+1,j+1);
			scanf("%d",&arr[i][j]);
		}
	}
}

int main(){
	int n,m;
	int arr[100][100];
		khai_bao(arr,&n,&m);
		printf("mang da nhap la :\n");
	for(int i=0; i<n ; i++){
		for(int j=0; j<m ; j++){
			printf("%d\t",arr[i][j]);
		}
		printf("\n"); 
	}
	return 0;
}

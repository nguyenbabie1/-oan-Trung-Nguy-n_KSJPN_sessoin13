#include <stdio.h>
void displaymenu(){
	printf("\n             ----Menu---\n");
	printf("1.Nhap so phan tu can nhap va cac gia tri phan tu\n");
	printf("2.In ra gia tri cac phan tu dang quan ly\n");
	printf("3.Them mot phan tu vao vi tri chi dinh\n");
	printf("4.Sua mot phan tu o vi tri chi dinh\n");
	printf("5.Xoa mot phan tu o vi tri chi dinh\n");
	printf("6.Sap xep cac phan tu\n");
	printf("7.Tim kiem phan tu nhap vao\n");
	printf("8.Thoat\n");

}

void khai_bao(int arr[100],int *n ){
	printf("Nhap so luong phan tu:");
	scanf("%d",n);
	for(int i=0;i<*n;i++){
		printf("Nhap so phan tu thu %d: ",i+1);
		scanf("%d",&arr[i]);
	}
}
//them phan tu
void them(int arr[100],int n){
	int position, value;
	printf("Nhap vi tri can them (1 den %d): ",n);
	scanf("%d",&position);
	printf("Nhap gia tri muon them :");
	scanf("%d",&value);
	if(position >=0 && position<n ){
		for(int i=n; i>position; i--){
			arr[i]=arr[i-1];
		}
		arr[position]=value;
		n++;
		printf("Mang sau khi them la: ");
            for (int i = 0; i < n; i++) {
                printf("%d\t", arr[i]);
            }
	}
	else{
		printf("Vi tri ko co trong mang\n");
	}
}
// sua phan tu 
void sua(int arr[100],int n){
	int position, value;
	printf("Nhap vi tri muon sua(1 den %d):",n);
	scanf("%d", &position);
	if(position>=0 && position<n ){
		printf("Nhap gia tri muon thay doi :");
		scanf("%d",&value);
		arr[position] =value;
		printf("Mang sau khi sua la: ");
            for (int i = 0; i < n; i++) {
                printf("%d\t", arr[i]);
        }
	}
	else{
		printf("Vi tri ko co trong mang\n");
	}
}
// xoa phan tu
void xoa(int arr[100], int n){
	int position;
	printf("Nhap vi tri muon xoa(1 den %d): ",n);
	scanf("%d",&position);
	if(position >=0 && position<n ){
		for(int i=position-1; i<n-1; i++){
			arr[i]=arr[i+1];
		}
		n--;
		printf("Mang sau khi xoa la: ");
            for (int i = 0; i < n; i++) {
                printf("%d\t", arr[i]);
        }
	}
	else{
		printf("vi tri ko co trong mang\n");
	}
}
// tang dan
void tang(int arr[100], int n){
	for(int i=1; i<n; i++){
		int key=arr[i];
		int j=i-1;
		while(j>=0 && arr[j]>key){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key;
	}
	printf("Mang sau khi sap xep tang dan la:");
        for(int i=0; i<n ;i++){
        	printf("%d\t",arr[i]);
		}
}
// giam dan 
void giam(int arr[100], int n){
	for(int i=1; i<n; i++){
		int key=arr[i];
		int j=i-1;
		while(j>=0 && arr[j]<key){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key;
	}
	printf("Mang sau khi sap xep giam dan la:");
        for(int i=0; i<n ;i++){
        	printf("%d\t",arr[i]);
		}
} 
int main(){
	int arr[100];
	int n,choice;
	do{
		displaymenu();
		printf("Lua chon cua ban la: ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				khai_bao(arr,&n);
				break;
			case 2:
				khai_bao(arr,&n);
				printf("Mang da nhap la: ");
				for(int i=0; i<n; i++){
					printf("%d\t",arr[i]);
				}
				printf("\n");
				break;
			case 3://them 
				khai_bao(arr,&n);
				them(arr,n);
				break;
			case 4://sua
				khai_bao(arr,&n);
				sua(arr,n);
				break;
			case 5://xoa
				khai_bao(arr,&n);
				xoa(arr,n);
				break;
			case 6:// tang dan
				khai_bao(arr,&n);
				tang(arr,n);
				break;
			case 7:
				// giam dan
				khai_bao(arr,&n);
				giam(arr,n);
				break;
			case 8://thoat
				printf("Em phai di roi\n");
				break;
			
			default:
				printf("Sai du lieu sao ma do duoc em\n");
		}
	}while(choice!=0);
	return 0;
}


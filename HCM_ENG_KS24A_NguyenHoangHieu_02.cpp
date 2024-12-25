
#include <stdio.h>
#define maxSize 100 

int isPrime(int n){
	if(n < 2)	return 0;
	for(int i=0;i*i<n;i++){
		if(n % i == 0)	return 0;
	}
	return 1;
}
int main(){
	int arr[maxSize]={0};
	int choice=0,Size=0;
	do{
		printf("==========> MENU <==========\n");
		printf("1. Nhap so phan tu va gia tri cho mang\n");
		printf("2. In ra gia tri cac phan tu tu co trong mang\n");
		printf("3. Tim ra gia tri nho nhat va lon nhat co trong mang\n");
		printf("4. In ra tong cac phan tu\n");
		printf("5. Them vao mot phan tu vao cuoi mang\n");
		printf("6. Xoa phan tu tai vi tri cu the\n");
		printf("7. Sap xep mang theo thu tu giam dan (Bubble Sort)\n");
		printf("8. Kiem tra su ton tai cua phan tu trong mang \n");
		printf("9. In ra toan bo so nguyen to trong mang\n");
		printf("10. Sap xep mang theo thu tu tang dan (Selection sort)\n");
		printf("11. Thoat\n");
		printf("Nhap lua chon cua ban: ");	
		scanf("%d",&choice);
		printf("\n");
		switch(choice){
			case 1://Nhap so phan tu va gia tri cho mang
				{
					Size = 0;
					printf("Moi nhap vao so phan tu (1->100): ");	scanf("%d", &Size);
					
					while(Size <= 0 || Size > 100){
						printf("So phan tu ban nhap khong hop le vui long nhap lai (1->100): ");
						scanf("%d",&Size);
					}
					for(int i=0;i<Size;i++){
						printf("Moi nhap vao gia tri phan tu arr[%d]: ",i+1);
						scanf("%d",arr+i);
					}
					printf("Mang da duoc nhap xong !!!");
				}
				break;
			case 2://In ra cac gia tri phan tu trong mang
				{
					if(Size != 0){
						printf("Gia tri cua cac phan tu trong mang: ");
						for(int i=0;i<Size;i++){
							printf("arr[%d] = %d",i,arr[i]);
							if(i < Size){
								printf(", ");
							}
						}
					}
				}
				break;
			case 3://Tim ra gia tri nho nhat va lon nhat co trong mang
				{
					if(Size != 0){
						int min=arr[0],max=arr[0];
						
						for(int i=1;i<Size;i++){
							if(min > arr[i]){
								min = arr[i];
							}
							if(max < arr[i]){
								max = arr[i];
							}
						}
						
						printf("Phan tu nho nhat trong mang: %d\n",min);
						printf("Phan tu lon nhat trong mang: %d",max);
					}
				}
				break;
			case 4://In ra tong cac phan tu
				{
					if(Size != 0){
						int sum=0;
						printf("Bat dau thuc hien thao tac tinh tong:\n");
						for(int i=0;i<Size;i++){
							sum+=arr[i];
						}
						printf("Da tinh tong xong.\n");
						printf("Tong gia tri cac phan tu trong mang la: %d", sum);
					}
				}
				break;
			case 5://Them vao mot phan tu vao cuoi mang
				{
					if(Size != 0){
						int addValue=0;
						printf("Nhap gia tri phan tu muon them vao cuoi mang: ");	scanf("%d",&addValue);
						arr[Size] = addValue;
						printf("Da them xong !!!");
						Size++;
					}
				}
				break;
			case 6://Xoa phan tu tai vi tri cu the
				{
					if(Size != 0){
						int deleteIndex=0;
						printf("Moi nhap vao vi tri ban muon xoa(0 -> %d): ",Size-1);	scanf("%d", &deleteIndex);
						while(deleteIndex < 0 || deleteIndex > Size-1){
							printf("Vi tri ban nhap vao khong ton tai vui long nhap lai(0 -> %d): ",Size-1);
							scanf("%d",&deleteIndex);
						}
						
						printf("Vi tri nhap vao hop le !!!\n");
						printf("Bat dau xoa\n");
						
						Size--;
						
						for(int i=deleteIndex;i<Size;i++){
							arr[i] = arr[i+1];
						}
						printf("Da xoa xong !!!");
					}
				}
				break;
			case 7: // sap xep theo thu tu giam dan
				{
					if(Size != 0){
						printf("Bat dau\n");
						for(int i=0;i<Size-1;i++){
							for(int j=0;j<Size-i-1;j++){
								if(arr[j] < arr[j+1]){
									int tmp=arr[j];
									arr[j]=arr[j+1];
									arr[j+1]=tmp;
								}
							}
						}
						printf("Hoan thanh sap xep !!!");
					}
				}
				break;
			case 8:
				break;
			case 9://In ra toan bo so nguyen to trong mang
			
				break;
			case 10://Sap xep mang theo thu tu tang dan (Selection sort)
			
				break;
			case 11://Thoat
				{
					printf("Chuong trinh ket thuc!");
					printf("Hen gap lai...");
				}
				break;
			default:
				printf("Lua chon cua ban khong hop le vui long nhap lai !!!");
			
		}
		if(Size == 0){
			printf("\n Hay nhap mang cua ban vao !");
		}
		printf("\n\n");
	}while(choice!=11);
	
	return 0;
}


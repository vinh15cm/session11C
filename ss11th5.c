#include<stdio.h>
int main(){
	int numbers[]={2,4,6,8,10};
	int searchValue;
	printf("nhap vao gia tri can tim kiem :");
	scanf("%d",&searchValue);
	int start = 0;
	int end =sizeof(numbers)/sizeof(int);
	int mid;
	while(start<=end){
		mid=(start+end)/2;
		if(numbers[mid]==searchValue){
			break ;
		} else if(numbers[mid]<searchValue){
			start = mid+1; 
		} else{
			end= mid-1; 
		} 
	} 
	if(numbers[mid]==searchValue){
		printf("phan tu co chi so %d trong mang co gia tri %d\n", mid,numbers[mid]); 
	}else{
		printf("khong tim thay phan tu c� gia tri %d trong mang \n", searchValue); 
	} 
} 

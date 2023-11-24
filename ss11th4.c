#include<stdio.h>
int main(){
	int n;
	printf("nhap so phan tu cua mang :");
	scanf("%d", &n);
	int numbers[n];
	printf("nhap gia tri cac phan tu mang :\n ");
	for(int i=0;i<n;i++){
		printf("numbers[%d]=",i);
		scanf("%d", &numbers[i]); 
	} 
	int searchValue;
	printf("Nhap vao gia tri can tim trong mang:");
	scanf("%d", &searchValue);
	searchValue ;int i;
	int flagSearched=0;
	for(i=0;i<n;i++){
		if(numbers[i]==searchValue){
		flagSearched = 1;
		break; 
	} 
}
if(flagSearched==1){
	printf("trong mang co phan tu chi so %d có gia tri bang%d\n",i,numbers);
	 
} else{
	printf("Khong tim thay phan tu có gia tri %d trong mang\n", searchValue); 
} 
}

	


#include<stdio.h>
int main(){
	int arr[5];
	int i,j;
	int count=0;
	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0,j=i+1;j<=5;i++){
		if(arr[i]==arr[j]){
		count++;
		}
	}
	if(count>=0){
		printf("DUPLICATE");	
		}
	else{
		printf("NOT DUPLICATE");
	}
}

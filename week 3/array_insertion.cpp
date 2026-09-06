#include<stdio.h>
int insert_element(int arr[],int n, int pos, int value){
	for(int i=n;i>pos;i--){
		arr[i]=arr[i-1];
	}
	arr[pos]=value;
	n++;
	return n;
}
int main(){
	int arr[6]={10,20,30,49};
	int n=4;
	int pos=2;
	int value=25;
	n= insert_element(arr,n,pos,value);
	printf("Array after insertion: ");
	for(int i=0; i<n; i++){
	   printf("%d  ",arr[i]);	
	}
	printf("\n");
	return 0;
}
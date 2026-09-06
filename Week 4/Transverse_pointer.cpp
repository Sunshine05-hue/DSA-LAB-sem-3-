#include<stdio.h>
void transverse_element(int arr[],int size){
	for(int i=0; i<size; i++){
		printf("%d  ", *(arr+i));
	}
}
int main (){
	int arr[]={12,45,5,87,3,56,23,90,12,34};
	int size= sizeof (arr)/ sizeof(arr[0]);
	transverse_element(arr,size);
}
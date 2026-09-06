#include<stdio.h>
int linear_search(int arr[], int size, int key){
	for(int i=0; i<size; i++){
		if(*(arr+i)== key){
			return i;
		}
	}
	return -1;
}
int main(){
	int arr[]={ 10,45,43,56,47,646,56,76,89,78,71};
	int size= sizeof (arr)/ sizeof (arr[0]);
	int key= 56;
	int result= linear_search(arr,size,key);
	if (result != -1){
		printf("Element found at index: %d \n",result);
	}else{
		printf("Element not found in the array. \n");
	}
	return 0;
}

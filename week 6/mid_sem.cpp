#include<stdio.h>
void swap (int array[], int i, int j);
int partition(int array[], int low, int high);
void quick_sort(int array[], int low, int high);
void print_array(int array[], int size);
int main(){
	int data[10]={45,22,89,11,67,34,9,99,12,50};
	int n= 10;
	printf("Original unsorted array:  \n");
	print_array(data,n);
	printf("\n");
	
	for(int step=0; step< n-1; step++){
		for(int i=0; i<n-step-1; i++){
			if(data[i]>data[i+1]){
				swap(data, i, i+1);
			}
		}
		break;
	}
	printf("Intermidiate array after one pass of bubble sort:  \n");
	print_array(data,n);
	quick_sort(data, 0, n-1);
	
	printf("Final sorted array after quick sort finished it:  \n");
	print_array(data,n);
	return 0;
}
void quick_sort(int array[], int low, int high){
	if(high>low){
		int pi= partition(array,low,high);
		quick_sort(array,low,pi-1);
		quick_sort(array,pi+1,high);
	}
}
int partition(int array[], int low, int high){
	int pivot= array[high];
	int i= (low -1);
	
	for(int j= low; j<high; j++){
		if(array[j]<=pivot){
			i++;
			swap( array,i,j);
		}
	}
	swap(array, i+1, high);
	return (i+1);
}
void swap (int array[], int i, int j){
	int temp= array[i];
	array[i]=array[j];
	array[j]=temp;
}

void print_array(int array[],int size){
	for(int i=0; i<size; i++){
		printf("%d  ", array[i]);
	}
	printf("\n");
}
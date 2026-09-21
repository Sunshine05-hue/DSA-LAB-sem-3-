#include<stdio.h>
void swap(int array[],int i, int j);
int partition(int array[],int low,int high);
void quick_sort(int array[], int low, int high);

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

int main(){
	int data[]={6,4,7,8,1,9,5};
	int n= sizeof (data)/ sizeof (data[0]);
	quick_sort(data,0,n-1);
	printf("Sorted array:  \n");
	for(int i=0; i<n; i++){
		printf("%d  ", data[i]);
	}
}

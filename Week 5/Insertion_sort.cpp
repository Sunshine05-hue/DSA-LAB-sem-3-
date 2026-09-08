#include<stdio.h>
void insertion_sort(int array[],int size){
	for(int step=1; step<size; step++){
	int key= array[step];
	int j= step-1;
	while(j>=0 && key<array[j]){
		array[j+1]= array[j];
		--j;
	}
	array[j+1]=key;
	for(int i=0; i<size; i++){
		printf("%d ",array[i]);
	    }
		printf("\n");
    }
}
int main(){
	int data[]={54,87,23,9,1,3,78,45,34,65};
	int size = sizeof(data)/sizeof(data[0]);
	insertion_sort(data,size);
	printf("Sorted array:  \n");
	for(int i=0; i<size; i++){
		printf("%d ",data[i]);
	}
	return 0;
}

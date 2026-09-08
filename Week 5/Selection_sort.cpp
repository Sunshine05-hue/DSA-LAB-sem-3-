#include<stdio.h>
void selection_sort(int array[],int size){
	for(int step=0 ; step<size-1; step++){
		int min_idx=step;
		for(int i=step; i<size; i++){
			if(array[i]<array[min_idx]){
				min_idx=i;
			}
		}
		int temp = array[min_idx];
		array[min_idx]=array[step];
		array[step]=temp;
		for(int i=0; i<size; i++){
		printf("%d ",array[i]);
	    }
		printf("\n");
    }
}
int main(){
	int data[]={54,87,23,9,1,3,78,45,34,65};
	int size = sizeof(data)/sizeof(data[0]);
	selection_sort(data,size);
	printf("Sorted array:  \n");
	for(int i=0; i<size; i++){
		printf("%d ",data[i]);
	}
	return 0;
}

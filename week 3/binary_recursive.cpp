#include<stdio.h>
int binary_search(int array[], int x, int low , int high){
	if(high>=low){
	   int mid= low + (high-low)/2;
	if(x== array[mid]){
		return mid;
	} if (x>array[mid])
	    return binary_search( array,x,mid+1,high);
	  return binary_search(array,x,low,mid-1);	
	}
	return -1;
}
int main(){
	int array[]={3,5,67,68,69,80,85,90,91,92};
	int n= sizeof(array)/sizeof(array[0]);
	int x= 69;
	int result= binary_search(array,x,0,n-1);
	if(result==-1){
		printf("Not found ! \n");
	}else{
		printf("Found at index %d \n",result);
	}
	return 0;
}
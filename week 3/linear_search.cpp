# include<stdio.h>
int linear_search(int arr[],int n,int key){
	for(int i=0;i<n;i++){
		if(arr[i]== key){
			return i;
		}
	}
	return -1;
}
int main(){
	int arr[]={4,6,87,54,34,54,2,7};
	int n=8;
	int key=34;
	int result= linear_search(arr,n,key);
	if(result==-1){
		printf("Not found.\n");
	}else{
		printf("Found at index %d \n",result);
	}
	return 0;
}

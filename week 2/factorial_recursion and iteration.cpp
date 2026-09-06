#include<stdio.h>
int fact_rec(int n){
	if(n==0||n==1){
		return 1;
	}
	return n*fact_rec(n-1);
}
int fact_it(int n){
   int fact=1;
   for(int i=1;i<=n;i++){
   	fact=fact*i;
   }
   return fact;	
}
int main(){
	int num;
	printf("Enter a number to find its factorial: ");
	scanf("%d",&num);
	printf("Iterative result: %d \n", fact_it(num));
	printf("Recursive result: %d \n", fact_rec(num));
	return 0;
}
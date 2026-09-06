#include<stdio.h>
void row_major(int b,int w, int i, int j, int lr, int lc, int n);
void column_major(int b, int w, int i, int j, int lr, int lc, int m);
void row_major (int b, int w, int i, int j, int lr, int lc, int n){
	int address = b+w*((i-lr)*n+(j-lc));
	printf("Address of element is: %d \n", address);
}
void column_major (int b, int w, int i, int j, int lr, int lc, int m){
	int address = b+w*((j-lc)*m+(i-lr));
	printf("Address of element is: %d \n", address);
}
int main (){
	int choice;
	int b, w, i, j, lr, lc, m, n;
	printf(" Enter base address(b):  ");
	scanf("%d",&b);
	printf("Enter size of each elements in bytes:  ");
	scanf("%d",&w);
	printf("Enter row index of element to find(i):  ");
	scanf("%d", &i);
	printf("Enter column index of element to find(j):  ");
	scanf("%d", &j);
	printf("Enter lower limit of row(lr):  ");
	scanf("%d",&lr);
	printf("Enter lower limit of column(lc):  ");
	scanf("%d", &lc);
	printf("Enter total number of rows(m):  ");
	scanf("%d",&m);
	printf("Enter total number of column(n):  ");
	scanf("%d",&n);
	printf(" choose your address calculation method:  \n");
	printf("1. Row major \n");
	printf("2. Column major \n");
	printf("Enter your choice(1 or 2):  ");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			row_major(b,w,i,j,lr,lc,n);
			break;
		case 2:
		    column_major(b,w,i,j,lr,lc,m);
			break;
		default:
		    printf("Invalid choice !");	
	}
	return 0;
}
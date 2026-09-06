# include<stdio.h>
int main(){
	int choice;
	printf(" select data structure :  \n");
	printf("1. Array \n");
	printf("2. Link list \n");
	printf("3. Tree\n");
	printf("4. Graph\n");
	printf("Enter choice(1-4): ");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			printf("Type: Non-primitive, Linear, Dynamic Data Stucture");
			break;
		case 2:
		    printf("Type: Non-primitive, Linear, Static Data Stucture");
			break;
	    case 3:
	    case 4:	
		    printf("Type: Non-primitive, Non-linear Data Stucture")	;
		    break;
		default:
		    printf(" Invalid choice! \n");				
	}
	return 0;	
}
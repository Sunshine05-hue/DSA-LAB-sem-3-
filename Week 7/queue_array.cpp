#include<stdio.h>
# define size 5
void enqueue(int);
void dequeue();
void display();
int item[size], front= -1, rear= -1;
int main(){
	dequeue();
	enqueue(10);
	enqueue(21);
	enqueue(32);
	enqueue(43);
	enqueue(54);
	enqueue(71);
	display();
	dequeue();
	display();
	dequeue();
	dequeue();
	dequeue();
	dequeue();
	dequeue();
	dequeue();
	return 0;
}
void enqueue(int value){
	if(rear==(size-1))
	printf("full \n");
	else{
		if(front==-1)
		  front=0;
		rear++;
		item[rear]=value;
		printf("Inserted= %d  \n", value);  
	}
}
void dequeue(){
	if(front==-1)
	   printf("Empty. \n");
	else{
		printf("Deleted: %d \n",item[front]);
		front++;
	    if(front>rear)
		front=rear=-1;
	}   
}
void display(){
	if(rear==-1)
	printf("full \n");
	else{
		int i;
		printf("Elements: \n");
		for(i=front; i<=rear; i++){
			printf("%d  ",item[i]);
		}
		printf("\n");
	}
}
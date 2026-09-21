# include <stdio.h>
# define max 5
void push(int);
int pop();
int peek();
int isfull();
int isempty();
int stack[max];
int top= -1;
int isfull(){
	return top== max-1;
}
int isempty(){
	return top== -1;
}
void push(int value){
	if(isfull()){
		printf("stack overflow. \n");
	}else{
		top++;
		stack[top]= value;
		printf("pushed= %d \n",value);
	}
}
int pop(){
	if(isempty()){
		printf("No element to pop. \n");
		return -1;
	}else{
		int popped_value=stack[top];
		top--;
		return popped_value;
	}
}
int peek(){
	if(isempty()){
		printf("Stack is empty. \n");
		return -1;
	}
	return stack[top];
}
void display(){
	if(isempty()){
		printf("No element to pop. \n");
		return;
	}
	printf(" Stack elements:  \n");
	for(int i=top; i>=0; i--){
		printf("%d  ",stack[i]);
	}
	printf("\n");
}
int main(){
	pop();
	push(16);
	push(45);
	push(34);
	push(56);
	display();
	printf("popped= %d \n",pop());
	printf("top element= %d \n",peek());
	display();
	return 0;
}
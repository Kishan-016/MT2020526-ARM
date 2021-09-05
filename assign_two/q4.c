//Empty Ascending Stack//
#include<stdio.h> 
#include<stdlib.h>

int n, top =0, *stack;
void Display(){
printf("Elements of Empty ascending Stack is\n"); 
	for(int i=n-1 ; i>-1 ; i--)
    {
         printf("%d ",stack[i]);
    }
	printf("\n");
}

int push(int d){
	if(top==n) 
    {
        printf("Stack is full\n");
        return -1;
    }
    else
    {
    stack[top]=d;
    top=top+1;
     //SP will points to the empty location above the location of latest data
    return 0;
    }
}

int pop(){
	if(top==0)
    {
        printf("Stack is empty\n");
        return -1;
    }
    else
    {
        top=top-1;
        return stack[top];
    }	
}

int main(){
n = 5;
stack = (int*)malloc(n*sizeof(int));  //Allocate n*4 bytes as Stack Memory
push(15);
push(25);
push(35);
push(45);
push(55);
push(65);
Display();
pop();
pop();
pop();
pop();
pop();
pop();
return 0;
}
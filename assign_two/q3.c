//Full ascending stack//
#include<stdio.h> 
#include<stdlib.h>

int n, top =-1, *stack;
void Display(){
printf("Elements of Full ascending Stack is\n");    
for(int i=n-1 ; i>-1 ; i--)
    {
         printf("%d ",stack[i]);
    }
printf("\n");
}

int push(int d){
if(top==n-1)
    {
        printf("Stack is full\n");
        return -1;
    }
    else  
    {
        top=top+1;
        //SP will points to the location of latest data.
        stack[top]=d;
        return 0; 
    }
}

int pop(){
if(top==-1)
    {
        printf("Stack is empty\n");
        return -1;
    }
    else
    {
        return stack[top--];
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
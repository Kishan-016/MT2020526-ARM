//Full Descending Stack //
#include<stdio.h> 
#include<stdlib.h>

int n=5, top =5, *stack;
void Display(){
printf("Elements of Full Descending Stack is\n");
for(int i=n-1 ; i>-1 ; i--)
    {
         printf("%d ",stack[i]);
    }
printf("\n");
}

int push(int d){
        top=top-1;
        if(top<0)
        {
        printf("Sorry, Stack is full\n");
        return -1;
        }
        stack[top]=d;
        return 0;
}

int pop(){
if(top==4)
    {
        printf("Sorry, Stack is empty\n");
        return -1;
    }
    else
    {
        top=top+1;
        return stack[top];
    }
}

int main(){
stack = (int*)malloc(n*sizeof(int)); 

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

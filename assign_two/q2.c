//Empty Descending stack//

#include<stdio.h> 
#include<stdlib.h>

int n=5, top =4, *stack;

void Display(){
printf("Elements of Empty Descending Stack is\n");
for(int i=n-1 ; i>-1 ; i--)  //stack goes from n-1 to 0
    {
         printf("%d ",stack[i]);
    }
printf("\n");
}

int push(int d){
if(top==-1)
    {
        printf("Sorry, Stack is full\n");
        return -1;
    }
    else
    {
        stack[top]=d;
        //SP will be points to the empty location below the location of latest data.
        top=top-1;
        return 0;
    }
}

int pop(){
if(top==n-1)
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
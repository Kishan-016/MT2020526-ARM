#include<stdio.h>
#include<stdlib.h>
 
struct c_queue
{
    int size;
    int f;
    int r;
    int* arr;
};
 
 
int empty(struct c_queue *q){
    if(q->r==q->f){
        return 1;
    }
    return 0;
}
 
int full(struct c_queue *q){
    if((q->r+1)%q->size == q->f){
        return 1;
    }
    return 0;
}
 
void add_to_queue(struct c_queue *q, int val){
    if(full(q)){
        printf("This Queue is full\n");
    }
    else{
        q->r = (q->r +1)%q->size;
        q->arr[q->r] = val; 
        printf("Adding the element: %d\n", val);
    }
}
 
int remove_from_queue(struct c_queue *q){
    int a = -1;
    if(empty(q)){
        printf("This Queue is empty\n");
    }
    else{
        q->f = (q->f +1)%q->size;
        a = q->arr[q->f]; 
    }
    return a;
}
 
 
int main(){
    struct c_queue q;
    q.size = 4;
    q.f = q.r = 0;
    q.arr = (int*) malloc(q.size*sizeof(int));
    
     add_to_queue(&q, 15);
    add_to_queue(&q, 25);
    add_to_queue(&q, 23);
    add_to_queue(&q, 55);
    if(full(&q)){
        printf("Queue is full\n");
    } 
    
    if(empty(&q)){
        printf("Queue is empty\n");
    }
    printf("removing the element %d\n", remove_from_queue(&q));
    printf("removing the element %d\n", remove_from_queue(&q));
    printf("removing the element %d\n", remove_from_queue(&q)); 
    printf("removing the element %d\n", remove_from_queue(&q));
    if(empty(&q)){
        printf("Queue is empty\n");
    }
     
    return 0;
}

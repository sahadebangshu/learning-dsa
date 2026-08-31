#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int a[MAX];
int front=-1;
int rear=-1;

int isFull();
int isEmpty();
void enq(int);
void deq();
void peek();
void display();

int main(){
    int ch,data;
    while(1){
        printf("1.Enqueue\n2.Dequeue\n3.Peek\n4.Display\n5.Exit\n\nEnter your choice : ");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                enq(data);
                break;
            case 2:
                deq();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                exit(0);
            default:
                printf("Wrong choice\n");
        }
    }
    return 0;
}
int isFull(){
    return rear == MAX-1;
}
int isEmpty(){
    return(front==-1 || front>rear);
}
void enq(int data){
    if(isFull())
        printf("Queue Overflow\n");
    else{
        printf("Enter data : ");
        scanf("%d", &data);
        if(front==-1)
            front=0;
        rear++;
        a[rear] = data;
        printf("Enqueued : %d\n", data);
    }
}
void deq(){
    if(isEmpty())
        printf("Queue Underflow\n");
    else{
        printf("Dequeued : %d\n", a[front]);
        front++;
    }
}
void peek(){
    if(isEmpty())
        printf("Queue Underflow\n");
    else{
        printf("Front element : %d\n", a[front]);
    }
}
void display(){
    if(isEmpty())
        printf("Queue empty\n");
    else{
        printf("Elements : ");
        for(int i=front;i<=rear;i++)
            printf("%d\t", a[i]);
        printf("\n");
    }
}
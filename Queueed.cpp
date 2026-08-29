#include<iostream>
#include<cstdlib>
using namespace std;
#define MAX 5

int a[MAX];
int front=-1,rear=-1;

int isFull();
int isEmpty();
void enq(int);
void deq();
void peek();
void dis();

int main(){
    int ch,data;
    while(1){
        cout << "1.Enqueue\n2.Dequeue\n3.Peek\n4.Display\n5.Exit\n\nEnter your choice : ";
        cin >> ch;
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
                dis();
                break;
            case 5:
                exit(0);
            default:
                cout << "Wrong Choice" << endl;
        }
    }
    return 0;
}
int isFull(){
    return(rear == MAX-1);
}
int isEmpty(){
    return(front==-1 || front>rear);
}
void enq(int data){
    if(isFull()){
        cout << "Queue Overflow" << endl;
    }
    else{
        if(front==-1)
            front=0;
        cout << "Enter data : ";
        cin >> data;
        rear++;
        a[rear] = data;
        cout << "Enqueued : " << a[rear] << endl;
    }
}
void deq(){
    if(isEmpty()){
        cout << "Queue Underflow" << endl;
    }
    cout << "Dequeued : " << a[front] << endl;
    front++;

}
void peek(){
    if(isEmpty())
        cout << "Queue Underflow" << endl;
    else
        cout << "Front Element : " << a[front] << endl;
}
void dis(){
    if(isEmpty()){
        cout << "Queue Underflow" << endl;
    }
    else {
        cout << "Elements : ";
        for(int i=front;i<=rear;i++)
            cout << a[i] << "  ";
        cout << endl;
    }
}
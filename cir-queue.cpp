#include<iostream>
#include<cstdlib>
using namespace std;

#define MAX 5
int a[MAX];
int front=-1;
int rear=-1;

int isFull();
int isEmpty();
void enqueue(int);
void dequeue();
void peek();
void display();

int main(){
    int ch,data;
    while(1){
        cout << "1.Enqueue\n2.Dequeue\n3.Peek\n4.Display\n5.Exit\n\nEnter your choice : ";
        cin >> ch;
        switch(ch){
            case 1:
                enqueue(data);
                break;
            case 2:
                dequeue();
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
                cout << "Wrong choice" << endl;
        }
    }
    return 0;
}
int isFull(){
    return (rear+1) % MAX == front;
}
int isEmpty(){
    return front == -1;
}
void enqueue(int data){
    if(isFull())
        cout << "Queue Overflow" << endl;
    else{
        cout << "Enter data : ";
        cin >> data;
        if(isEmpty())
            front=0;
        rear = (rear+1) % MAX;
        a[rear] = data;
        cout << "Enqueued : " << data << endl;
    }
}
void dequeue(){
    if(isEmpty())
        cout << "Queue Underflow" << endl;
    else{
        cout << "Dequeued : " << a[front] << endl;
        if(front==rear){
            front=-1;
            rear=-1;
        } else{
            front = (front+1) % MAX;
        }
    }
}
void peek(){
    if(isEmpty())
        cout << "Queue Underflow" << endl;

    else{
        cout << "Front element : " << a[front] << endl;
    }

}
void display(){
    if(isEmpty())
        cout << "Queue Underflow" << endl;
    else{
        cout << "Elements : ";
        int i=front;
        while(1){
            cout << a[i] << "  ";
            if(i==rear)
                break;
            i = (i+1) % MAX;
        }
        cout << endl;
    }
}
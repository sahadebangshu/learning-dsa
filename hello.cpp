#include <iostream>
#include <cstdlib>
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
    return(rear==MAX-1);
}
int isEmpty(){
    return(front==-1 || front>rear);

}
void enqueue(int data){
    if(isFull())
        cout << "Queue Overflow" << endl;
    else{
        if(front==-1){
            front=0;
        }
        cout << "Enter data : ";
        cin >> data;
        rear++;
        a[rear] = data;
        cout << "Enqueued : " << a[rear] << endl;
    }
}
void dequeue(){
    if(isEmpty()){
        cout << "Queue Underflow" << endl;
    }
    else{
        cout << "Dequeued : " << a[front] << endl;
        front++;
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
        for(int i=front;i<=rear;i++)
            cout << a[i] << "  ";
        cout << endl;
    }
}
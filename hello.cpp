#include<bits/stdc++.h>
#include<cstdlib>
using namespace std;
#define MAX 5
int a[MAX];
int front=-1,rear=-1;
void enque(int);
void dque();
void peek();
void isfull();
void isEmpty();

int main(){
    int ch,data;
    while(1){
        cout << "1. Enqueue\n2. Dequeue\n3. Peek\n4. Exit\n\nEnter your choice : ";
        cin >> ch;
        switch(ch){
            case 1:
                enque(data);
                break;
            case 2:
                dque();
                break;
            case 3:
                peek();
                break;
            case 4:
                exit(0);
            default:
                cout << "Wrong Choice" << endl;
        }
    }
    return 0;
}
void enque(int data){
    cout << "Enter data : ";
    cin >> data;
    if(rear==MAX-1){
        cout << "Queue Overflow" << endl;
    }
    if(front==-1) {
        front=0;
        rear+=1;
        a[rear] = data;
    }
}
void dque(){
    if(front==-1 || front>rear) {
        cout << "Queue Underdlow" << endl;
    } else {
        front++;
        cout << "Dequeued : " << a[front] << endl;;
    }
}
void peek(){
    if(front==-1 || front>rear){
        cout << "Queue is empty" << endl;
        return;
    }
    cout << "front : " << a[front] << endl;
}
void isFull(){

}
void isEmpty() {

}
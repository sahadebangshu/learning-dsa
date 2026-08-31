#include<iostream>
#include<cstdlib>
using namespace std;

#define MAX 5
int a[MAX];
int top=-1;

int isFull();
int isEmpty();
void push(int);
void pop();
void peek();

int main(){
    int ch,data;
    while(1){
        cout << "1.Push\n2.Pop\n3.Peek\n4.Exit\n\nEnter your choice : ";
        cin >> ch;
        switch(ch){
            case 1:
                push(data);
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                exit(0);
            default:
                cout << "Wrong choice" << endl;

        }
    }
    return 0;
}
int isFull() {
    return (top==MAX-1);
}
int isEmpty(){
    return (top==-1);
}
void push(int data){
    if(isFull())
        cout << "Stack Overflow" << endl;
    else{
        cout << "Enter data : ";
        cin >> data;
        top++;
        a[top] = data;
        cout << "Pushed : " << a[top] << endl;
    }
}
void pop(){
    int data;
    if(isEmpty())
        cout << "Stack Underflow" << endl;
    else {
        data = a[top];
        cout << "Popped : " << a[top] << endl;
        top--;
    }
}
void peek() {
    if(isEmpty())
        cout << "Stack Overflow" << endl;
    else{
        cout << "Top element : " << a[top] << endl;
    }
}
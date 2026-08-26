#include<bits/stdc++.h>
#include<cstdlib>
#define MAX 5
using namespace std;
int top=-1, a[MAX];
void push(int);
void pop();
void peek();
int main(){
    int data,ch;
    while(1) {
        cout << "1.Push\n2.Pop\n3.Peek\n4.Exit\n\nEnter your choice : ";
        cin >> ch;
        switch(ch) {
            case 1:
                cout << "Enter your data : ";
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
                cout << "Wrong Choice" << endl;
        }
    }
    return 0;
}
void push(int data){
    cin >> data;
    if(top == MAX-1)
        cout << "Overflow" << endl;
    else{
        top++;
        a[top]=data;
    }
}
void pop(){
    int data;
    if(top==-1){
        cout << "Underflow" << endl;
    } else {
        data=a[top];
        top--;
    }
}
void peek() {
    if(top==-1)
        cout << "No value" << endl;
    else {
        cout << a[top] << endl;
    }
}
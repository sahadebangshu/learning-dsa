#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;
#define MAX 5
int a[MAX];
int top = -1;
void push(int);
void pop(int);
void peek();
int main(){
    int n,ch;
    while(1) {
        cout << "1.Push\n2.Pop\n3.Peek\n4.Exit\n\nEnter your choice : ";
        cin >> ch;
        switch(ch){
            case 1:
                cout << "Enter your data : ";
                cin >> n;
                push(n);
                break;
            case 2:
                pop(n);
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
void push(int n){
    if(top == MAX-1)
        cout << "Overflow" << endl;
    else {
        top++;
        a[top] = n;
    }
}
void pop(int n){
    if(top==-1)
        cout << "Underflow" << endl;
    else{
        n = a[top];
        top--;
    }
}
void peek(){
    if(top==-1)
        cout << "Underflow" << endl;
    else{
        cout << a[top] << endl;
    }
}
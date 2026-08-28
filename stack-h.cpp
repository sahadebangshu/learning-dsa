#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;
#define MAX 5
int a[MAX];
int top=-1;
void push(int);
void pop();
void peek();
int main() {
    int ch,data;
    while(1){
        cout <<"1. Push\n2. Pop\n3. Peek\n4. Exit\n\nEnter your choice : ";
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
void push(int data){
    cout << "Enter Data : ";
    cin >> data;
    if(top==MAX-1){
        cout << "Overflow" << endl;
    } else {
        top++;
        a[top] = data;
    }
}
void pop(){
    int data;
    if(top==-1) cout << "StackIsEmpty" << endl;
    else{
        data = a[top];
        top--;
    }
}
void peek(){
    if(top==-1) cout << "StackIsEmpty" <<endl;
    else cout << a[top] << endl;
}
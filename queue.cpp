#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;
#define SIZE 100
int a[SIZE];
int rear=-1;
int front=-1;
void enqueue(int);
void dequeue();
void peek();
bool isEmpty();
int main(){
    int data,ch;
    while(1) {
        cout << "1.Enqueue\n2.Dequeue\n3.Peek\n4.Exit\n\nEnter your choice : ";
        cin >> ch;
        while(1){
            switch(ch) {
                case 1:
                    cout << "Enter your data : ";
                    cin >> data;
                    enqueue(data);
                    break;
                case 2:
                    dequeue();
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
    }
    return 0;
}
void enqueue(int data){
    if(rear==SIZE-1)
        cout << "Queue Overflow" << endl;
    else if(front==-1) {
        front++;
        rear++;
        a[rear]=data;
    }
}
void dequeue() {
    if
}
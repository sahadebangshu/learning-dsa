#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int a[MAX],top=-1;
void push(int);
void pop(int);
void peek();
int main() {
    int n,ch;
    while(1){
        printf("1.Push\n2.Pop\n3.Peek\n4.Exit\n\nEnter your choice : ");
        scanf("%d", &ch);
        switch(ch){
            case 1:
                printf("Enter your data : ");
                scanf("%d", &n);
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
                printf("Wrong Choice\n");
        }
    }
    return 0;
}
void push(int n){
    if(top == MAX-1)
        printf("Overflow\n");
    else{
        top++;
        a[top] = n;
    }
}
void pop(int n){
    if(top==-1)
        printf("Underflow\n");
    else{
        n = a[top];
        top--;
    }
}
void peek() {
    if(top==-1)
        printf("Underflow\n");
    else{
        printf("%d\n", a[top]);
    }
}
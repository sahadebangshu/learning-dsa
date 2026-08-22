#include <stdio.h>
#include <stdlib.h>

int init(int [], int);
int display(int [],int n);
int insert(int [],int,int,int);
int delete(int [],int,int);
int main() {
    int a[100],n,pos,data,x;
    while(1) {
        printf("0.Exit\n1.Initialise\n2.Display\n3.Insert\n4.Delete\nEnter your choice : ");
        scanf("%d", &x);
        switch(x) {
        case 0:
            exit(0);
        case 1:
            printf("enter the no of element : ");
            scanf("%d", &n);
            init(a,n);
            break;
        case 2:
            printf("After insertion : ");
            display(a,n);
            break;
        case 3:
            printf("enter the position : ");
            scanf("%d", &pos);
            printf("enter the data you want to insert : ");
            scanf("%d", &data);
            insert(a,n,pos,data);
            break;
        case 4:
            printf("enter the no of pos : ");
            scanf("%d", &pos);
            delete(a,n,pos);
            break;
        default :
            printf("Wrong Choice\n");
        }
        
    }
    return 0;
}
int init(int a[], int n) {
    printf("elements are : ");
    for(int i=0;i<n;i++)
        scanf("%d", &a[i]);
    return 0;
}
int display(int a[],int n){
    for(int i=0;i<n;i++)
        printf("%d\t", a[i]);
    printf("\n");
    return 0;
}
int insert(int a[],int n, int pos, int data){
    for(int i=n;i>=pos;i--)
        a[i] = a[i-1];
    a[pos-1] = data;
    return 0;
}
int delete(int a[], int n,int pos) {
    for(int i=pos-1;i<=n-1;i++)
        a[i] = a[i+1];
}
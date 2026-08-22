#include<stdio.h>
#include<stdlib.h>
void init(int [], int);
void dis(int [], int);
void insert(int [],int,int,int);
void del(int [],int,int);
int main() {
    int a[100],n,pos,data,x;
    while(1){
        printf("0.exit\n1.Initialise\n2.Display\n3.Insert\n4.Delete\n\nEnter your choice : ");
        scanf("%d", &x);
        switch(x){
            case 0:
                exit(0);
            case 1:
                printf("enter no of elements : ");
                scanf("%d", &n);
                if(n==0)
                    exit(0);
                else
                    printf("enter your elements : ");
                    init(a,n);
                break;
            case 2:
                printf("After initialisation : ");
                dis(a,n);
                break;
            case 3:
                printf("enter position : ");
                scanf("%d", &pos);
                if(pos>=1 && pos<=n){
                    printf("Enter data : ");
                    scanf("%d", &data);
                    insert(a,n,pos,data);
                    n++;
                }
                else{
                    printf("Invalid!!\n");
                }
                break;
            case 4:
                if(pos>=1 && pos<=n){
                    printf("Enter the position : ");
                    scanf("%d", &pos);
                    del(a,n,pos);
                    n--;
                } else
                    printf("Invalid!!\n");
                break;
            default:
                printf("wrong Choice");
        }
    }
    return 0;
}
void init(int a[],int n){
    for(int i=0;i<n;i++)
        scanf("%d", &a[i]);
}
void dis(int a[], int n){
    for(int i=0;i<n;i++)
        printf("%d\t", a[i]);
    printf("\n");
}
void insert(int a[], int n,int pos,int data){
    for(int i=n;i>pos-1;i--)
        a[i] = a[i-1];
    a[pos-1] = data;
}
void del(int a[],int n,int pos){
    for(int i=pos-1;i<n-1;i++)
        a[i] = a[i+1];
}
#include<stdio.h>
#include<stdlib.h>
void init(int[],int);
void dis(int[],int);
void ins(int[],int,int,int);
void del(int[],int,int);
int main(){
    int a[100],n,ch,pos,data;
    while(1){
        printf("0.Exit\n1.Initialise\n2.Display\n3.Insert\n4.Delete\n\nEnter your choice : ");
        scanf("%d",&ch);
        switch(ch) {
            case 0:
                exit(0);
            case 1:
                printf("Enter the no of elements : ");
                scanf("%d",&n);
                if(n==0)
                    exit(0);
                else{
                    printf("Enter your elements : ");
                    init(a,n);
                }
                break;
            case 2:
                dis(a,n);
                break;
            case 3:
                printf("Enter the no of position : ");
                scanf("%d",&pos);
                if(pos>=1 && pos<=n+1){
                    ins(a,n,pos,data);
                    n++;
                } else {
                    printf("Invalid!!");
                }
                break;
            case 4:
                printf("Enter position : ");
                scanf("%d",&pos);
                del(a,n,pos);
                n--;
                break;
            default:
                printf("Wrong Choice\n");
        }
    }
    return 0;
}
void init(int a[],int n){
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
}
void dis(int a[],int n){
    for(int i=0;i<n;i++)
        printf("%d\t", a[i]);
    printf("\n");
}
void del(int a[],int n, int pos){
    for(int i=pos-1;i<n-1;i++) {
        a[i] = a[i+1];
    }
}
void ins(int a[],int n,int pos,int data){
    printf("Enter your data : ");
    scanf("%d",&data);
    for(int i=n;i>pos-1;i--)
        a[i] = a[i-1];
    a[pos-1] = data;
}
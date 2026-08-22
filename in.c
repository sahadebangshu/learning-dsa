#include<stdio.h>
int main() {
    int a[100],n,i,pos,data;
    printf("enter the no of element : ");
    scanf("%d", &n);


    //initialisation
    printf("enter your elements : ");
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }

    //display the original array
    for(i=0;i<n;i++)
        printf("%d\t", a[i]);
    printf("\n");


    //data inserting
    printf("enter the no of position : ");
    scanf("%d", &pos);
    printf("enter the data to insert : ");
    scanf("%d", &data);
    for(i=n;i>=pos;i--)
        a[i] = a[i-1];
    a[pos-1] = data;
    printf("after insertion : ");
    for(i=0;i<n;i++)
        printf("%d\t", a[i]);
    printf("\n");


    //delete a data from the array
    printf("enter the position : ");
    scanf("%d", &pos);
    for(i=pos-1;i<=n;i++)
        a[i] = a[i+1];
    for(i=0;i<n;i++)
        printf("%d\t", a[i]);
    printf("\n");
    return 0;
}
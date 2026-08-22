#include<stdio.h>
int main() {
    int a[100],n,pos,data,i;


    //Initialisation
    printf("enter the no of elements : ");
    scanf("%d", &n);
    printf("enter your elements : ");
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }


    //Display
    printf("After initialisation : ");
    for(i=0;i<n;i++)
        printf("%d\t", a[i]);
    printf("\n");
    
    
    //Insert
    printf("enter the no of position : ");
    scanf("%d", &pos);
    printf("enter the data you want to insert : ");
    scanf("%d", &data);
    for(i=n;i>=pos;i--)
        a[i] = a[i-1];
    a[pos-1] = data;
    printf("After initialisation : ");
    for(i=0;i<n;i++)
        printf("%d\t", a[i]);
    printf("\n");


    //Delete a data
    printf("enter the no of position : ");
    scanf("%d", &pos);
    for(i=pos-1;i<=n-1;i++)
        a[i] = a[i+1];
    for(i=0;i<n;i++)
        printf("%d\t", a[i]);
    return 0;
}
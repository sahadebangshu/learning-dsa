#include<iostream>
#include<cstdlib>
using namespace std;
void init(int[],int);
void dis(int[],int);
int ins(int[],int,int);
int del(int[],int,int);


int main(){
    int a[100],ch,pos,n,data;
    while(1){
        cout << "0.Exit\n1.Initialise\n2.Display\n3.Insert\n4.Delete\nEnter your choice : ";
        cin >> ch;
        switch(ch){
            case 0:
                exit(0);
            case 1:
                cout << "Enter the no of elements : ";
                cin >> n;
                init(a,n);
                break;
            case 2:
                dis(a,n);
                break;
            case 3:
                ins(a,n,pos);
                break;
            case 4:
                del(a,n,pos);
                break;
            default:
                cout << "Wrong Choice" << endl;
        }
    }
    return 0;
}

void init(int a[],int n){
    cout << "Enter elements : ";
    for(int i=0;i<n;i++)
        cin >> a[i];
    cout << "Your elements : ";
    for(int i=0;i<n;i++)
        cout << a[i] << "  ";
    cout << endl;
}
void dis(int a[],int n){
    cout << "Your elements : ";
    for(int i=0;i<n;i++)
        cout << a[i] << "  ";
    cout << endl;
}

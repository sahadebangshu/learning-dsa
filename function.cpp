#include <iostream>
#include <cstdlib>
using namespace std;
int init(int a[], int n) {
    for(int i=0;i<n;i++)
        cin >> a[i];
    return 0;
}
void display(int a[], int n){
    for(int i=0;i<n;i++)
        cout << a[i];
    cout << endl;
}
void insert(int a[],int n,int pos,int data){
    for(int i=n;i>=pos-1;i--)
        a[i] = a[i-1];
    a[pos-1] = data;
}
void del(int a[],int n,int pos){
    for(int i=pos-1;i<=n-1;i++)
        a[i] = a[i+1];
}
int main() {
    int a[100],x,n,pos,data;
    while(1){
        cout << "0.exit\n1.initialise\n2.display\n3.insert\n4.delete\n*********\nenter your choice : ";
        cin >> x;
        switch(x){
            case 0:
                exit(0);
            case 1:
                cout << "enter the no of element : ";
                cin >> n;
                cout << "enter your elements : ";
                init(a,n);
                break;
            case 2:
                cout << "after insertion : ";
                display(a,n);
                break;
            case 3:
                cout << "enter the position : ";
                cin >> pos;
                cout << "enter data : ";
                cin >> data;
                insert(a,n,pos,data);
                break;
            case 4:
                cout << "enter position : ";
                cin >> pos;
                del(a,n,pos);
                break;
            default:
                cout << "Wrong Choice" << endl;
        }
    }
    return 0;
}
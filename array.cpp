#include <iostream>
#include <cstdlib>
using namespace std;
int init(int a[], int n) {
    for(int i=0;i<n;i++)
        cin >> a[i];
    return 0;
}
void dis(int a[],int n){
    for(int i=0;i<n;i++)
        cout << a[i] << "  ";
    cout << endl;
}
void insert(int a[],int n,int pos,int data){
    for(int i=n;i>=pos-1;i--)
        a[i] = a[i-1];
    a[pos-1] = data;
}
void del(int a[],int n,int pos){
    for(int i=pos-1;i<n-1;i++)
        a[i] = a[i+1];
}
int main() {
    int a[100],x,n,pos,data;
    while(1){
        //system("clear");
        cout << "0.Exit\n1.Initialise\n2.Display\n3.Insert\n4.Delete\n\nEnter your choice : ";
        cin >> x;
        switch(x){
            case 0:
                exit(0);
            case 1:
                cout << "Enter the no of elements : ";
                cin >> n;
                if(n==0)
                    exit(0);
                else {
                    cout << "Enter elements : ";
                    init(a,n);
                }
                break;
            case 2:
                cout << "After initialisation : ";
                dis(a,n);
                break;
            case 3:
                cout << "Enter the position : ";
                cin >> pos;
                if(pos>=1 && pos<=n){
                    cout << "Enter the data : ";
                    cin >> data;
                    insert(a,n,pos,data);
                    n++;
                } else
                    cout << "Invalid!!";
                break;
            case 4:
            cout << "Enter the position : ";
            cin >> pos;
            if(pos>=1 && pos<=n){
                del(a,n,pos);
                n--;
            } else
                cout << "Invalid!!" << endl;
            break;
        default:
            cout << "Wrong Choice" << endl;
        }
    }
    return 0;
}
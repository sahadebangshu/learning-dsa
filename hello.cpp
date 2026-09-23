#include<iostream>
#include<cstdlib>
using namespace std;
void init(int [],int);
void dis(int [],int);
void insert(int [],int,int);
void del(int);
int main(){
    int ch,pos,data;
    while(1){
        cout << "0.Exit\n1.Initialisation\n2.Display\n3.Insert\n4.Delete\n\nEnter your choice : ";
        cin << ch;
        switch(ch){
            case 0:
                exit(0);
            case 1:
                init(arr,n);
                break;
            case 2:
                dis(arr,n);
                break;
            case 3:
                insert(arr,pos,data);
                break;
            case 4:
                del(pos);
                break;
            default:
                cout << "Wrong Choice" << endl;
        }
    }
    return 0;
}
void init(int arr[],int n){
    cout << "Enter the no elements : ";
    cin >> n;
    cout << "Enter elements : ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
}
void dis(int arr[],int n){
    cout << "Entered elements : ";
    for(int i=0;i<n;i++){
        cout << a[i] << "  ";
    }
    cout << endl;
}
void insert(int [],int,int);
void del(int)
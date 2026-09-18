#include<iostream>
using namespace std;
void revArr(int [],int);
int main(){
    int a[] = {4,2,7,8,1,2,5};
    int sz = sizeof(a)/sizeof(int);
    revArr(a,sz);
    for(int i=0;i<sz;i++){
        cout << a[i] << "  ";
    }
    cout << endl;
    return 0;
}
void revArr(int a[],int sz){
    int start = 0, end = sz-1;
    while(start<end){
        swap(a[start], a[end]);
        start++;
        end--;
    }
}
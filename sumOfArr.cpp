#include<iostream>
#include<cstdlib>
using namespace std;
int sum(int [],int);
int main(){
    int a[] = {1,2,3,4,5};
    int sz = sizeof(a)/sizeof(int);
    cout << sum(a,sz) << endl;
    return 0;
}
int sum(int a[],int sz){
    int sum=0;
    for(int i=0;i<sz;i++){
        sum = sum+a[i];
    }
    return sum;
}
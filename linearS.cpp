#include<iostream>
using namespace std;
int linearS(int [],int);
int main(){
    int a[] = {4,2,7,8,1,2,5};
    int target = 5;
    int sz = sizeof(a)/sizeof(int);
    cout << linearS(a,target) << endl;
    return 0;
}
int linearS(int a[],int target){
    int sz;
    for(int i=0;i<sz;i++){
        if(a[i] == target)
            return i;
    }
    return -1;
    
}
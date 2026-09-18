#include<iostream>
#include<climits>
using namespace std;
void max(int [],int);
void min(int [],int);
int main(){
    int a[] = {5,15,22,1,-15,-24};
    int sz = sizeof(a)/sizeof(int);
    min(a,sz);
    max(a,sz);
    return 0;
}
void min(int a[], int sz){
    int smallest = INT_MAX,sIndex;
    for(int i=0;i<sz;i++){
        if(a[i]<smallest){
            smallest = a[i];
            sIndex = i;
        }
    }
    cout << "Smallest no in array : " << smallest << endl;
    cout << "Index : " << sIndex << endl;
}
void max(int a[], int sz){
    int largest = INT_MIN;
    int lIndex;
    for(int i=0;i<sz;i++){
        if(a[i]>largest){
            largest=a[i];
            lIndex=i;
        }
    }
    cout << "Largest no in array : " << largest << endl;
    cout << "Index : " << lIndex << endl;
}
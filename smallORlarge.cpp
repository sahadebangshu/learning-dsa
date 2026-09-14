#include<iostream>
#include<climits>
using namespace std;
int main(){
    int a[] = {5,15,22,1,-15,-24};
    int smallV = INT_MAX;
    int smallIn, n = sizeof(a)/sizeof(int);
    for(int i=0;i<n;i++){
        if(a[i]<smallV){
            smallV=a[i];
            smallIn=i;
        }
    }
    cout << "Smallest value : " << smallV << endl;
    cout << "Index : " << smallIn << endl;

    int largeV = INT_MIN;
    int largeIn;
    for(int i=0;i<n;i++){
        if(a[i]>largeV){
            largeV=a[i];
            largeIn=i;
        }
    }
    cout << "Large value : " << largeV << endl;
    cout << "Index : " << largeIn << endl;
    return 0;
}
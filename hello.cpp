#include<iostream>
#include<climits>
using namespace std;
int main(){
    int small = INT_MIN;
    int a[] = {1,2,3,4,5,6,7};
    int n = sizeof(a)/sizeof(int);
    for(int i=0;i<n;i++){
        small = max(a[i],small);
    }
    cout << small << endl;
    return 0;
}
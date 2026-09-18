#include<iostream>
#include<climits>
using namespace std;
int main(){
    int a[] = {3,-4,5,4,-1,7,-8};
    int n=sizeof(a)/sizeof(int);
    int maxSum=INT_MIN;
    for(int st=0;st<n;st++){
        int currSum=0;
        for(int end=st;end<n;end++){
            currSum=currSum+a[end];
            maxSum=max(currSum,maxSum);
        }

    }
    cout << "Max Subarray sum : " << maxSum << endl;
    return 0;
}
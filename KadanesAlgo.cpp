#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[] = {3,-4,5,4,-1,7,-8};
    int n=sizeof(arr)/sizeof(int);
    int maxSum=INT_MIN;
    int currSum=0;
    for(int i=0;i<n;i++){
        currSum = currSum+arr[i];
        maxSum=max(currSum, maxSum);
        if(currSum<0)
            currSum=0;
    }
    cout << maxSum << endl;
    return 0;//Dynamic Programing
}
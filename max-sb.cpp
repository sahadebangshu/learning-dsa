#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int maxSsum(vector<int>);
int main(){
    vector<int> nums={3,-4,5,4,1,7,-8};
    maxSsum(nums);
    return 0;
}
int maxSsum(vector<int> nums){
    int n=nums.size(), maxSum=INT_MIN;
    for(int st=0;st<n;st++){
        int currSum=0;
        for(int end=st;end<n;end++){
            currSum += nums[end];
            maxSum = max(currSum, maxSum);
        }
    }
    cout << maxSum << endl;
}
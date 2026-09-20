#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int Sum(vector<int>);
int main(){
    vector<int> nums={-2,1,-3,4,-1,2,1,-5,4};
    cout << Sum(nums) << endl;
    return 0;
}
int Sum(vector<int> nums){
    int n=nums.size();
    int currSum=0,maxSum=INT_MIN;
    for(int i=0;i<n;i++){
        currSum += nums[i];
        maxSum=max(currSum,maxSum);
        if(currSum<0)
            currSum=0;
    }
    return maxSum;
}
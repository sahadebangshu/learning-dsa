#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> nums={2,7,11,15},ans;
    int target = 26;
    int n=nums.size();
    int i=0,j=n-1;
    while(i<j){
        int pairSum = nums[i]+nums[j];
        if(pairSum<target)
            i++;
        else if(pairSum>target)
            j--;
        else{
            ans.push_back(i);
            ans.push_back(j);
            break;
        }
    }
    cout << ans[0] << ", " << ans[1] << endl;
    return 0;
}
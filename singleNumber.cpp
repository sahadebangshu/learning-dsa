#include<iostream>
#include<vector>
using namespace std;
int singleNo(vector<int>);
int main(){
    vector<int> nums={4,1,2,1,2};
    cout << singleNo(nums) << endl;
    return 0;
}
int singleNo(vector<int> nums){
    int ans=0;
    for(int i:nums){
        ans = ans^i;
    }
    return ans;
}
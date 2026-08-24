#include<bits/stdc++.h>
using namespace std;
int main() {
    int sum=0,a[5] = {0,1,2,3,4};
    for(int i=0;i<5;i++){
        sum = sum + a[i];
    }
    cout << sum;
    return 0;
}
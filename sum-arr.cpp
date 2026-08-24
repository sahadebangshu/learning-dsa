#include<bits/stdc++.h>
#include<cstdlib>
using namespace std;
int arrSum(int a[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        cin >> a[i];
        sum+=a[i];
    }
    return sum;
}
int main() {
    int a[100],n,sum=0;
    while(1){
        cout << "enter the no of elements : ";
        cin >> n;
        if(n==0)
            exit(0);
        else{
            cout << "Enter your elements : ";
            cout << "So,the sum is : " << arrSum(a,n) << endl;
        }
    }
    return 0;
}
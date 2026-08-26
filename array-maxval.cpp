#include<bits/stdc++.h>
#include<cstdlib>
using namespace std;
int main() {
    //we can do by using function.
    int a[100],n;
    while(1){
        cout << "Enter the no of elements : ";
        cin >> n;
        if(n==0)
            exit(0);
        else{
            cout << "Enter your elements : ";
            for(int i=0;i<n;i++)
                cin >> a[i];
            int maxVal = a[0];
            for(int i=1;i<n;i++) {
                if(a[i] > maxVal)
                    maxVal = a[i];
            }
            cout << "So, the MAX value is : " << maxVal << endl;
        }
    }
    return 0;
}
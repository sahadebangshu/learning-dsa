#include<iostream>
using namespace std;
double myPow(double,int);
int main(){
    return 0;
}
double myPow(double x,int n){
    long binForm = n;
    if(n<0){
        x = 1/x;
        binForm = -binForm;
    }
    double ans=1;
    while(binForm>0){
        if(binForm%2 == 1){
            ans = ans*x;
        }
        x = x*x;
        binForm /= 2;
    }
    return ans;
}
#include<iostream>
using namespace std;
long decToBin(int);
int main(){
    int dec=5;
    cout << decToBin(dec) << endl;

    return 0;
}
long decToBin(int dec){
    int rem;
    long ans=0;
    int pow=1;
    while(dec>0){
        rem = dec%2;
        dec = dec/2;
        ans = ans+(rem*pow);
        pow = pow*10;
    }
    return ans;
}
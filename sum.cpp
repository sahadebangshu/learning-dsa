#include<iostream>
using namespace std;
int sum(int,int);
int main() {
    int a,b;
    cout << "enter any two number : ";
    cin >> a >> b;
    cout << "Answer will be : " << sum(a,b) << endl;
    return 0;
}
int sum(int x,int y){
    return(x+y);
}
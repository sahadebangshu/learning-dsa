#include<iostream>
#include<climits>
using namespace std;
int swap(int [],int);
int max(int [],int);
int min(int [],int);
int main(){
	int a[]={1,2,3,4,5};
	int sz=sizeof(a)/sizeof(int);
	swap(a,sz);
	return 0;
}
int swap(int a[],int sz){
	max(a,sz);
	min(a,sz);
}
int min(int a[],int sz){
	int small = INT_MAX;
	for(int i=0;i<sz;i++){
		if(a[i]<small){
			small = a[i];
		}
	}
	return small;
}
int max(int a[], int sz){
	int large=INT_MIN;
	for(int i=0;i<sz;i++){
		if(a[i]>large){
			large=a[i];
		}
	}
	return large;
}
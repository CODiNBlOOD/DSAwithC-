// Problem : Given an array a[] of size n.For every i from 0 to n-1 output max(a[0],a[1],......a[i])Means the max output from 0 to ith element  

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}

int mx = -19999999; // we give a very small value to max variable because we want to maximize it  every step
for(int i=0;i<n;i++){
    mx=max(mx,arr[i]);
    cout<<mx<<" ";
}
return 0;

}
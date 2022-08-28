// Q - Sum of alll subarrays
// Problem : Given an array a[] of size n.
// Output sum of each subarray of given array


#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        sum=0; // this is because we want sum value 0 after every completion of loop 

        for(int j=i;j<n;j++){
            sum+=arr[j];
            cout<<sum<<endl;
        }
    }
    return 0;
}

// Number of subarrays = n*(n+1)/2 
//                     4 * (4+1)/2
//                     20/2 = 10 ; 
//                     And on Output we can easily see that totalnumber
//                     of subarrays is total 10 
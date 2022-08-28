// Longest Arithimetic subarray 
// Full Question in notebook
//For 

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }



    int ans=2; // Arithimetic Subarray lenth
    int curr=2;//Arithimetic Subarray lenth include Ai ,, It increament if condition will be true else we have ans variable if no value is true

    int pd=arr[1]-arr[0];
    int j=2; // As we already Calculate 0 and 1th index in pd

    while(j<n){
        if(pd==arr[j]-arr[j-1]){
            curr++;
        }
        else{
            pd=arr[j]-arr[j-1];
            curr=2;
        }
        ans= max(ans,curr);
        j++;

    }

    cout<< ans <<endl;
    return 0;



}
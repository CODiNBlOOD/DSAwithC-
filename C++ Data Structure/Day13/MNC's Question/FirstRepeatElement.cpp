// Note that in question the output is the index number which is repeating at first in index

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    const int N = 1e6+2; // According to constraints and by const No one canchange this value if try check it shows error 
   int  idx[N];
    for(int i=0;i<N;i++){
     idx[i]=-1; // means if we enter value <=1e6+2 then all becomes -1 
    }
    int minidx=INT_MAX;// whenever we have to minimize the answer then we initialize it with a big value || if maximize the answer then initialize it with small value  
    for(int i=0;i<n;i++){
        if(idx[arr[i]]!=-1){
            minidx=min(minidx,idx[arr[i]]); 

            // here if its true then idx[a[i]] will update and then by min() method the minimum value will be store in minidx , that's why we chosse minidx = INT_MAX (= 2147483647) so that we can find minimum value 
        }
        else{
            idx[arr[i]]=i;
        }

    }
    if(minidx == INT_MAX ){
        cout<<"-1";
        // And if minidex will not update then we cannot write that much big value so that's why we make a condition and if its true means if no integer will repeat then print  -1 ... 
    }
    else{
        cout<<minidx+1<<endl;
    }
}
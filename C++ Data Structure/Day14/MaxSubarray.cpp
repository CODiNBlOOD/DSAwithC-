// Online C++ compiler to run C++ program online
#include<iostream>
#include<climits>
using namespace std;
int main() {
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int maxsum=INT_MIN;

for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
        int sum=0;
    for(int k=i;k<=j;k++){
// cout<<arr[k]<<" "; 
// 2nd question is to print max sum of these subbarrays so we comment the cout << arr[k] and use sum to sum;
sum+=arr[k];
// }cout<<endl;
    } maxsum=max(maxsum,sum);
}

}
cout<<maxsum<<endl;
    return 0;
}
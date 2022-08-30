// Subarrry with given sum 
#include<iostream>
using namespace std;
int main(){


int n,s;
cin>>n>>s;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}

int i=0; j=0; st=-1; en=-1; sum=0;
while(j<n && sum+a[j]<s) // means our start point 
{
    sum+=a[j];
    j++;
}

if(sum==s){
    cout<<sum<<endl;
    return 0;
}

while(j<n){
    sum+=a[j];
    while(sum>s){
        sum-=a[i];
        i++;
    }
    if(sum==s){
    st=i+1; // Storing starting index
    en=j+1; // storing ending index
    break; // So that if any value is ==s then it break the loop and print the position of index which is in st and en 
}

    j++;
}

cout<<st<<" "<<en<<" "<<endl;

}
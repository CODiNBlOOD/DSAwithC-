#include<iostream>
#include<cmath> // to use squre root , must inlclude this library 
using namespace std;
int main(){
    int n;
    cin>>n;

bool flag=0; // To know that the n%i==0 condition hit successfully
for(int i=2;i<=sqrt(n);i++){ //sqrt Method of square root
if(n%i==0){
    cout<<"Not Prime"<<endl;
    flag=1;
    break;
}

}
if(flag==0){
    cout<<"Prime"<<endl;
}




  return 0;}
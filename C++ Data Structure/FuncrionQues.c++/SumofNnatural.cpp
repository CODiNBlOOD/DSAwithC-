#include<iostream>
using namespace std;

int sum(int a){
    int add =0;
    add= (a*(a+1))/2;
    return add;
}

int32_t main(){
    int a;
 cin>>a;
    cout<<sum(a);
    
}
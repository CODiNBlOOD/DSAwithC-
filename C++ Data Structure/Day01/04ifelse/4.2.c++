// 2. Program to find maximum, minimum among two numbers.
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    if(a>b){
        cout<<a<<"is greater than"<<b<<endl;
    }
    else{
        cout<<b<<"is greater than"<<a<<endl;
    }
    return 0;
}
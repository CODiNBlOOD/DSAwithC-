// 1. Program to check if a number is even or odd.
#include<iostream>
using namespace std;
int main(){

int a;
cout<<"Enter Number"<<endl;
cin>>a;
if(a%2==0){
    cout<<"Entered Number "<<a<<" is even"<<endl;
}
else{
    cout<<"Entered Number "<<a<<" is odd"<<endl;
}
return 0;

}
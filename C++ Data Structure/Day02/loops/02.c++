// Ques2. Program to display multiplication table upto 10.
#include<iostream>
using namespace std;
int main(){

int num;
cin>>num;

for(int n=1;n<=10;n++){
   
    cout<<num<<"*"<<n<<"="<<n*num<<"\n";
}

return 0;
}
// Ques1. Write a program to print all odd numbers till n.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number";
    cin>>n;
    for(int number=1;number<=n;number++){
        if(number%2==0){
            continue;
        }
        cout<<"Odd number is "<<number<<endl;
    }
return 0;
    
}
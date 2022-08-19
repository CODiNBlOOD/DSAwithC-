// Ques2. Write a program to check if a given number is prime or not.
#include<iostream>
using namespace std;
int main(){

int n,prime;
cout<<"enter number";
cin>>n;
int i;
for(i=2;i<n;i++){
    if(n%i==0){
     cout<<"Not a prime number";
     break;
    }
}
if(i==n){
cout<<"prime number";
}
return 0;
}
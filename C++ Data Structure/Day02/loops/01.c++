// Ques1. Program to find sum of natural numbers till n.
#include<iostream>
using namespace std;
int main()
{

int n;
cin>>n;
int natural=0;
for(int sum=1;sum<=n;sum++ ){
    natural=natural+sum;
}
cout<<natural<<endl;

return 0;
}
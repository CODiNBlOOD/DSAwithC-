// Ques3. Program to add only positive numbers.
#include<iostream>
using namespace std;
int main(){

int num;
cin>>num;
int positive=0;
while (num>=0)
{
   positive+=num;
   cout<<"enter number again";
   cin>>num;
}
cout<<positive;
    return 0;
}
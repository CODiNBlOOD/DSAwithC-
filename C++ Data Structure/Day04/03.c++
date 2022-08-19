// Ques3. Write a program to print all prime numbers in a given range
#include <iostream>
using namespace std;
int main() {
int a,b;
cout<<"Enter 2 numbers: ";
cin>>a>>b;
for(int num=a;num<=b;num++){ // the first loop is for print numbers which is in num=a;
    int i;
    for(i=2;i<num;i++){ // checking condition if not then break
        if(num%i==0){
            break;
        }
    }
    if (num==i) //if prime then print num and again check until num<=b,
    {
     cout<<num<<"\n";
    }
    
}
return 0;
}
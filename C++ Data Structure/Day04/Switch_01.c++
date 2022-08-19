// Write a program to write a simple calculator.
#include<iostream>
using namespace std;
int main(){

char Calculater;
int a,b;
cout<<"Enter a to sum \n b to subtraction \n c to Divide \n d to Multiply : ";
cin>>Calculater;

switch (Calculater)
{
case 'a':
cout<<"You choose Sum"<<endl;
    cout<<"Enter first number"<<endl;
    cin>>a;
    cout<<"Enter second number"<<endl;
    cin>>b;
    cout<<"Sum is"<<a+b<<endl;

break;

case 'b':
    cout<<"You choose Subtraction"<<endl;
    cout<<"Enter first number"<<endl;
    cin>>a;
    cout<<"Enter second number"<<endl;
    cin>>b;
    cout<<"Subtraction is"<<a-b<<endl;

break;

case 'c':
    cout<<"You choose Subtraction"<<endl;
    cout<<"Enter first number"<<endl;
    cin>>a;
    cout<<"Enter second number"<<endl;
    cin>>b;
    cout<<"Divide is"<<a%b<<endl;

break;

case 'd':
    cout<<"You choose Multiply"<<endl;
    cout<<"Enter first number"<<endl;
    cin>>a;
    cout<<"Enter second number"<<endl;
    cin>>b;
    cout<<"Multiply is"<<a*b<<endl;

break;


default:
cout<<"Choose a Vaild Option";
    break;
}





    return 0;
}
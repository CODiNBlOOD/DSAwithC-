// Ques2. Write a program to find whether an alphabet is a vowel or a consonant.
#include<iostream>
using namespace std;
int main(){

char alphabet;
cout<<"enter a alphabet";
cin>>alphabet;


switch (alphabet)
{
case 'a':
cout<<"vowel";
    break;
    case 'e':
cout<<"vowel";
    break;
    case 'i':
cout<<"vowel";
    break;
    case 'o':
cout<<"vowel";
    break;
    case 'u':
cout<<"vowel";
    break;

default:
cout<<"Consonant";
    break;
}




    return 0;
}
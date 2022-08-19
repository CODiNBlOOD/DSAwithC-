// 5. Program to check if an alphabet is a vowel or a consonant.

#include<iostream>
using namespace std;
int main(){
    char a;
    cout<<"enter char to find it is vowel or consonant"<<endl;
    cin>>a;
    
    if(a=='a' || a=='e' || a=='i' || a=='o' ||
    a=='u' || a=='A' || a=='E' || a=='I' || a=='O' || a=='U' ){
        cout<<"Enter Char is a Vowel"<<endl;
    }
    else{
         cout<<"Enter Char is a Consonant"<<endl;
    }
    
    return 0;
    
}

// Second method 
// char c;
// int isLowercaseVowel, isUppercaseVowel;

// cout << "Enter an alphabet: ";
// cin >> c;

// isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

// isUppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

// if (isLowercaseVowel || isUppercaseVowel)
// cout << c << " is a vowel.";
// else
// cout << c << " is a consonant.";
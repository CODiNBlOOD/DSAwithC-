#include<iostream>
using namespace std ;
int main(){

int num;
cin>>num;

for(int i=1;i<=num;i++){
    
    for(int j=1;j<=num-i;j++){
        cout<<" ";
    }
    for(int k=1;k<=i*2-1;k++){
    cout<<"*";
    }
    
    cout<<endl;
}


for(int i=num;i>=1;i--){
    
    for(int j=1;j<=num-i;j++){
        cout<<" ";
    }
    for(int k=1;k<=i*2-1;k++){
    cout<<"*";
    }
    
    cout<<endl;
}


    return 0;
}
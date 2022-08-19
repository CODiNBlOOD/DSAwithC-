// ******
// *****
// ****
// ***
// **
// *

#include<iostream>
using namespace std;
int main(){
    int row,col;
    cout<<"Enter number of rows :";
    cin>>row;
    
    
    for(int i=1;i<=row;i++){
        for(int j=row;j>=i;j--){
            cout<<"*";
        }cout<<endl;
    }
    
}
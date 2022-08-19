// Rectangle pattern

// *****
// *****
// *****
// *****

#include<iostream>
using namespace std;
int main(){
    int row,col;
    cout<<"enter row";
    cin>>row;
    cout<<"enter column";
    cin>>col;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
        cout<<" * ";
        }
        cout<<"\n";
    }
    return 0;
}
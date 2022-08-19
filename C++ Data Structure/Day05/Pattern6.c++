// 1
// 22
// 333
// 4444  
// 55555
// 666666



#include<iostream>
using namespace std;
int main(){
    int row,col;
    cout<<"Enter number of  rows :";
    cin>>row;
    int num=0;
  
    for(int i=1;i<=row;i++){
        
        for(int j=i;j<=i;j++){
            cout<<j+num;
        }cout<<endl;
        num++;
    }
    
}
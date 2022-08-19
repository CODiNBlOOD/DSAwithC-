#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    for(int i=1;i<=num;i++){
        int j;
        for(j=1;j<=num-i;j++){
            cout<<" ";
        }
        int k=i;
        for(;j<=num;j++){
            cout<<k--;
        }
        k=2;
        for(;j<=num+i-1;j++){
cout<<k++;
        }
        cout<<endl;
    }
    return 0;
}
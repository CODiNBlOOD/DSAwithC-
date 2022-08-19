#include<iostream>
using namespace std;
int main(){
    int n,count;
    cin>>n;
count=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-count;j++){
            cout<<j;
        }
        cout<<endl;
        count++;
    }
    return 0;
}
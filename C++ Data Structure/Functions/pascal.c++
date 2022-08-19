#include <iostream>
using namespace std;
int fact(int n ){
    int factorial=1;
    for(int i=1; i<=n; i++){
        factorial*=i;
    }
    return factorial;
}
int ncr(int n, int r){
    int ans=fact(n)/(fact(r)*fact(n-r));
    return ans;
}
int main()
{
    int n;
    cout<<"Enter no. of row: ";
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<ncr(i,j)<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
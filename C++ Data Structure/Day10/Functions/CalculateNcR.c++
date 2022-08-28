#include<iostream>
using namespace std;


int ncr(int num){
    int fact=1;
    for(int i=num;i<=num;i++){
 fact*=i;
    }
   return fact;

}

int main(){
    int n,r;
    cin>>n>>r;
    int ans=ncr(n)/(ncr(r)*ncr(n-r));
    cout<<ans;
    return 0;
}
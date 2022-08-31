#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    const int N = 1e6+2;
     bool check[N];
    for(int i=0;i<N;i++){
        check[i]==0; // or we can declare it false
    }

    for(int i=0;i<n;i++){
        if(arr[i]>=0){
            check[arr[i]]=1; // Or we can declare it true
        }
    }
    
    // now check which number is missing  

    int ans = -1; // because if we can't find answer then it will be -1 , it will not become 0 or 1 so we did't get wrong answer
    for(int i=1;i<N;i++){  //why N because it is checking whole check arry which we declared ablove  and i =1 because we want positive number and we are comparing from 0 to n 
    // and we cannot decalre start point [ which is 0] as missing term 
    
    // as we compare after 0 as our smallest positive number because before 0 there is negative number -1 , and after 0 is + number that is 1 , that's why we start from 1 
      if(check[i]==0){
        ans=i;
        break;
      }
    }

cout<<ans<<endl;

}
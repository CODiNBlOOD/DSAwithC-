#include<iostream>
using namespace std;



int main(){
int n;
cin>>n;
int array[n];
 for(int i=0;i<n;i++){
    cin>>array[i];
    }
int counter = 1;
// now if counter is < n then run the program and after each iteration counter ++;
// Basically counter is for iteration  

    while(counter<n){
        for(int i=0;i<n-counter;i++){
                if(array[i]>array[i+1]){
                    int temp = 0;
                    temp=array[i];
                    array[i]=array[i+1];
                    array[i+1]=temp;
                }
            }
             counter++;
        }
       
    
 for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
}
